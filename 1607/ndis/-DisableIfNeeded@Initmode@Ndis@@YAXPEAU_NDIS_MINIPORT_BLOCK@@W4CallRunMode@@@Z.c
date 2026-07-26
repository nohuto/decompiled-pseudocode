/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AAAB4
 * Callers:
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00AAC80 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00E2B90 (_lambda_28a615441be2ea9fc307386fd4fcfbda_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A5120 (-UnlockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A5144 (-LockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AA904 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AD3D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        Ndis::Initmode *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum CallRunMode a3)
{
  enum CallRunMode v3; // ebp
  Ndis::BindEngine *v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  char v7; // bl

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
