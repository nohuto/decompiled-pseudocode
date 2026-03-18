/*
 * XREFs of NtGdiHfontCreate @ 0x1C00188F0
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x1C00189F0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtGdiHfontCreate(char *Src, size_t Size)
{
  __int64 v2; // rsi
  _DWORD Srca[108]; // [rsp+20h] [rbp-1E8h] BYREF

  v2 = (unsigned int)Size;
  if ( !Src || (unsigned int)(Size - 1) > 0x1A3 )
    return 0LL;
  memset(Srca, 0, 0x1A4uLL);
  if ( &Src[v2] < Src || (unsigned __int64)&Src[v2] > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  memmove(Srca, Src, (unsigned int)v2);
  Srca[88] = 0;
  return hfontCreate(Srca);
}
