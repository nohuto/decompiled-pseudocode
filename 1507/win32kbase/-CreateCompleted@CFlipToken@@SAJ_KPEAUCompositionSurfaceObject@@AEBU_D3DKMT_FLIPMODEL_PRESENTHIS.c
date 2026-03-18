/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0047964 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0047BB8 (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C0047FEC (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEAAJ_KPEAW4IndependentFlipState@@PEA_N@Z @ 0x1C0048354 (-GetIndependentFlipState@CompositionSurfaceObject@@QEAAJ_KPEAW4IndependentFlipState@@PEA_N@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480 (-SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00A3ECC (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CFlipToken@@IEAAXXZ @ 0x1C00A40B8 (-SignalPresentLimitSemaphore@CFlipToken@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  CFlipToken *v5; // rbx
  bool v10; // bp
  bool v11; // di
  char v12; // r15
  CFlipToken *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  int v18; // [rsp+80h] [rbp+18h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v5 = 0LL;
  *a4 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( (*(_WORD *)&Value & 0x2000) != 0 )
  {
    if ( (*(_DWORD *)&Value & 0x40000) != 0 )
    {
      v10 = 0;
    }
    else
    {
      CompositionSurfaceObject::GetIndependentFlipState(this, a1, (enum IndependentFlipState *)&v18, 0LL);
      v10 = v18 == 1;
    }
  }
  else
  {
    CompositionSurfaceObject::GetIndependentFlipState(this, a1, (enum IndependentFlipState *)&v19, (bool *)&v18);
    if ( !v19 || (v12 = 1, !(_BYTE)v18) )
      v12 = 0;
    v11 = (a3->Flags.Value & 0x100000) != 0;
  }
  v13 = (CFlipToken *)Win32AllocPool(256LL, 1869892948LL);
  if ( v13 )
    v5 = CFlipToken::CFlipToken(v13, a1, this);
  if ( v5 )
  {
    LOBYTE(v15) = v11;
    LOBYTE(v14) = v10;
    v16 = CFlipToken::Initialize(v5, a3, v14, v15, v12);
    if ( v16 < 0 )
    {
      (**(void (__fastcall ***)(CFlipToken *, __int64))v5)(v5, 1LL);
    }
    else
    {
      if ( (a3->Flags.Value & 0x200) != 0 )
        CFlipToken::SignalPresentLimitSemaphore(v5);
      if ( v10 )
      {
        *((_DWORD *)v5 + 6) = 3;
        CFlipToken::TraceStateChanged(v5);
        v16 = CompositionSurfaceObject::NotifyTokenInFrame(this, v5, (bool *)&v18);
        if ( a3->FenceValue )
          CompositionSurfaceObject::SignalGpuFence(this, a1, a3->FenceValue - 1);
      }
      *a4 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v16;
}
