/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x1800D0EF4
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D0DD0 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800D0EB0 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x180097DD0 (_stricmp.c)
 */

__int64 __fastcall LdrpGetDelayloadDescriptor(unsigned __int64 a1, const char *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = RtlImageDirectoryEntryToData(a1, 1, 0xDu, &v10);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = 0;
    v8 = v10 >> 5;
    if ( *(_DWORD *)(v4 + 4) )
    {
      while ( v7 < v8 )
      {
        if ( !stricmp((const char *)(a1 + *(unsigned int *)(32LL * v7 + v6 + 4)), a2) )
          return v6 + 32LL * v7;
        if ( !*(_DWORD *)(32LL * ++v7 + v6 + 4) )
          return v5;
      }
    }
  }
  return v5;
}
