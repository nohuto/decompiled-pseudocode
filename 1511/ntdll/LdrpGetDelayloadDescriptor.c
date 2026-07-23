/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x1800C9A74
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800C9950 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800C9A30 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x1800969C0 (_stricmp.c)
 */

_DWORD *__fastcall LdrpGetDelayloadDescriptor(void *a1, const char *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  ULONG v7; // edi
  ULONG v8; // ebp
  ULONG v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = RtlImageDirectoryEntryToData(a1, 1u, 0xDu, &v10);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = 0;
    v8 = v10 >> 5;
    if ( v4[1] )
    {
      while ( v7 < v8 )
      {
        if ( !stricmp((const char *)a1 + (unsigned int)v6[8 * v7 + 1], a2) )
          return &v6[8 * v7];
        if ( !v6[8 * ++v7 + 1] )
          return (_DWORD *)v5;
      }
    }
  }
  return (_DWORD *)v5;
}
