/*
 * XREFs of NtGdiGetKerningPairs @ 0x1C02A8540
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     GreGetKerningPairs @ 0x1C027DAD0 (GreGetKerningPairs.c)
 */

__int64 __fastcall NtGdiGetKerningPairs(HDC a1, unsigned int a2, char *a3)
{
  unsigned int v6; // ebx
  const void *v7; // rdi
  unsigned int KerningPairs; // eax
  size_t v9; // r8

  v6 = 0;
  v7 = 0LL;
  if ( a3 && a2 <= 0x4E2000 )
    v7 = (const void *)AllocFreeTmpBuffer(8 * a2);
  if ( !a3 || v7 )
  {
    KerningPairs = GreGetKerningPairs(a1, a2, (unsigned __int64)v7);
    v6 = KerningPairs;
    if ( a3 )
    {
      if ( KerningPairs > a2 )
        v6 = 0;
      if ( v6 )
      {
        v9 = 8LL * v6;
        if ( (unsigned __int64)&a3[v9] > W32UserProbeAddress || &a3[v9] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v7, v9);
      }
      FreeTmpBuffer(v7);
    }
  }
  return v6;
}
