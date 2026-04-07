/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC
 * Callers:
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800096F8 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800243B0 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800367A0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE6C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 * Callees:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800072BC (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003609C (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800360D0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18003623C (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180036274 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800362A8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x1800363DC (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180036490 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800373C0 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ??9@YA_NAEBUACCENT_POLICY@@0@Z @ 0x180038264 (--9@YA_NAEBUACCENT_POLICY@@0@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039FF0 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180096444 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CResource *a4)
{
  CDesktopManager *v8; // r10
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // r9d
  __m128i v13; // xmm0
  CAccentTransition *v14; // rcx
  __m128i v15; // xmm0
  int started; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // eax
  float SolidFillOpacity; // xmm0_4
  __int64 v31; // rcx
  int updated; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __m128i v37; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+48h] [rbp-38h] BYREF
  struct _MARGINS v39; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v40[4]; // [rsp+60h] [rbp-20h] BYREF

  v38 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v39 = 0LL;
  CVisual::SetInsetFromParent(this, &v39);
  *(struct tagRECT *)((char *)this + 568) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 319);
    v10 = v9 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 321);
    v11 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 320);
    if ( v11 < 0 )
      v11 = 0;
    *((_DWORD *)this + 144) = v11 + *((_DWORD *)this + 142);
    v12 = v10 - v9;
    if ( v12 < 0 )
      v12 = 0;
    *((_DWORD *)this + 145) = v12 + *((_DWORD *)this + 143);
    *((_QWORD *)v8 + 24) = this;
  }
  v13 = *a3;
  *((_BYTE *)this + 349) = 0;
  v37 = v13;
  if ( (unsigned int)(_mm_cvtsi128_si32(v13) - 2) <= 1 )
  {
    if ( (*((_BYTE *)this + 268) & 2) != 0 )
    {
      VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
      v21 = *((_QWORD *)this + 38);
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v21)(v21, 1LL);
        *((_QWORD *)this + 38) = 0LL;
      }
      v22 = *((_QWORD *)this + 39);
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v22)(v22, 1LL);
        *((_QWORD *)this + 39) = 0LL;
      }
      v23 = *((_QWORD *)this + 40);
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v23)(v23, 1LL);
        *((_QWORD *)this + 40) = 0LL;
      }
    }
    *(__m128i *)((char *)this + 264) = v37;
    v24 = *((_DWORD *)this + 68);
    *((_DWORD *)this + 82) = v24;
    if ( (*((_BYTE *)this + 268) & 1) != 0 )
      CAccent::_UpdateAccentBackground(this, v24);
    if ( *((_DWORD *)this + 66) == 3 )
    {
      if ( !*((_QWORD *)this + 40) )
      {
        v25 = CAccentBlurBehind::Create(
                *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                (struct CAccentBlurBehind **)this + 40);
        v17 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x493u);
          goto LABEL_72;
        }
      }
      CAccent::_UpdateAccentBlurBehind(this);
    }
    else
    {
      v27 = *((_QWORD *)this + 40);
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v27)(v27, 1LL);
        *((_QWORD *)this + 40) = 0LL;
      }
      VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
      v28 = *((_DWORD *)this + 145) - *((_DWORD *)this + 143);
      if ( v28 < 0 )
        v28 = 0;
      v29 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
      if ( v29 < 0 )
        v29 = 0;
      v40[0] = 0;
      v40[1] = 0;
      *(float *)&v40[3] = (float)v28 + 0.0;
      *(float *)&v40[2] = (float)v29 + 0.0;
      SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
      updated = CAccent::_UpdateSolidFill(v31, this, *((unsigned int *)this + 82), v40, LODWORD(SolidFillOpacity));
      v17 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x4A2u);
        goto LABEL_72;
      }
    }
    v26 = CAccent::_AddOcclusionInstruction(this);
    v17 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4A6u);
      goto LABEL_72;
    }
    CVisual::SetDirtyFlags(this, 0x4000);
  }
  else
  {
    if ( *((_BYTE *)this + 296) )
    {
      v14 = (CAccentTransition *)*((_QWORD *)this + 42);
      if ( v14 )
        CAccentTransition::StopAnimation(v14);
      v37.m128i_i32[3] = 0;
    }
    if ( (unsigned __int8)operator!=(&v37, (char *)this + 264) )
    {
      v15 = v37;
      *((_BYTE *)this + 296) = 1;
      *(__m128i *)((char *)this + 280) = v15;
      started = CAccent::StartTransition(this);
      v17 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x46Eu);
        goto LABEL_72;
      }
    }
    CVisual::SetDirtyFlags(this, 4096);
    if ( (*((_BYTE *)this + 268) & 2) != 0 )
    {
      VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
      v18 = *((_QWORD *)this + 38);
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
        *((_QWORD *)this + 38) = 0LL;
      }
      v19 = *((_QWORD *)this + 39);
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1LL);
        *((_QWORD *)this + 39) = 0LL;
      }
    }
    v20 = *((_QWORD *)this + 40);
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1LL);
      *((_QWORD *)this + 40) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 268) & 0xE0) != 0 )
  {
    v33 = CAccent::_EnsureBorderShadowAtlas(this);
    v17 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x4ACu);
      goto LABEL_72;
    }
    CVisual::SetDirtyFlags(this, 2);
  }
  else
  {
    v35 = CAccent::_RemoveBorderShadowAtlas(this);
    v17 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x4B1u);
      goto LABEL_72;
    }
  }
  v34 = *((_DWORD *)this + 67);
  if ( (v34 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v34 & 0x200) != 0 && *((_QWORD *)this + 46) )
  {
    CVisual::SetDirtyFlags(this, 0x8000);
  }
LABEL_72:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
  return v17;
}
