/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1800020F0
 * Callers:
 *     _lambda_a644c9ca355a20c9ec9333f2681dd115_::operator() @ 0x1800093D4 (_lambda_a644c9ca355a20c9ec9333f2681dd115_--operator().c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E380 (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z @ 0x180022A94 (-MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18000280C (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rdi
  _WORD *v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rsi
  __int16 v9; // ax
  _WORD *v10; // rcx

  v4 = 0;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v5);
    if ( v4 >= 0 )
    {
      v6 = *(_WORD **)a1;
      v7 = v5 + 1;
      if ( v5 > 0x7FFFFFFE )
      {
        if ( v5 == -1LL )
        {
LABEL_14:
          *(_QWORD *)(a1 + 8) = v5;
          return (unsigned int)v4;
        }
      }
      else
      {
        v8 = a2 - (_QWORD)v6;
        do
        {
          if ( v7 == 1 )
            break;
          v9 = *(_WORD *)((char *)v6 + v8);
          if ( !v9 )
            break;
          *v6++ = v9;
          --v7;
        }
        while ( v7 );
        if ( !v7 )
          --v6;
      }
      *v6 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = *(_WORD **)a1;
    if ( v10 )
    {
      CoTaskMemFree(v10);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v4;
}
