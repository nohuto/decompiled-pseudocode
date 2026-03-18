/*
 * XREFs of ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B7B0C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180039390 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CRenderTargetManager **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 16) = a1;
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = &CRenderTargetManager::`vftable';
    DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((void *)(v5 + 24));
    DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((void *)(v6 + 72));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    *a2 = (struct CRenderTargetManager *)v6;
    (**(void (__fastcall ***)(__int64))v6)(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Au);
  }
  return v4;
}
