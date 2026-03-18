/*
 * XREFs of ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180020CD8
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000E2BC (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x180012054 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180020DC0 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18002BEBC (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::Create(const struct CRegion *a1, struct CRegionShape **a2)
{
  struct CRegionShape *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  struct CRegionShape *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD v12[3]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-120h]

  v4 = 0LL;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v12);
  *a2 = 0LL;
  v13 = 0;
  v5 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
         a1,
         (__int64)v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1Bu);
  }
  else
  {
    v7 = (struct CRegionShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  16LL);
    v4 = v7;
    if ( v7 )
    {
      *((_QWORD *)v7 + 1) = 0LL;
      *(_QWORD *)v7 = &CRegionShape::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
      goto LABEL_7;
    }
    v8 = CRegionShape::Init(v4, v12[0], v13);
    v6 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v4;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x22u);
  }
  if ( v4 )
    CRegionShape::`vector deleting destructor'(v4, 1u);
LABEL_7:
  DynArrayImpl<1>::~DynArrayImpl<1>(v12, v9, v10);
  return v6;
}
