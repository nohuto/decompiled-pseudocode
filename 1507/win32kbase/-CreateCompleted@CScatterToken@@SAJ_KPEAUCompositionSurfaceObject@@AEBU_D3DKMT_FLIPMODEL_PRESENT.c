/*
 * XREFs of ?CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00E127C
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0047964 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C00482A4 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00484F4 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBase@@@Z @ 0x1C00E13E8 (-Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBa.c)
 */

__int64 __fastcall CScatterToken::CreateCompleted(
        __int64 a1,
        struct CompositionSurfaceObject *a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CScatterToken **a4)
{
  CToken *v8; // rax
  CToken *v9; // rbx
  int v10; // edi

  *a4 = 0LL;
  v8 = (CToken *)Win32AllocPool();
  v9 = v8;
  if ( v8 )
  {
    CToken::CToken(v8, a1, a2);
    *((_QWORD *)v9 + 13) = 0LL;
    *((_QWORD *)v9 + 14) = 0LL;
    *(_QWORD *)v9 = &CScatterToken::`vftable';
    *((_BYTE *)v9 + 96) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = CScatterToken::Initialize(v9, a3);
    if ( v10 < 0 )
    {
      (**(void (__fastcall ***)(CToken *, __int64))v9)(v9, 1LL);
    }
    else
    {
      if ( a3->PresentLimitSemaphoreId )
        CompositionSurfaceObject::SignalPresentLimitSemaphore(
          *((CompositionSurfaceObject **)v9 + 4),
          *((_QWORD *)v9 + 5));
      *a4 = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
