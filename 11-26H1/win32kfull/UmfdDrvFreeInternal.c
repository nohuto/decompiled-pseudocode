/*
 * XREFs of UmfdDrvFreeInternal @ 0x1400D3888
 * Callers:
 *     UmfdDrvFree @ 0x1400D3850 (UmfdDrvFree.c)
 *     UmfdQueryFont @ 0x1400FD550 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1401F7D30 (UmfdQueryFontTree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF

  FontDriverDdiRequest::FontDriverDdiRequest(v7, 9LL);
  v7[5] = a1;
  v7[0] = &FreeRequest::`vftable';
  v7[6] = a2;
  return UmfdClientSendAndWaitForCompletion(a3, v7);
}
