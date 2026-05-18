/*
 * XREFs of sub_180006328 @ 0x180006328
 * Callers:
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_180005FD8 @ 0x180005FD8 (sub_180005FD8.c)
 *     sub_18000614C @ 0x18000614C (sub_18000614C.c)
 *     sub_1800061B8 @ 0x1800061B8 (sub_1800061B8.c)
 * Callees:
 *     sub_180006310 @ 0x180006310 (sub_180006310.c)
 */

void __fastcall __noreturn sub_180006328(int a1)
{
  DWORD v1; // eax

  v1 = -1073741801;
  if ( a1 != -2147024882 )
    v1 = -1073741795;
  sub_180006310(v1);
  JUMPOUT(0x180006346LL);
}
