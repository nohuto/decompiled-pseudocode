/*
 * XREFs of AlpcpAllocateMessage @ 0x14047CF10
 * Callers:
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14061FA98 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *Blob; // rax
  _QWORD *v6; // rdi
  int v7; // ebx
  signed __int32 v8; // eax
  __int64 result; // rax

  if ( a2 > 0x28 )
    v4 = a2 + 224;
  else
    v4 = 776LL;
  Blob = AlpcpAllocateBlob((__int64)&AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)Blob);
  v7 = *((_DWORD *)v6 + 62);
  memset(v6, 0, 0x108uLL);
  *((_WORD *)v6 + 113) = 40;
  --*((_WORD *)v6 - 15);
  *((_DWORD *)v6 + 62) = v7 & 0x7FFFFFFF;
  do
    v8 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v8 );
  *((_DWORD *)v6 + 64) = v8;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *((_WORD *)v6 + 113) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}
