/*
 * XREFs of ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C022AE1C
 * Callers:
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C022B220 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B488 (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C022BBD0 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 */

struct tagRECT *__fastcall GetScreenRect(
        struct tagRECT *__return_ptr retstr,
        int a2,
        const struct _D3DMATRIX *a3,
        struct tagRECT *a4)
{
  struct tagRECT *result; // rax

  if ( a2 && a3 )
    TransformRect(a3, a4, 0);
  result = retstr;
  *retstr = *a4;
  return result;
}
