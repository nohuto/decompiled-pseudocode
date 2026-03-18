/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00946DC
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0094780 (SetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C010B61C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C010B7C4 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     GetGestureConfigSettings @ 0x1C0203ECC (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C00925CC (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  int v1; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = VWPLGetData(*(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 824LL), (__int64)a1, &v3);
  return (struct tagVWPLGESTUREDATA *)(v3 & -(__int64)(v1 != 0));
}
