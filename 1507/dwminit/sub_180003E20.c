/*
 * XREFs of sub_180003E20 @ 0x180003E20
 * Callers:
 *     sub_180001420 @ 0x180001420 (sub_180001420.c)
 *     sub_180001470 @ 0x180001470 (sub_180001470.c)
 *     sub_180003610 @ 0x180003610 (sub_180003610.c)
 *     sub_1800036C0 @ 0x1800036C0 (sub_1800036C0.c)
 *     sub_180003700 @ 0x180003700 (sub_180003700.c)
 *     sub_180003C40 @ 0x180003C40 (sub_180003C40.c)
 *     sub_1800044E0 @ 0x1800044E0 (sub_1800044E0.c)
 *     sub_180004D90 @ 0x180004D90 (sub_180004D90.c)
 *     sub_180005868 @ 0x180005868 (sub_180005868.c)
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_180005DB4 @ 0x180005DB4 (sub_180005DB4.c)
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180003E20(__int64 a1)
{
  return (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)lpMem + 32LL))(lpMem, a1);
}
