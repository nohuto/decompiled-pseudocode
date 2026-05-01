/*
 * XREFs of ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1800094A0
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x180007F84 (-InsertAtInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$Default.c)
 *     ?RemoveAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18000818C (-RemoveAtInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$Default.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  void *v6; // rax

  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0;
  if ( v4 )
    v6 = (void *)_o_realloc(v4, 16LL * a2);
  else
    v6 = malloc(16LL * a2);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 80) = v6;
    *(_DWORD *)(a1 + 68) = a2;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
