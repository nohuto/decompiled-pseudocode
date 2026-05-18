/*
 * XREFs of sub_180003DD8 @ 0x180003DD8
 * Callers:
 *     sub_180001190 @ 0x180001190 (sub_180001190.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_1800057F0 @ 0x1800057F0 (sub_1800057F0.c)
 *     sub_180005DB4 @ 0x180005DB4 (sub_180005DB4.c)
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180003DD8(__int64 a1)
{
  return (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)lpMem + 8LL))(lpMem, a1);
}
