/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180048BE0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180048B20 (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800213C4 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18003D448 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CVisual **this,
        struct MIL_CHANNEL__ *const a2,
        const struct tagRECT *a3,
        struct CVisual *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  CDesktopManager *v9; // rcx
  int v10; // eax
  int v11; // eax

  v7 = CVisual::Initialize((CVisual *)this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x86u);
  }
  else
  {
    this[33] = 0LL;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    *((struct tagRECT *)this + 20) = *a3;
    *((struct tagRECT *)this + 19) = *a3;
    *((float *)this + 84) = CDesktopManager::GetScalingFactorForCVI(v9, a3);
    this[37] = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v10 = CVisual::RenderRecursive(this[37]);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x8Eu);
    }
    else
    {
      v11 = CTransitionWindowSnapshot::_EnsureCVIResource((CTransitionWindowSnapshot *)this, a3);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x91u);
      else
        CVisual::SetDirtyFlags((CVisual *)this, 4096);
    }
  }
  return v8;
}
