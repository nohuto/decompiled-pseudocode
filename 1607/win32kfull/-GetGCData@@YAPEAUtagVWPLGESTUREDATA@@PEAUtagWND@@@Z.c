/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C012A668
 * Callers:
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C012A1DC (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012A3E4 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     SetGestureConfigSettings @ 0x1C012A53C (SetGestureConfigSettings.c)
 *     GetGestureConfigSettings @ 0x1C01FB21C (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C009B91C (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  int v1; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = VWPLGetData(*(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 816LL), (__int64)a1, &v3);
  return (struct tagVWPLGESTUREDATA *)(v3 & -(__int64)(v1 != 0));
}
