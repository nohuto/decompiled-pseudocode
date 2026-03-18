/*
 * XREFs of NtDeleteBootEntry @ 0x14067079C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x1405FE10C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1405FE238 (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtDeleteBootEntry(ULONG Id)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_1402D6390 != 2 )
    return -1073741822;
  if ( Id > 0xFFFF )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  swprintf_s(Dst, 9uLL, L"Boot%04X", Id);
  v6 = 0;
  EnvironmentVariable = IoGetEnvironmentVariableEx((__int64)Dst, (__int64)&EfiBootVariablesGuid, 0LL, (__int64)&v6, 0LL);
  if ( EnvironmentVariable != -1073741568 )
    goto LABEL_11;
  if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) != 0 )
  {
    swprintf_s(Dst, 9uLL, L"Boot%04x", Id);
    v6 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (__int64)Dst,
                            (__int64)&EfiBootVariablesGuid,
                            0LL,
                            (__int64)&v6,
                            0LL);
LABEL_11:
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx((__int64)Dst, (__int64)&EfiBootVariablesGuid, 0LL, 0, 1);
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return EnvironmentVariable;
}
