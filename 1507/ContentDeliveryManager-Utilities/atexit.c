/*
 * XREFs of atexit @ 0x1800261E4
 * Callers:
 *     sub_1800012D0 @ 0x1800012D0 (sub_1800012D0.c)
 *     sub_180001300 @ 0x180001300 (sub_180001300.c)
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_180001320 @ 0x180001320 (sub_180001320.c)
 *     sub_180001330 @ 0x180001330 (sub_180001330.c)
 *     sub_180001390 @ 0x180001390 (sub_180001390.c)
 *     sub_1800013A0 @ 0x1800013A0 (sub_1800013A0.c)
 *     sub_1800013B0 @ 0x1800013B0 (sub_1800013B0.c)
 *     sub_1800013D0 @ 0x1800013D0 (sub_1800013D0.c)
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 *     DllCanUnloadNow @ 0x1800069B0 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x180006A20 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x180006B20 (DllGetActivationFactory.c)
 *     sub_18000BC34 @ 0x18000BC34 (sub_18000BC34.c)
 *     sub_18000BCC0 @ 0x18000BCC0 (sub_18000BCC0.c)
 * Callees:
 *     sub_180026140 @ 0x180026140 (sub_180026140.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (sub_180026140((_onexit_t)a1) != 0LL) - 1;
}
