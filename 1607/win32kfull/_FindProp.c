/*
 * XREFs of _FindProp @ 0x1C007B010
 * Callers:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     GetWindowEffectiveCloakState @ 0x1C0078CC8 (GetWindowEffectiveCloakState.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     NtUserSetProp @ 0x1C007AE10 (NtUserSetProp.c)
 *     NtUserRemoveProp @ 0x1C007AF10 (NtUserRemoveProp.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C007CE28 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // rax
  int v5; // edx
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  if ( !v3 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = v3 + 8;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_WORD *)(v6 + 8) != a2 )
      goto LABEL_5;
    if ( !a3 )
      break;
    if ( (*(_BYTE *)(v6 + 10) & 1) != 0 )
      return v6;
LABEL_5:
    v6 += 16LL;
    if ( !--v5 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v6 + 10) & 1) != 0 )
    goto LABEL_5;
  return v6;
}
