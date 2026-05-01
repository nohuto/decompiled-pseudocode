/*
 * XREFs of _lambda_43e11ee0e7cf0a8bfe1b6af012b4e817_::operator() @ 0x1800059B8
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x1800051B0 (-GetMany@-$SimpleVectorIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V-$Ve.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

_DWORD **__fastcall lambda_43e11ee0e7cf0a8bfe1b6af012b4e817_::operator()(__int64 a1)
{
  __int64 i; // rsi
  __int64 *v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  _DWORD **result; // rax

  for ( i = 0LL; (unsigned int)i < ***(_DWORD ***)a1; i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = *v3;
    v5 = *(_QWORD *)(*v3 + 8 * i);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *(_QWORD *)(v4 + 8 * i) = 0LL;
    }
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * i) = 0LL;
  }
  result = *(_DWORD ***)a1;
  ***(_DWORD ***)a1 = 0;
  return result;
}
