/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C01283AC
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0128280 (SetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0154538 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C0154690 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     GetGestureConfigSettings @ 0x1C0203B5C (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C00E2588 (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  int v1; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = VWPLGetData(*(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 824LL), (__int64)a1, &v3);
  return (struct tagVWPLGESTUREDATA *)(v3 & -(__int64)(v1 != 0));
}
