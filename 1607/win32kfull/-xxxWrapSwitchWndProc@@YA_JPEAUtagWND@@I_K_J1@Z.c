/*
 * XREFs of ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DA790
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0100F18 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxSwitchWndProc @ 0x1C01F9680 (xxxSwitchWndProc.c)
 */

__int64 __fastcall xxxWrapSwitchWndProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxSwitchWndProc(a1);
  else
    return 0LL;
}
