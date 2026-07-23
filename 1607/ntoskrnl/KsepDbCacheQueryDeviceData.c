/*
 * XREFs of KsepDbCacheQueryDeviceData @ 0x14057C50C
 * Callers:
 *     KseQueryDeviceData @ 0x140535190 (KseQueryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x140535324 (KsepDbCacheQueryDevice.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     KsepCacheDeviceQueryData @ 0x14057C578 (KsepCacheDeviceQueryData.c)
 */

__int64 __fastcall KsepDbCacheQueryDeviceData(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int v7; // edi
  __int64 Data; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  bool v11; // cf

  v7 = -1073741275;
  if ( a1 )
  {
    v7 = 0;
    Data = KsepCacheDeviceQueryData();
    v9 = Data;
    if ( Data )
    {
      *a3 = *(_DWORD *)(Data + 36);
      v10 = *(_DWORD *)(Data + 32);
      v11 = *a4 < v10;
      *a4 = v10;
      if ( v11 )
        return (unsigned int)-1073741789;
      else
        memmove(a5, *(const void **)(v9 + 40), *(unsigned int *)(v9 + 32));
    }
    else
    {
      *a4 = 0;
    }
  }
  return v7;
}
