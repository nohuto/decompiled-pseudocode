/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C02D90A0
 * Callers:
 *     UmfdDrvFree @ 0x1C02D9070 (UmfdDrvFree.c)
 *     UmfdQueryFont @ 0x1C02D94E0 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C02D9700 (UmfdQueryFontTree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  void **v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v5 = 9;
  CurrentThread = KeGetCurrentThread();
  v7 = a1;
  v8 = a2;
  v4 = &FreeRequest::`vftable';
  return UmfdClientSendAndWaitForCompletion(a3, (__int64)&v4);
}
