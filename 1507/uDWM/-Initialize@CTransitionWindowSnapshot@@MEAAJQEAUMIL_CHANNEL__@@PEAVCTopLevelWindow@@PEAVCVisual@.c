/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800116D0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800092FC (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x1800068E8 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000958C (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x1800112A8 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180011484 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001BD84 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007AAF8 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct MIL_CHANNEL__ *const a2,
        struct CTopLevelWindow *a3,
        struct CVisual *a4,
        const struct tagRECT *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  struct CWindowSnapshot *v12; // rcx
  struct tagRECT v13; // xmm1
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct CWindowSnapshot *v16; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1800BC628 & 1) == 0 )
  {
    dword_1800BC564 = -2147023434;
    dword_1800BC628 |= 1u;
  }
  v16 = 0LL;
  v8 = CVisual::Initialize(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BC564, 1LL, v8, 0x57u);
    return v9;
  }
  v10 = CWindowSnapshot::Create(a3, &v16);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v11 = *((_QWORD *)a3 + 93);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v11)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v11 + 384),
                a5,
                (struct CResource **)this + 34,
                (float *)this + 84) >= 0 )
    {
      v10 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v9 = v10;
      if ( v10 < 0 )
      {
        v15 = 95;
        goto LABEL_26;
      }
    }
    else
    {
      if ( !a4 )
      {
        v9 = -2147023434;
        MilInstrumentationCheckHR(0x14u, &dword_1800BC564, 1LL, -2147023434, 0x64u);
        goto LABEL_14;
      }
      *((_QWORD *)this + 37) = a4;
      _InterlockedAdd((volatile signed __int32 *)a4 + 2, 1u);
      if ( (*(_DWORD *)(v11 + 568) & 0xFFF) == 0x17 )
        *((_DWORD *)this + 84) = 1065353216;
      else
        *((float *)this + 84) = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a5);
      v10 = CVisual::RenderRecursive(*((CVisual **)this + 37));
      v9 = v10;
      if ( v10 < 0 )
      {
        v15 = 116;
        goto LABEL_26;
      }
      v10 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a5);
      v9 = v10;
      if ( v10 < 0 )
      {
        v15 = 119;
        goto LABEL_26;
      }
    }
    v12 = v16;
    *((struct tagRECT *)this + 20) = *a5;
    v13 = *a5;
    *((_QWORD *)this + 33) = v12;
    *((struct tagRECT *)this + 19) = v13;
    if ( v12 )
      _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
    CVisual::SetDirtyFlags(this, 0x1000u);
    goto LABEL_14;
  }
  v15 = 90;
LABEL_26:
  MilInstrumentationCheckHR(0x14u, &dword_1800BC564, 1LL, v10, v15);
LABEL_14:
  if ( v16 )
    CBaseObject::Release(v16);
  return v9;
}
