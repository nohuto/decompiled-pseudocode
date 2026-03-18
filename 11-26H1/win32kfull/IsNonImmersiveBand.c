/*
 * XREFs of IsNonImmersiveBand @ 0x140163FA0
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1401632E4 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F4C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402CA90C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  result = 1LL;
  if ( v1 != 1 && v1 != 2 )
    return v1 == 16;
  return result;
}
