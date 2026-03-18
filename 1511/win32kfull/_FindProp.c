/*
 * XREFs of _FindProp @ 0x1C0054934
 * Callers:
 *     GetWindowEffectiveCloakState @ 0x1C0051260 (GetWindowEffectiveCloakState.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0053EAC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetProp @ 0x1C0053F10 (NtUserSetProp.c)
 *     NtUserRemoveProp @ 0x1C0054010 (NtUserRemoveProp.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
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
