/*
 * XREFs of EngFntCacheLookUp @ 0x1C0020CA0
 * Callers:
 *     bLoadFontFile @ 0x1C002025C (bLoadFontFile.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00217A8 (SearchFNTCacheHlink.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  void *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  ULONG v7; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  *pulSize = 0;
  v9 = 0LL;
  v10 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( FastCheckSum )
  {
    if ( (dword_1C0328CC0 & 1) != 0 )
    {
      v5 = qword_1C0328CC8;
      if ( qword_1C0328CC8 )
      {
        if ( *(_QWORD *)qword_1C0328CC8 )
        {
          SearchFNTCacheHlink(FastCheckSum, &v9);
          v6 = v9;
          if ( v9 )
          {
            if ( (*(_DWORD *)(v9 + 24) & 1) == 0 )
            {
              v7 = *(_DWORD *)(v9 + 16);
              *pulSize = v7;
              if ( v7 )
                v3 = (void *)(*(_QWORD *)(v5 + 24) + *(unsigned int *)(v6 + 20));
            }
          }
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v3;
}
