/*
 * XREFs of NtGdiGetKerningPairs @ 0x1C02A7320
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GreGetKerningPairs @ 0x1C027FC74 (GreGetKerningPairs.c)
 */

__int64 __fastcall NtGdiGetKerningPairs(HDC a1, unsigned int a2, char *a3)
{
  unsigned int v6; // ebx
  const void *v7; // rdi
  unsigned int KerningPairs; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v12; // r8

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
        v12 = 8LL * v6;
        if ( (unsigned __int64)&a3[v12] > W32UserProbeAddress || &a3[v12] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v7, v12);
      }
      FreeTmpBuffer(v7, v9, v10, v11);
    }
  }
  return v6;
}
