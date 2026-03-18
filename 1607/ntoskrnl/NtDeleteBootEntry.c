/*
 * XREFs of NtDeleteBootEntry @ 0x1406B348C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151960 (swprintf_s.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x140628138 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140628264 (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtDeleteBootEntry(ULONG Id)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_1402FD0D0 != 2 )
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
  v9 = 0;
  EnvironmentVariable = IoGetEnvironmentVariableEx((__int64)Dst, (__int64)&EfiBootVariablesGuid, 0LL, (__int64)&v9, 0LL);
  if ( EnvironmentVariable != -1073741568 )
    goto LABEL_11;
  if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) != 0 )
  {
    swprintf_s(Dst, 9uLL, L"Boot%04x", Id);
    v9 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (__int64)Dst,
                            (__int64)&EfiBootVariablesGuid,
                            0LL,
                            (__int64)&v9,
                            0LL);
LABEL_11:
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx((__int64)Dst, (__int64)&EfiBootVariablesGuid, 0LL, 0, 1);
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return EnvironmentVariable;
}
