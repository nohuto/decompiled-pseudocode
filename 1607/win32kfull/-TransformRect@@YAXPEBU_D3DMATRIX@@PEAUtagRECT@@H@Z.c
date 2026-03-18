/*
 * XREFs of ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C0221B9C
 * Callers:
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0220680 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C0220CD8 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0221DA4 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

void __fastcall TransformRect(const struct _D3DMATRIX *a1, struct tagRECT *a2, int a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // r9d
  int v6; // r11d

  v3 = (int)a1;
  TransformVector((_DWORD)a1, (_DWORD)a2, (_DWORD)a2 + 4, 0, a3);
  TransformVector(v3, v4 + 8, v4 + 12, v5, v6);
}
