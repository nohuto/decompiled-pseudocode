/*
 * XREFs of ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x1800AB2BC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWindowManager@@QEAA@XZ @ 0x1800AB684 (--0CWindowManager@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowManager::Create(struct CWindowManager **a1)
{
  unsigned int v2; // esi
  CWindowManager *v3; // rax
  volatile signed __int32 *v4; // rax

  v2 = 0;
  v3 = (CWindowManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           120LL);
  if ( v3 )
    v4 = (volatile signed __int32 *)CWindowManager::CWindowManager(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    *a1 = (struct CWindowManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x36u);
  }
  return v2;
}
