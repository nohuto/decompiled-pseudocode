/*
 * XREFs of ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x1800B5F38
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180070BB4 (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 *     ??1CDisplay@@EEAA@XZ @ 0x180070CEC (--1CDisplay@@EEAA@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008C5F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??4CDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x180139E8C (--4CDisplay@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x18013A064 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 */

bool __fastcall CDisplaySet::IsEquivalentRotated(CDisplaySet *this, const struct CDisplaySet *a2)
{
  CDisplay *v3; // rdi
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ebx
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
  __int64 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int128 v22; // [rsp+B0h] [rbp-58h]
  int v23; // [rsp+13Ch] [rbp+34h]
  int v24; // [rsp+150h] [rbp+48h]
  int v25; // [rsp+154h] [rbp+4Ch]
  int v26; // [rsp+16Ch] [rbp+64h]

  if ( *((_DWORD *)this + 18) != 1 )
    return 0;
  if ( *((_DWORD *)a2 + 18) != 1 )
    return 0;
  v3 = (CDisplay *)**((_QWORD **)this + 6);
  if ( !CDisplay::IsRenderTargetEquivalentTo(v3, **((const struct CDisplay ***)a2 + 6)) )
    return 0;
  v7 = *((_DWORD *)v3 + 73);
  v8 = *(_DWORD *)(v6 + 292);
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
  v23 = 0;
  v18 = 0;
  v17 = &CDisplay::`vftable';
  CDisplay::operator=(&v17, v11);
  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v26 = v7;
  if ( v12 )
  {
    v13 = v24;
    v24 = v25;
    v25 = v13;
    v22 = v10;
  }
  IsEquivalentTo = CDisplay::IsEquivalentTo(v3, (const struct CDisplay *)&v17, 0);
  CDisplay::~CDisplay((CDisplay *)&v17);
  return IsEquivalentTo;
}
