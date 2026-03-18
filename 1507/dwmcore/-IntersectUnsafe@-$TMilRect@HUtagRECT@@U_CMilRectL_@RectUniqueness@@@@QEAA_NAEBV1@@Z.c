/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18005BFC4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char result; // al

  if ( *a2 > *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 > a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  if ( v3 < a1[2] )
    a1[2] = v3;
  v4 = a2[3];
  if ( v4 < a1[3] )
    a1[3] = v4;
  if ( a1[2] > *a1 && a1[3] > a1[1] )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
