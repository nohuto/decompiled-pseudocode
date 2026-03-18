/*
 * XREFs of NtGdiRectVisible @ 0x1C00DAA40
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C00DAA88 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(__int64 a1, __int128 *a2)
{
  __int128 v3; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (__int128 *)W32UserProbeAddress;
  v3 = *a2;
  return GreRectVisible(a1, &v3);
}
