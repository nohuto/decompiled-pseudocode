/*
 * XREFs of _wil::ResultFromCaughtException_::_1_::catch$2 @ 0x180027694
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007AE0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

void *__fastcall wil::ResultFromCaughtException_::_1_::catch_2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax

  if ( wil::g_pfnResultFromCaughtException && (v4 = wil::g_pfnResultFromCaughtException(), v4 < 0) )
  {
    *(_DWORD *)(a2 + 64) = v4;
  }
  else
  {
    if ( wil::g_fResultFailFastUnknownExceptions )
    {
      wil::details::in1diag3::_FailFast_Hr(
        *(wil::details::in1diag3 **)(a2 + 56),
        (void *)a2,
        a3,
        (const char *)0x8007023ELL);
      __debugbreak();
    }
    *(_DWORD *)(a2 + 64) = -2147024322;
  }
  return &loc_180007B5F;
}
