/*
 * XREFs of StartAddress @ 0x180009330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002AD4 @ 0x180002AD4 (sub_180002AD4.c)
 *     sub_1800091C8 @ 0x1800091C8 (sub_1800091C8.c)
 */

void __fastcall __noreturn StartAddress(_QWORD *lpThreadParameter)
{
  HMODULE v1; // rcx

  sub_1800091C8(lpThreadParameter);
  sub_180002AD4();
  FreeLibraryAndExitThread(v1, 0);
}
