/*
 * XREFs of ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18000D204
 * Callers:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x18000C3F4 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180087E9C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>(
        FastRegion::CRegion *this,
        __int64 a2,
        unsigned int a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  unsigned int v8; // r15d
  int *v9; // rcx
  int v10; // r10d
  __int64 v11; // kr00_8
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // edi
  _QWORD v16[3]; // [rsp+40h] [rbp-91h] BYREF
  _DWORD *v17; // [rsp+58h] [rbp-79h] BYREF
  _DWORD v18[18]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v19[80]; // [rsp+A8h] [rbp-29h] BYREF

  v18[0] = 0;
  v3 = v18;
  v4 = 0;
  v17 = v18;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = v4 + 5;
      if ( a3 < v4 + 5 )
        v8 = a3;
      v9 = (int *)(a2 + 16LL * v4);
      v10 = *v9;
      v11 = *((_QWORD *)v9 + 1);
      v12 = HIDWORD(*(_QWORD *)v9);
      if ( *v9 >= (int)v11 || (int)v12 >= SHIDWORD(v11) )
      {
        *v3 = 0;
      }
      else
      {
        *v3 = 2;
        v3[1] = v10;
        v3[2] = v11;
        v3[3] = v12;
        v3[4] = 16;
        v3[7] = v10;
        v3[8] = v11;
        v3[5] = HIDWORD(v11);
        v3[6] = 16;
      }
      if ( ++v4 < v8 )
        break;
LABEL_11:
      v14 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v17);
      if ( v14 < 0 )
        goto LABEL_14;
      if ( v4 >= a3 )
        goto LABEL_13;
      v3 = v17;
    }
    v13 = 16LL * v4 + a2 + 8;
    while ( 1 )
    {
      *(_OWORD *)&v16[1] = *(_OWORD *)(v13 - 8);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v19, (const struct tagRECT *)&v16[1]);
      v14 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v17, (const struct CRegion *)v19);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v19);
      if ( v14 < 0 )
        break;
      ++v4;
      v13 += 16LL;
      if ( v4 >= v8 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_13:
    v14 = 0;
  }
LABEL_14:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v17);
  return (unsigned int)v14;
}
