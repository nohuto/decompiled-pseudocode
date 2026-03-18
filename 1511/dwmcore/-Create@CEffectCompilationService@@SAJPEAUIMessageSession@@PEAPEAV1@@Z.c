/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B3D90
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x1800B3E30 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Initialize@CEffectCompilationService@@AEAAJXZ @ 0x1800B3EB4 (-Initialize@CEffectCompilationService@@AEAAJXZ.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (CEffectCompilationService *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      120LL);
  if ( v4 )
    v5 = (volatile signed __int32 *)CEffectCompilationService::CEffectCompilationService(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v6 = CEffectCompilationService::Initialize((CEffectCompilationService *)v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x40u);
    }
    else
    {
      *a2 = (struct CEffectCompilationService *)v5;
      _InterlockedIncrement(v5 + 2);
    }
    CMILRefCountBase::Release((CMILRefCountBase *)v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Du);
  }
  return v7;
}
