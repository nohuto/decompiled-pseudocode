/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18012C1FC
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        FastRegion::CRegion **this,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  float *v7; // rsi
  int v8; // r14d
  struct tagRECT v10; // [rsp+48h] [rbp-C0h]
  struct tagRECT v11; // [rsp+58h] [rbp-B0h] BYREF
  FastRegion::CRegion *v12; // [rsp+68h] [rbp-A0h] BYREF
  int v13; // [rsp+70h] [rbp-98h] BYREF
  FastRegion::CRegion *v14[10]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = 0;
  v12 = (FastRegion::CRegion *)&v13;
  v13 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 + 5;
    if ( v5 + 5 > 1 )
      v6 = 1;
    FastRegion::CRegion::SetRectangle(
      (FastRegion::CRegion *)&v12,
      (int)*(float *)(a2 + 16LL * v5),
      (int)*(float *)(a2 + 16LL * v5 + 4),
      (int)*(float *)(a2 + 16LL * v5 + 8),
      (int)*(float *)(a2 + 16LL * v5 + 12));
    if ( ++v5 < v6 )
      break;
LABEL_8:
    v8 = FastRegion::CRegion::Union(this, &v12);
    if ( v8 < 0 )
      goto LABEL_11;
    if ( v5 )
      goto LABEL_12;
  }
  v7 = (float *)(16LL * v5 + a2 + 8);
  while ( 1 )
  {
    v10.left = (int)*(v7 - 2);
    v10.top = (int)*(v7 - 1);
    v10.right = (int)*v7;
    v10.bottom = (int)v7[1];
    v11 = v10;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v14, &v11);
    v8 = FastRegion::CRegion::Union(&v12, v14);
    FastRegion::CRegion::FreeMemory(v14);
    if ( v8 < 0 )
      break;
    ++v5;
    v7 += 4;
    if ( v5 >= v6 )
      goto LABEL_8;
  }
LABEL_11:
  v2 = v8;
LABEL_12:
  FastRegion::CRegion::FreeMemory(&v12);
  return v2;
}
