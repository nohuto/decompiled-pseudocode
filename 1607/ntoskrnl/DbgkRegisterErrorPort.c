/*
 * XREFs of DbgkRegisterErrorPort @ 0x14057BE30
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14015B090 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14015B1F0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     DbgkpDereferenceErrorPort @ 0x1401B7488 (DbgkpDereferenceErrorPort.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // bx
  unsigned int v4; // esi
  wchar_t *PoolWithQuotaTag; // rax
  HANDLE *v6; // r14
  NTSTATUS v7; // ebx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r12
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  UNICODE_STRING PortName; // [rsp+60h] [rbp-F8h] BYREF
  ULONG_PTR BufferLength; // [rsp+70h] [rbp-E8h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+78h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-B8h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  if ( !(_DWORD)Size || (Size & 1) != 0 || (unsigned int)Size > 0xFFFF )
    return 3221225485LL;
  v4 = Size;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)Size, 0x50676244u);
  PortName.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  memmove(PoolWithQuotaTag, Src, v4);
  v6 = (HANDLE *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  if ( v6 )
  {
    memset(&ConnectionMessage, 0, sizeof(ConnectionMessage));
    ConnectionMessage.u2.s2.Type |= 0x8000u;
    ConnectionMessage.u1.s1.TotalLength = 40;
    BufferLength = 40LL;
    memset(&PortAttributes, 0, sizeof(PortAttributes));
    PortAttributes.MaxMessageLength = 272LL;
    PortAttributes.MaxPoolUsage = 8704LL;
    PortAttributes.Flags = 0x100000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwAlpcConnectPort(
           v6 + 1,
           &PortName,
           &ObjectAttributes,
           &PortAttributes,
           0x20000u,
           0LL,
           &ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           0LL);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)v6 = 1;
      *((_DWORD *)v6 + 1) = 0;
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
          ZwAlpcDisconnectPort(*(HANDLE *)(v13 + 8), 0);
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
  RtlFreeAnsiString(&PortName);
  return (unsigned int)v7;
}
