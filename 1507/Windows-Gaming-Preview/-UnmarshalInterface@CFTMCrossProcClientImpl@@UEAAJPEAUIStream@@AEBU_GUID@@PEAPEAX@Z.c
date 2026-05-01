/*
 * XREFs of ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18001FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x18001FDB4 (-_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::UnmarshalInterface(
        CFTMCrossProcClientImpl *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = CFTMCrossProcClientImpl::_UnwrapStream(this, 0LL, a2);
  if ( (int)result >= 0 )
    return (**(__int64 (__fastcall ***)(CFTMCrossProcClientImpl *, const struct _GUID *, void **))this)(this, a3, a4);
  return result;
}
