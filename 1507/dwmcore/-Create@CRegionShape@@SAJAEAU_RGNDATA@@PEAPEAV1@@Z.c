/*
 * XREFs of ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x18014AAD0
 * Callers:
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x180121C34 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078790 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRegionShape::Create(struct _RGNDATA *a1, struct CRegionShape **a2)
{
  struct CRegionShape *v4; // rax
  struct CRegionShape *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (struct CRegionShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                16LL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *(_QWORD *)v4 = &CRegionShape::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CRegionShape::Init(v5, (const struct tagRECT *)a1->Buffer, a1->rdh.nCount);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA8u);
    }
    if ( v5 )
      CRegionShape::`vector deleting destructor'(v5, 1);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA1u);
  }
  return v6;
}
