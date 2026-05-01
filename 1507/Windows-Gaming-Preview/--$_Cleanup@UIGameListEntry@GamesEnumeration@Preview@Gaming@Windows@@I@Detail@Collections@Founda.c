/*
 * XREFs of ??$_Cleanup@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@I@Z @ 0x180006DEC
 * Callers:
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x180006CF0 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@W.c)
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x180006E50 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Win.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rbp
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
