/*
 * XREFs of ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C0220CD8
 * Callers:
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0221104 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C0221B9C (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 */

struct tagRECT *__fastcall GetScreenRect(
        struct tagRECT *__return_ptr retstr,
        int a2,
        const struct _D3DMATRIX *a3,
        struct tagRECT *a4)
{
  const struct _D3DMATRIX *v6; // r9
  struct tagRECT *result; // rax

  if ( a2 && a3 && (unsigned int)NlsNullProc((struct tagKE *)retstr) )
    TransformRect(v6, a4, 0);
  result = retstr;
  *retstr = *a4;
  return result;
}
