/*
 * XREFs of MiCanFlushMakeProgress @ 0x14011380C
 * Callers:
 *     MiFlushAllPages @ 0x1401136F8 (MiFlushAllPages.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE540 (MiFlushAllHintedStorePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCanFlushMakeProgress(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // r8d
  __int64 i; // r9
  __int64 v5; // r10
  __int16 v6; // ax

  if ( !a2 && *(_QWORD *)(a1 + 7232) != *(_QWORD *)(a1 + 7344) )
    return 1LL;
  v2 = *(_DWORD *)(a1 + 6296);
  if ( v2 )
  {
    v3 = 0;
    for ( i = 6304LL; ; i += 8LL )
    {
      v5 = *(_QWORD *)(i + a1);
      if ( *(_QWORD *)(v5 + 24) )
      {
        v6 = *(_WORD *)(v5 + 204);
        if ( (v6 & 0x40) == 0 )
        {
          if ( (v6 & 0x10) == 0 )
            break;
          a1 = *(_QWORD *)(v5 + 256);
          if ( *(_QWORD *)(a1 + 40LL * (v6 & 0xF) + 2368) )
            break;
        }
      }
      if ( ++v3 >= v2 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
