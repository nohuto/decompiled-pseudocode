/*
 * XREFs of NtDeleteBootEntry @ 0x1406F4348
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x140678A7C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140678BA8 (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtDeleteBootEntry(ULONG Id)
{
  __int64 v1; // r9
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  NTSTATUS EnvironmentVariable; // ebx
  signed __int32 v10; // eax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  int v13; // [rsp+30h] [rbp-48h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-40h] BYREF

  if ( dword_1403254D0 != 2 )
    return -1073741822;
  if ( Id > 0xFFFF )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v1);
  v8 = v7;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  qword_140325228 = (__int64)v6;
  swprintf_s(Dst, 9uLL, L"Boot%04X", Id);
  v13 = 0;
  EnvironmentVariable = IoGetEnvironmentVariableEx(
                          (__int64)Dst,
                          (__int64)&EfiBootVariablesGuid,
                          0LL,
                          (__int64)&v13,
                          0LL);
  if ( EnvironmentVariable != -1073741568 )
    goto LABEL_15;
  if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) != 0 )
  {
    swprintf_s(Dst, 9uLL, L"Boot%04x", Id);
    v13 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (__int64)Dst,
                            (__int64)&EfiBootVariablesGuid,
                            0LL,
                            (__int64)&v13,
                            0LL);
LABEL_15:
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx((__int64)Dst, (__int64)&EfiBootVariablesGuid, 0LL, 0, 1);
  }
  qword_140325228 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v10);
  KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return EnvironmentVariable;
}
