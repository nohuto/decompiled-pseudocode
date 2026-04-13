/*
 * XREFs of sub_1800056F0 @ 0x1800056F0
 * Callers:
 *     sub_180004FEC @ 0x180004FEC (sub_180004FEC.c)
 *     sub_1800057DC @ 0x1800057DC (sub_1800057DC.c)
 *     sub_180005AC0 @ 0x180005AC0 (sub_180005AC0.c)
 *     sub_180010494 @ 0x180010494 (sub_180010494.c)
 *     sub_18001066C @ 0x18001066C (sub_18001066C.c)
 *     sub_180010860 @ 0x180010860 (sub_180010860.c)
 *     sub_180010970 @ 0x180010970 (sub_180010970.c)
 *     sub_180010BA0 @ 0x180010BA0 (sub_180010BA0.c)
 *     sub_180019730 @ 0x180019730 (sub_180019730.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 *__fastcall sub_1800056F0(__int64 *a1)
{
  __int64 v1; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return a1;
}
