/*
 * XREFs of ObpRemoveObjectRoutine @ 0x14041B730
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400ED7E0 (NtAssociateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpFreeObject @ 0x14041B800 (ObpFreeObject.c)
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
