/*
 * XREFs of WindowHasShadow @ 0x1C00A73EC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00A7414 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
    return FindShadow((struct tagWND *)a1) != 0LL;
  return v1;
}
