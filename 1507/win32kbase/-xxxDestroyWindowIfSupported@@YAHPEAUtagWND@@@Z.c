/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1C0013C20
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxDestroyWindowSupported_0 @ 0x1C00027D0 (IsxxxDestroyWindowSupported_0.c)
 *     xxxDestroyWindow_0 @ 0x1C00027D8 (xxxDestroyWindow_0.c)
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = IsxxxDestroyWindowSupported_0();
  v2 = 0;
  if ( v1 >= 0 )
    return (unsigned int)xxxDestroyWindow_0();
  return v2;
}
