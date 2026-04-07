/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000A280
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180041DDC (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 * Callees:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180009E24 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000A00C (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001E170 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180037BE8 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18004212C (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180082D10 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct IDwmChannel *a2,
        struct CTopLevelWindow *a3,
        struct CVisual *a4,
        const struct tagRECT *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  CBaseObject *v12; // rcx
  struct tagRECT v13; // xmm1
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-28h]
  CBaseObject *v17; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1800B7E18 & 1) == 0 )
  {
    dword_1800B7DA0 = -2147023434;
    dword_1800B7E18 |= 1u;
  }
  v17 = 0LL;
  v8 = CVisual::Initialize(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800B7DA0, 1u, v8, 0x57u);
    return v9;
  }
  v10 = CWindowSnapshot::Create(a3, &v17);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 90;
  }
  else
  {
    v11 = *((_QWORD *)a3 + 93);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v11)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v11 + 408),
                a5,
                (struct CResource **)this + 34,
                (float *)this + 84) >= 0 )
    {
      v10 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v9 = v10;
      if ( v10 < 0 )
      {
        v16 = 95;
        goto LABEL_20;
      }
LABEL_11:
      v12 = v17;
      *((struct tagRECT *)this + 20) = *a5;
      v13 = *a5;
      *((_QWORD *)this + 33) = v12;
      *((struct tagRECT *)this + 19) = v13;
      if ( v12 )
        _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
      CVisual::SetDirtyFlags(this, 0x1000u);
      goto LABEL_14;
    }
    if ( !a4 )
    {
      v9 = -2147023434;
      v16 = 100;
      v15 = -2147023434;
      goto LABEL_22;
    }
    *((_QWORD *)this + 37) = a4;
    _InterlockedAdd((volatile signed __int32 *)a4 + 2, 1u);
    if ( (*(_DWORD *)(v11 + 584) & 0xFFF) == 0x17 )
      *((_DWORD *)this + 84) = 1065353216;
    else
      *((float *)this + 84) = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a5);
    v10 = CVisual::RenderRecursive(*((CVisual **)this + 37));
    v9 = v10;
    if ( v10 < 0 )
    {
      v16 = 116;
      goto LABEL_20;
    }
    v10 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a5);
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_11;
    v16 = 119;
  }
LABEL_20:
  v15 = v10;
LABEL_22:
  MilInstrumentationCheckHR(0x14u, &dword_1800B7DA0, 1u, v15, v16);
LABEL_14:
  if ( v17 )
    CBaseObject::Release(v17);
  return v9;
}
