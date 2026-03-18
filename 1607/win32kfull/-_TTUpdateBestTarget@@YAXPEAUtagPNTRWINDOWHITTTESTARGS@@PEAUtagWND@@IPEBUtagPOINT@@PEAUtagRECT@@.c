/*
 * XREFs of ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0221DA4
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0221EF0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C0221B9C (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 */

void __fastcall _TTUpdateBestTarget(
        struct tagPNTRWINDOWHITTTESTARGS *a1,
        struct tagWND *a2,
        int a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5,
        int a6,
        struct tagRECT *a7,
        __int16 a8)
{
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rdi
  struct tagKE *v11; // rcx
  const struct _D3DMATRIX *v12; // rcx

  *((_QWORD *)a1 + 7) = *(_QWORD *)a2;
  v9 = a5;
  *((_DWORD *)a1 + 16) = a3;
  if ( !a5 )
    v9 = (struct tagRECT *)((char *)a2 + 112);
  v10 = (struct tagRECT *)((char *)a1 + 68);
  *(struct tagRECT *)((char *)a1 + 68) = *v9;
  if ( a4 )
    *((struct tagPOINT *)a1 + 6) = *a4;
  if ( a6 )
    *((_DWORD *)a1 + 44) |= 1u;
  else
    *((_DWORD *)a1 + 44) &= ~1u;
  if ( a8 == 3 )
    *((_DWORD *)a1 + 44) |= 2u;
  else
    *((_DWORD *)a1 + 44) &= ~2u;
  if ( !(unsigned int)IsCompositionInputWindow(a2) )
    IntersectRect(v10, &v10->left, &a7->left);
  if ( *((_DWORD *)a1 + 21) )
  {
    v11 = (struct tagKE *)*((_QWORD *)a1 + 12);
    if ( v11 )
    {
      if ( (unsigned int)NlsNullProc(v11) )
      {
        *((_DWORD *)a1 + 12) = (int)(float)((float)*((int *)a1 + 12) * v12->_11);
        *((_DWORD *)a1 + 13) = (int)(float)((float)*((int *)a1 + 13) * v12->_22);
        TransformRect(v12, v10, 0);
      }
    }
  }
}
