/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180027C64
 * Callers:
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x180027BF4 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180027FD0 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  while ( --a3 >= 0 )
  {
    a1 -= a2;
    a4(a1);
  }
}
