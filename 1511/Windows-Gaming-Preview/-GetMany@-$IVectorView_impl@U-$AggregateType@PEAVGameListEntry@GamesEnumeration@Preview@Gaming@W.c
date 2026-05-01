/*
 * XREFs of ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x180006BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Cleanup@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@I@Z @ 0x180006CCC (--$_Cleanup@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@I@Detail@Collections@Founda.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     memset @ 0x18002687C (memset.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<Windows::Foundation::Internal::AggregateType<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  __int64 v7; // rdi
  unsigned int v9; // ebp
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v13; // rsi
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v7 = a1;
  v9 = 0;
  memset(a4, 0, 8LL * a3);
  *a5 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 56LL))(v7, &v15);
  if ( v10 < 0 )
    goto LABEL_4;
  v11 = v15;
  if ( a2 > v15 )
  {
    v10 = -2147483637;
LABEL_4:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,unsigned int>(
      a4,
      v9);
    return (unsigned int)v10;
  }
  v13 = 0LL;
  if ( a3 )
  {
    while ( (unsigned int)v13 + a2 < v11 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 48LL))(
              a1,
              (unsigned int)v13 + a2,
              (__int64)a4 + 8 * v13);
      if ( v10 < 0 )
        goto LABEL_4;
      ++v9;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= a3 )
        break;
      v11 = v15;
      v7 = a1;
    }
  }
  *a5 = v13;
  return (unsigned int)v10;
}
