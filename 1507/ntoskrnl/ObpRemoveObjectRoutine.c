/*
 * XREFs of ObpRemoveObjectRoutine @ 0x14048AD40
 * Callers:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ObpFreeObject @ 0x14048AE10 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, char a2)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( (PVOID)v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, v4, a1 + 48, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _DWORD, _QWORD, _BYTE))(v4 + 152))(
      a1 + 48,
      2LL,
      0LL,
      0LL,
      0LL,
      &v6,
      0,
      0LL,
      0);
  if ( *(_QWORD *)(v4 + 136) )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    (*(void (__fastcall **)(__int64))(v4 + 136))(a1 + 48);
  }
  return ObpFreeObject(a1);
}
