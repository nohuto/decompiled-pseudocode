/*
 * XREFs of ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02A5F28
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C013E030 (NtGdiAddFontResourceW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C02A8110 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall ProbeAndReadDesignVector(struct tagDESIGNVECTOR *a1, struct tagDESIGNVECTOR *a2)
{
  struct tagDESIGNVECTOR *v2; // rax
  unsigned int v3; // eax
  unsigned int v5; // ebx
  char *v6; // rdx

  v2 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v2 = (struct tagDESIGNVECTOR *)W32UserProbeAddress;
  *(_QWORD *)a1 = *(_QWORD *)v2;
  v3 = *((_DWORD *)a1 + 1);
  if ( v3 > 0x10 )
    return 0LL;
  v5 = 4 * v3 + 8;
  if ( v3 )
  {
    v6 = (char *)a2 + 8;
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (char *)W32UserProbeAddress;
    memmove((char *)a1 + 8, v6, 4 * v3);
  }
  return v5;
}
