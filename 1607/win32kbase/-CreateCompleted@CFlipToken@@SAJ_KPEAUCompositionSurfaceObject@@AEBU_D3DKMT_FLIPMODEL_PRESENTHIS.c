/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C001EF20
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C001EFF4 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C001C3B4 (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBase@@@Z @ 0x1C001C8C8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBa.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C00F4FFC (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  UINT v6; // eax
  char v9; // di
  char v10; // r15
  CFlipToken *v11; // rax
  CFlipToken *v12; // rbx
  int IndependentFlipNotifyDwm; // edi
  bool v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 1;
  v6 = a3->Flags.Value & 0x42000;
  *a4 = 0LL;
  v9 = 1;
  if ( v6 == 0x2000 )
  {
    IndependentFlipNotifyDwm = CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v15);
    if ( IndependentFlipNotifyDwm < 0 )
      return (unsigned int)IndependentFlipNotifyDwm;
    v9 = v15;
  }
  v10 = (a3->Flags.Value & 0x100000) != 0;
  v11 = (CFlipToken *)Win32AllocPool(248LL, 1869892948LL);
  if ( v11 )
    v12 = CFlipToken::CFlipToken(v11, a1, this);
  else
    v12 = 0LL;
  if ( v12 )
  {
    IndependentFlipNotifyDwm = CFlipToken::Initialize((__int64)v12, (__int64)a3, v9, v10);
    if ( IndependentFlipNotifyDwm < 0 )
      (**(void (__fastcall ***)(CFlipToken *, __int64))v12)(v12, 1LL);
    else
      *a4 = v12;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)IndependentFlipNotifyDwm;
}
