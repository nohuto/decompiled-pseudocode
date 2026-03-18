/*
 * XREFs of NtGdiHfontCreate @ 0x140102720
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiHfontCreate(const void *a1, unsigned int a2)
{
  _BYTE Src[352]; // [rsp+40h] [rbp-1E8h] BYREF
  int v7; // [rsp+1A0h] [rbp-88h]

  if ( !a1 || !a2 || a2 > 0x1A4 )
    return 0LL;
  memset_0(Src, 0, 0x1A4uLL);
  GreProbeAndReadFromUntrustedVa(Src, a2, a1, a2, 1uLL);
  v7 = 0;
  return hfontCreate(Src, 0);
}
