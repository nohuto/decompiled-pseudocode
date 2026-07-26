/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A0880
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_771a8e8e365bef8cca390f7125e613d4_::_helper_func_cdecl_ @ 0x1C00B1D40 (_lambda_771a8e8e365bef8cca390f7125e613d4_--_helper_func_cdecl_.c)
 *     _lambda_1ce06b2b40968439b229a98218e85867_::_helper_func_cdecl_ @ 0x1C00E2E00 (_lambda_1ce06b2b40968439b229a98218e85867_--_helper_func_cdecl_.c)
 * Callees:
 *     ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A1F14 (-UnlockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A3230 (-LockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AFC44 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B02D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        Ndis::Initmode *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum CallRunMode a3)
{
  enum CallRunMode v3; // ebp
  Ndis::BindEngine *v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  bool v7; // bl

  v3 = (int)a2;
  if ( *((_BYTE *)this + 1995) )
  {
    v5 = (Ndis::BindEngine *)((char *)this + 5208);
    Ndis::BindEngine::LockBindings((Ndis::BindEngine *)((char *)this + 5208));
    v7 = Ndis::Initmode::CheckAllDriversRunning(this, v6);
    Ndis::BindEngine::UnlockBindings(v5);
    if ( v7 )
      ndisMExitInitMode((struct _NDIS_MINIPORT_BLOCK *)this, v3);
  }
}
