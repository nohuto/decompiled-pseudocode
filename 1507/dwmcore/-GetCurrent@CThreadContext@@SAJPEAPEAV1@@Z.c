/*
 * XREFs of ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18000ED10
 * Callers:
 *     ?RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z @ 0x18000EC84 (-RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CThreadContext::GetCurrent(struct CThreadContext **a1)
{
  unsigned int v2; // esi
  void *Value; // rbx
  _QWORD *v5; // rax

  v2 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     8LL);
    Value = v5;
    if ( v5 )
      *v5 = 0LL;
    else
      Value = 0LL;
    if ( !Value )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      return v2;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  *a1 = (struct CThreadContext *)Value;
  return v2;
}
