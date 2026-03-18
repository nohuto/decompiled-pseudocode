/*
 * XREFs of ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C013C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0100F18 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 */

__int64 __fastcall xxxWrapMenuWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxMenuWindowProc(a1);
  else
    return 0LL;
}
