/*
 * XREFs of ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C010ED30
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C010E988 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C010EF18 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C010F2C8 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C010F388 (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bCalculateAndDrawTriangle(
        struct SURFACE *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5,
        void (*a6)(struct SURFACE *, struct _TRIANGLEDATA *))
{
  struct _TRIVERTEX *v6; // rsi
  struct _TRIVERTEX *v7; // rbx
  struct _TRIVERTEX *v8; // rdi
  int v9; // eax
  struct _TRIANGLEDATA *v10; // r9
  LONG y; // edx
  LONG v12; // ecx
  LONG v13; // eax
  int v14; // r8d
  _DWORD *v15; // rdx
  struct _TRIVERTEX *v17; // r8
  struct _TRIVERTEX *v18; // rax

  v6 = a4;
  v7 = a3;
  if ( !a6 )
    return 0LL;
  v8 = a2;
  if ( a2->y > a3->y )
  {
    v8 = a3;
    v7 = a2;
  }
  if ( v7->y > a4->y )
  {
    v6 = v7;
    v7 = a4;
  }
  if ( v8->y > v7->y )
  {
    v18 = v8;
    v8 = v7;
    v7 = v18;
  }
  v9 = lCalculateTriangleArea(v8, v7, v6, a5);
  if ( !v9 )
    return 0LL;
  if ( v9 < 0 )
  {
    v17 = v7;
    v7 = v6;
    v6 = v17;
    if ( (int)lCalculateTriangleArea(v8, v7, v17, v10) <= 0 )
      return 0LL;
  }
  y = *((_DWORD *)a5 + 1);
  if ( v8->y > y )
    y = v8->y;
  *((_DWORD *)a5 + 28) = y;
  v12 = v6->y;
  if ( v7->y > v12 )
    v12 = v7->y;
  v13 = *((_DWORD *)a5 + 3);
  if ( v12 < v13 )
    v13 = v12;
  *((_DWORD *)a5 + 29) = v13;
  v14 = 0;
  if ( v13 - y > 0 )
  {
    v15 = (_DWORD *)((char *)a5 + 172);
    do
    {
      *(v15 - 1) = 0x7FFFFFFF;
      *v15 = 0x80000000;
      ++v14;
      v15 += 10;
    }
    while ( v14 < *((_DWORD *)a5 + 29) - *((_DWORD *)a5 + 28) );
  }
  if ( v8->Red > 0xFF00u )
    v8->Red = -256;
  if ( v8->Green > 0xFF00u )
    v8->Green = -256;
  if ( v8->Blue > 0xFF00u )
    v8->Blue = -256;
  if ( v7->Red > 0xFF00u )
    v7->Red = -256;
  if ( v7->Green > 0xFF00u )
    v7->Green = -256;
  if ( v7->Blue > 0xFF00u )
    v7->Blue = -256;
  if ( v6->Red > 0xFF00u )
    v6->Red = -256;
  if ( v6->Green > 0xFF00u )
    v6->Green = -256;
  if ( v6->Blue > 0xFF00u )
    v6->Blue = -256;
  bCalulateColorGradient(v8, v7, v6, a5);
  vCalculateLine(v8, v7, a5);
  vCalculateLine(v7, v6, a5);
  vCalculateLine(v6, v8, a5);
  if ( bUMPDSecurityGateEx()
    && !*((_QWORD *)a5 + 19)
    && ((char *)a6 == (char *)vGradientFill4 || (char *)a6 == (char *)vGradientFill8) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bCalculateAndDrawTriangle:pfnG references NULL ptData->pxlo.\n",
        1009);
  }
  else
  {
    _guard_dispatch_icall_fptr();
  }
  return 1LL;
}
