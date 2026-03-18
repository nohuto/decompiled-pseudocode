/*
 * XREFs of ProbeAndReadDesignVector @ 0x1C02A7E64
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C000DB80 (NtGdiAddFontResourceW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C02A7920 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall ProbeAndReadDesignVector(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // eax
  unsigned int v5; // ebx
  const void *v6; // rdx

  v2 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v2 = (_QWORD *)W32UserProbeAddress;
  *(_QWORD *)a1 = *v2;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > 0x10 )
    return 0LL;
  v5 = 4 * v3 + 8;
  if ( v3 )
  {
    v6 = a2 + 1;
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (const void *)W32UserProbeAddress;
    memmove((void *)(a1 + 8), v6, 4 * v3);
  }
  return v5;
}
