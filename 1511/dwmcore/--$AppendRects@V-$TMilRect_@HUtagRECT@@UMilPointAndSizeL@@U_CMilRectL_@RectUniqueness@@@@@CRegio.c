/*
 * XREFs of ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180019244
 * Callers:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x180009B08 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18006D9C4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>(
        FastRegion::CRegion *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // r15d
  __int64 v8; // rsi
  int v9; // edi
  struct tagRECT v11; // [rsp+48h] [rbp-C0h]
  struct tagRECT v12; // [rsp+58h] [rbp-B0h] BYREF
  int *v13; // [rsp+68h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v15[80]; // [rsp+B8h] [rbp-50h] BYREF

  v14 = 0;
  v3 = 0;
  v13 = &v14;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = v3 + 5;
      if ( a3 < v3 + 5 )
        v7 = a3;
      FastRegion::CRegion::SetRectangle(
        (FastRegion::CRegion *)&v13,
        *(_DWORD *)(a2 + 16LL * v3),
        *(_DWORD *)(a2 + 16LL * v3 + 4),
        *(_DWORD *)(a2 + 16LL * v3 + 8),
        *(_DWORD *)(a2 + 16LL * v3 + 12));
      if ( ++v3 < v7 )
        break;
LABEL_8:
      v9 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v13);
      if ( v9 < 0 )
        goto LABEL_11;
      if ( v3 >= a3 )
        goto LABEL_10;
    }
    v8 = 16LL * v3 + a2 + 8;
    while ( 1 )
    {
      v11 = *(struct tagRECT *)(v8 - 8);
      v12 = v11;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v15, &v12);
      v9 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v13, (const struct CRegion *)v15);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v15);
      if ( v9 < 0 )
        break;
      ++v3;
      v8 += 16LL;
      if ( v3 >= v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_10:
    v9 = 0;
  }
LABEL_11:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v13);
  return (unsigned int)v9;
}
