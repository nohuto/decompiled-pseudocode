/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180025F64
 * Callers:
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180025FE0 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180025AAC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_check_icall_fptr();
    a4(a1);
    a1 += a2;
  }
}
