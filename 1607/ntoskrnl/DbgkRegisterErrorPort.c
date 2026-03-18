/*
 * XREFs of DbgkRegisterErrorPort @ 0x14057B984
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14015AB20 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14015AC80 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     DbgkpDereferenceErrorPort @ 0x1401B75A4 (DbgkpDereferenceErrorPort.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // bx
  unsigned int v4; // esi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v6; // r14
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r12
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
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
    v7 = ZwAlpcConnectPort((__int64)(v6 + 2), (__int64)&UnicodeString, (__int64)&v22);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v6 = 1;
      v6[1] = 0;
      Process = CurrentThread->ApcState.Process;
      --CurrentThread->KernelApcDisable;
      v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&DbgkpErrorPortLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&DbgkpErrorPortLock, v10, (ULONG_PTR)&DbgkpErrorPortLock);
      if ( v11 )
        v11[26] |= 1u;
      v13 = DbgkpErrorPort;
      if ( !DbgkpErrorPort )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      DbgkpErrorPort = (__int64)v6;
      DbgkpErrorProcess = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
      KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v14, v15, v16);
      v7 = 0;
      v6 = 0LL;
      if ( v13 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v13 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v13 + 8), 0LL, v17);
        DbgkpDereferenceErrorPort((volatile signed __int32 *)v13);
      }
      KeSetEvent(DbgkErrorPortRegisteredEvent, 0, 0);
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
