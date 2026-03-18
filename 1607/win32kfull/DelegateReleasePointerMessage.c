/*
 * XREFs of DelegateReleasePointerMessage @ 0x1C01D7470
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01470D4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01D7290 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01F3E18 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax

  v3 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 24) == 583 )
  {
    v5 = *(_QWORD *)(v3 + 40);
    if ( !v5 || (*(_DWORD *)(v5 + 80) & 4) == 0 )
      DelegateCapturePointerImplicit(v3);
    PointerList::SetDelegateAction(*(_QWORD *)(a2 + 40), 6LL);
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
