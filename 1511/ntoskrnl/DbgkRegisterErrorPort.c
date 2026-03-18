/*
 * XREFs of DbgkRegisterErrorPort @ 0x140547930
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1401514C0 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x140151620 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     DbgkpDeleteErrorPort @ 0x1405F05F4 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // di
  unsigned int v4; // esi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v6; // r14
  int v7; // edi
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-E8h]
  _WORD v18[20]; // [rsp+78h] [rbp-E0h] BYREF
  int v19; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-B0h]
  __int64 v21; // [rsp+B0h] [rbp-A8h]
  int v22; // [rsp+B8h] [rbp-A0h]
  __int128 v23; // [rsp+C0h] [rbp-98h]
  _QWORD v24[9]; // [rsp+D0h] [rbp-88h] BYREF

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
    memset(v18, 0, sizeof(v18));
    v18[2] |= 0x8000u;
    v18[1] = 40;
    v17 = 40LL;
    memset(v24, 0, sizeof(v24));
    v24[2] = 272LL;
    v24[4] = 8704LL;
    LODWORD(v24[0]) = 0x100000;
    v19 = 48;
    v20 = 0LL;
    v22 = 512;
    v21 = 0LL;
    v23 = 0LL;
    v7 = ZwAlpcConnectPort((__int64)(v6 + 2), (__int64)&UnicodeString, (__int64)&v19);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v6 = 1;
      v6[1] = 0;
      Process = CurrentThread->ApcState.Process;
      --CurrentThread->KernelApcDisable;
      v10 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&DbgkpErrorPortLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&DbgkpErrorPortLock, v10, (ULONG_PTR)&DbgkpErrorPortLock);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v13 = DbgkpErrorPort;
      if ( !DbgkpErrorPort )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      DbgkpErrorPort = (__int64)v6;
      DbgkpErrorProcess = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
      KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v7 = 0;
      v6 = 0LL;
      if ( v13 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v13 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v13 + 8), 0LL, v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort(v13);
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
