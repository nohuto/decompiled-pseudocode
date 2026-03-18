/*
 * XREFs of ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0220680
 * Callers:
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C0221B9C (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

void __fastcall ApplyWindowTransform(struct _D3DMATRIX *a1, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r9d
  LONG v10; // ebx

  v10 = 0;
  if ( (unsigned int)NlsNullProc((struct tagKE *)a1) )
  {
    if ( v7 )
      TransformVector(v8, v7, v7 + 4, 0, v9);
    TransformVector((_DWORD)a1, (_DWORD)a3 + 32, (_DWORD)a3 + 36, 0, a4);
    TransformRect(a1, a3, a4);
    TransformRect(a1, a3 + 1, a4);
    TransformVector((_DWORD)a1, (_DWORD)a3 + 184, (_DWORD)a3 + 188, 0, a4 == 0);
    if ( a3[2].bottom > 0 )
    {
      do
      {
        TransformVector((_DWORD)a1, (_DWORD)a3 + 8 * (v10 + 6), (_DWORD)a3 + 8 * (v10 + 6) + 4, 0, a4);
        ++v10;
      }
      while ( v10 < a3[2].bottom );
    }
  }
}
