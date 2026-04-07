/*
 * XREFs of ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003EA98
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x18001E910 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003ED38 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18003F3A4 (--1CDWMDisplay@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??4CDWMDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x180072984 (--4CDWMDisplay@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180072A80 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180072AEC (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 */

bool __fastcall CDWMDisplaySet::IsEquivalentRotated(CDWMDisplaySet *this, const struct CDWMDisplaySet *a2)
{
  int v2; // eax
  bool IsEquivalentTo; // bl
  CDWMDisplay *v6; // r14
  _DWORD *v7; // r10
  int v8; // r15d
  int v9; // ecx
  bool v11; // di
  __int128 v12; // xmm6
  __int64 v13; // r10
  int v14; // edx
  __int128 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+38h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int128 v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+134h] [rbp+34h]
  int v27; // [rsp+138h] [rbp+38h]
  int v28; // [rsp+150h] [rbp+50h]

  v2 = *((_DWORD *)a2 + 16);
  IsEquivalentTo = 0;
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  if ( *((_DWORD *)this + 16) != v2 )
    goto LABEL_10;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(this, &v18) < 0 )
    goto LABEL_10;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(a2, &v15) < 0 )
    goto LABEL_10;
  if ( v20 != 1 )
    goto LABEL_10;
  if ( v17 != 1 )
    goto LABEL_10;
  v6 = *(CDWMDisplay **)v18;
  v7 = *(_DWORD **)v15;
  if ( *(_DWORD *)(*(_QWORD *)v18 + 168LL) != *(_DWORD *)(*(_QWORD *)v15 + 168LL) )
    goto LABEL_10;
  if ( *((_DWORD *)v6 + 43) != v7[43] )
    goto LABEL_10;
  if ( *((_DWORD *)v6 + 44) != v7[44] )
    goto LABEL_10;
  v8 = *((_DWORD *)v6 + 52);
  v9 = v7[52];
  if ( v8 == v9 )
    goto LABEL_10;
  v11 = ((v8 - 2) & 0xFFFFFFFD) == 0;
  v22 = *((_OWORD *)this + 1);
  if ( ((v9 - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( ((v8 - 2) & 0xFFFFFFFD) != 0 )
    {
      v11 = 1;
LABEL_14:
      LODWORD(v21) = *((_DWORD *)a2 + 5);
      DWORD1(v21) = *((_DWORD *)a2 + 4);
      DWORD2(v21) = *((_DWORD *)a2 + 7);
      HIDWORD(v21) = *((_DWORD *)a2 + 6);
      v12 = v21;
      goto LABEL_15;
    }
    v11 = 0;
  }
  if ( v11 )
    goto LABEL_14;
  v12 = *((_OWORD *)a2 + 1);
  v21 = v12;
LABEL_15:
  if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(&v22, &v21) )
  {
    CDWMDisplay::operator=(&v23, v13);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v23 = 1;
    v28 = v8;
    if ( v11 )
    {
      v14 = v26;
      v26 = v27;
      v27 = v14;
      v25 = v12;
    }
    IsEquivalentTo = CDWMDisplay::IsEquivalentTo(v6, (const struct CDWMDisplay *)&v23);
    CDWMDisplay::~CDWMDisplay((CDWMDisplay *)&v23);
  }
LABEL_10:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v15);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v18);
  return IsEquivalentTo;
}
