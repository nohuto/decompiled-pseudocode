/*
 * XREFs of DbgkRegisterErrorPort @ 0x1405BE8F4
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14017FE90 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14017FFF0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     DbgkpDeleteErrorPort @ 0x1406691C4 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // di
  unsigned int v4; // esi
  wchar_t *PoolWithQuotaTag; // rax
  _QWORD *v6; // r14
  int v7; // edi
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int16 v17; // ax
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-E8h]
  _WORD v21[20]; // [rsp+78h] [rbp-E0h] BYREF
  int v22; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-B0h]
  __int64 v24; // [rsp+B0h] [rbp-A8h]
  int v25; // [rsp+B8h] [rbp-A0h]
  __int128 v26; // [rsp+C0h] [rbp-98h]
  _QWORD v27[9]; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  if ( !(_DWORD)Size || (Size & 1) != 0 || (unsigned int)Size > 0xFFFF )
    return 3221225485LL;
  v4 = Size;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)Size, 0x50676244u);
  UnicodeString.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(PoolWithQuotaTag, Src, v4);
  v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  if ( v6 )
  {
    memset(v21, 0, sizeof(v21));
    v21[2] |= 0x8000u;
    v21[1] = 40;
    v20 = 40LL;
    memset(v27, 0, sizeof(v27));
    v27[2] = 272LL;
    v27[4] = 8704LL;
    LODWORD(v27[0]) = 0x100000;
    v22 = 48;
    v23 = 0LL;
    v25 = 512;
    v24 = 0LL;
    v26 = 0LL;
    v7 = ZwAlpcConnectPort((__int64)(v6 + 1), (__int64)&UnicodeString, (__int64)&v22);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v6 = 1LL;
      Process = CurrentThread->ApcState.Process;
      --CurrentThread->KernelApcDisable;
      v11 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL, v8);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&DbgkpErrorPortLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&DbgkpErrorPortLock, v11, (ULONG_PTR)&DbgkpErrorPortLock, v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v15 = DbgkpErrorPort;
      if ( !DbgkpErrorPort )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      DbgkpErrorPort = (__int64)v6;
      DbgkpErrorProcess = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
      KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
      v17 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v7 = 0;
      v6 = 0LL;
      if ( v15 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v15 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v15 + 8), 0LL, v16);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort(v15);
      }
      KeSetEvent((PRKEVENT)DbgkErrorPortRegisteredEvent, 0, 0);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v7;
}
