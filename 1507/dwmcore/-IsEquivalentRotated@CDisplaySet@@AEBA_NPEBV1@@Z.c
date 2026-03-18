/*
 * XREFs of ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x18008CECC
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x18005817C (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 *     ??1CDisplay@@EEAA@XZ @ 0x1800582D0 (--1CDisplay@@EEAA@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008320C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??4CDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x1801248DC (--4CDisplay@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180124B28 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 */

bool __fastcall CDisplaySet::IsEquivalentRotated(CDisplaySet *this, const struct CDisplaySet *a2)
{
  CDisplay *v3; // rbx
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edi
  int v8; // ecx
  bool v9; // r11
  __int128 v10; // xmm6
  __int64 v11; // r10
  char v12; // r11
  int v13; // edx
  bool IsEquivalentTo; // bl
  __int128 v15; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+38h] [rbp-D0h] BYREF
  void **v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B8h]
  _BYTE v19[24]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v20; // [rsp+B8h] [rbp-50h]
  int v21; // [rsp+3ACh] [rbp+2A4h]
  int v22; // [rsp+3B0h] [rbp+2A8h]
  int v23; // [rsp+3C8h] [rbp+2C0h]

  if ( *((_DWORD *)this + 18) != 1 )
    return 0;
  if ( *((_DWORD *)a2 + 18) != 1 )
    return 0;
  v3 = (CDisplay *)**((_QWORD **)this + 6);
  if ( !CDisplay::IsRenderTargetEquivalentTo(v3, **((const struct CDisplay ***)a2 + 6)) )
    return 0;
  v7 = *((_DWORD *)v3 + 224);
  v8 = *(_DWORD *)(v6 + 896);
  v16 = *(_OWORD *)(v5 + 24);
  if ( v7 != v8 )
  {
    v9 = ((v7 - 2) & 0xFFFFFFFD) == 0;
    if ( ((v8 - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( ((v7 - 2) & 0xFFFFFFFD) != 0 )
      {
LABEL_8:
        LODWORD(v15) = v4[7];
        DWORD1(v15) = v4[6];
        DWORD2(v15) = v4[9];
        HIDWORD(v15) = v4[8];
        v10 = v15;
        goto LABEL_9;
      }
      v9 = 0;
    }
    if ( v9 )
      goto LABEL_8;
  }
  v10 = *(_OWORD *)(v4 + 6);
  v15 = v10;
LABEL_9:
  if ( !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(&v16, &v15) )
    return 0;
  v18 = 0;
  v17 = &CDisplay::`vftable';
  CDisplay::operator=(&v17, v11);
  memset(v19, 0, sizeof(v19));
  v23 = v7;
  if ( v12 )
  {
    v13 = v21;
    v21 = v22;
    v22 = v13;
    v20 = v10;
  }
  IsEquivalentTo = CDisplay::IsEquivalentTo(v3, (const struct CDisplay *)&v17, 0);
  CDisplay::~CDisplay((CDisplay *)&v17);
  return IsEquivalentTo;
}
