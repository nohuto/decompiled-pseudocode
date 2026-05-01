/*
 * XREFs of _lambda_96d0bed5b180209255fc5fd7d24cbe07_::__lambda_96d0bed5b180209255fc5fd7d24cbe07_ @ 0x18002241C
 * Callers:
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180021EF4 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 *     ??_E?$CTaskWrapper@V_lambda_96d0bed5b180209255fc5fd7d24cbe07_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180024800 (--_E-$CTaskWrapper@V_lambda_96d0bed5b180209255fc5fd7d24cbe07_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall lambda_96d0bed5b180209255fc5fd7d24cbe07_::__lambda_96d0bed5b180209255fc5fd7d24cbe07_(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi

  v1 = a1[4];
  if ( v1 )
  {
    a1[4] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[1] = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
