/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18001D250
 * Callers:
 *     <none>
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebp
  bool v3; // di

  for ( i = a1[3]; i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 3, i - 1, i); i = a1[3] )
    ;
  v2 = i - 1;
  if ( i == 1 )
  {
    v3 = (a1[5] & 5) == 5;
    (*(void (__fastcall **)(signed __int32 *, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( v3 )
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  else if ( (a1[5] & 6) == 0 && i == 2 )
  {
    goto LABEL_10;
  }
  return v2;
}
