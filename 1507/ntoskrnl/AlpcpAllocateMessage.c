/*
 * XREFs of AlpcpAllocateMessage @ 0x140474B20
 * Callers:
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14069E8E8 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 Blob; // rax
  __int64 v6; // r9
  ULONG_PTR v7; // rdi
  __int64 result; // rax
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v14; // ebx
  signed __int32 v15; // eax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 224;
  }
  else
  {
    v4 = 776LL;
  }
  Blob = AlpcpAllocateBlob(&AlpcMessageType, v4, a3);
  v7 = Blob;
  if ( !Blob )
    return 3221225626LL;
  v9 = (unsigned __int64 *)(Blob - 16);
  v10 = KeAbPreAcquire(Blob - 16, 0LL, 0LL, v6);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  *(_BYTE *)(v7 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v7, 0x26uLL, BugCheckParameter4);
  v14 = *(_DWORD *)(v7 + 248);
  memset((void *)v7, 0, 0x108uLL);
  *(_WORD *)(v7 + 226) = 40;
  --*(_WORD *)(v7 - 30);
  *(_DWORD *)(v7 + 248) = v14 & 0x7FFFFFFF;
  do
    v15 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v15 );
  *(_DWORD *)(v7 + 256) = v15;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v7);
  *(_WORD *)(v7 + 226) = 40;
  result = 0LL;
  *a1 = v7;
  return result;
}
