/*
 * XREFs of ?_DestroyMenuIfSupported@@YAHPEAUtagMENU@@@Z @ 0x1C007F4E0
 * Callers:
 *     <none>
 * Callees:
 *     Is_DestroyMenuSupported_0 @ 0x1C0002800 (Is_DestroyMenuSupported_0.c)
 *     _DestroyMenu_0 @ 0x1C0002808 (_DestroyMenu_0.c)
 */

__int64 __fastcall _DestroyMenuIfSupported(struct tagMENU *a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = Is_DestroyMenuSupported_0();
  v2 = 0;
  if ( v1 >= 0 )
    return (unsigned int)DestroyMenu_0();
  return v2;
}
