/*
 * XREFs of ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B47DC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ @ 0x1800A18A4 (--0-$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CRenderTargetManager **a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  struct CRenderTargetManager *v6; // rdi

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  v6 = (struct CRenderTargetManager *)v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 16) = a1;
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = &CRenderTargetManager::`vftable';
    DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>(v5 + 24);
    DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((__int64)v6 + 72);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    *a2 = v6;
    (**(void (__fastcall ***)(struct CRenderTargetManager *))v6)(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Au);
  }
  return v4;
}
