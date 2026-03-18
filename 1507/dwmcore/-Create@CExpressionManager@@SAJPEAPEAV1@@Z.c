/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180093F18
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800933B0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180093F94 (--0CExpressionManager@@AEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // esi
  CExpressionManager *v3; // rax
  volatile signed __int32 *v4; // rax

  v2 = 0;
  v3 = (CExpressionManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               240LL);
  if ( v3 )
    v4 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    *a1 = (struct CExpressionManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC3u);
  }
  return v2;
}
