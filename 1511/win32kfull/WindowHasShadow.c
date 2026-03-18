/*
 * XREFs of WindowHasShadow @ 0x1C00F15B4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00F15DC (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
    return FindShadow((struct tagWND *)a1) != 0LL;
  return v1;
}
