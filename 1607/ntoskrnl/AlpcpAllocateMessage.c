/*
 * XREFs of AlpcpAllocateMessage @ 0x14040B38C
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040849C (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140409458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040B470 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14040D624 (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140654D3C (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v6; // rdi
  __int64 result; // rax
  int v8; // ebx
  signed __int32 v9; // eax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 232;
  }
  else
  {
    v4 = 784LL;
  }
  Blob = AlpcpAllocateBlob(&AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob(Blob);
  v8 = *(_DWORD *)(v6 + 256);
  memset((void *)v6, 0, 0x110uLL);
  *(_WORD *)(v6 + 234) = 40;
  --*(_WORD *)(v6 - 30);
  *(_DWORD *)(v6 + 256) = v8 & 0x7FFFFFFF;
  do
    v9 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v9 );
  *(_DWORD *)(v6 + 264) = v9;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *(_WORD *)(v6 + 234) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}
