/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180021860 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180035CA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180068604 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18008BD80 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180002360 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180008EDC (-Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18001C9C0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180035600 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180035710 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180035748 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18003577C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x1800358B0 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180035990 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180036778 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ??9@YA_NAEBUACCENT_POLICY@@0@Z @ 0x180039F78 (--9@YA_NAEBUACCENT_POLICY@@0@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003D68C (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180097F3C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
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
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // r14
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r14
  int v28; // ecx
  int v29; // eax
  int v30; // xmm0_4
  _DWORD *v31; // rcx
  int updated; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __m128i v37; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+48h] [rbp-38h] BYREF
  struct _MARGINS v39; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v40; // [rsp+60h] [rbp-20h] BYREF

  v38 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v39 = 0LL;
  CVisual::SetInsetFromParent(this, &v39);
  *(struct tagRECT *)((char *)this + 568) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 323);
    v10 = v9 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 325);
    v11 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 324);
    if ( v11 < 0 )
      v11 = 0;
    *((_DWORD *)this + 144) = v11 + *((_DWORD *)this + 142);
    v12 = v10 - v9;
    if ( v12 < 0 )
      v12 = 0;
    *((_DWORD *)this + 145) = v12 + *((_DWORD *)this + 143);
    *((_QWORD *)v8 + 26) = this;
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
                *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
                (struct CAccentBlurBehind **)this + 40);
        v17 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x499u);
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
      v40.left = 0;
      v40.top = 0;
      *(float *)&v40.bottom = (float)v28 + 0.0;
      *(float *)&v40.right = (float)v29 + 0.0;
      *(float *)&v30 = CAccent::_GetSolidFillOpacity(this);
      updated = CAccent::_UpdateSolidFill(v31, this, *((_DWORD *)this + 82), &v40, v30);
      v17 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x4A8u);
        goto LABEL_72;
      }
    }
    v26 = CAccent::_AddOcclusionInstruction(this);
    v17 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x4ACu);
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x474u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x4B2u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x4B7u);
      goto LABEL_72;
    }
  }
  v34 = *((_DWORD *)this + 67);
  if ( (v34 & 0x10) != 0 )
  {
    CAccent::SetClipRegion((CBaseObject **)this, a4);
  }
  else if ( (v34 & 0x200) != 0 && *((_QWORD *)this + 46) )
  {
    CVisual::SetDirtyFlags(this, 0x8000);
  }
LABEL_72:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
  return v17;
}
