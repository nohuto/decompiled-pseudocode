/*
 * XREFs of sub_18000614C @ 0x18000614C
 * Callers:
 *     sub_180005BB4 @ 0x180005BB4 (sub_180005BB4.c)
 * Callees:
 *     sub_180005DB4 @ 0x180005DB4 (sub_180005DB4.c)
 *     sub_180006328 @ 0x180006328 (sub_180006328.c)
 */

__int64 __fastcall sub_18000614C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( !*(_QWORD *)a1 && !sub_180005DB4(a1, *(_DWORD *)(a1 + 16), 1) )
    sub_180006328(2147942414LL);
  return sub_1800061B8(a1, a2, a3, a4);
}
