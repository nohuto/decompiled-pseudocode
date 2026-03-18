/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F038
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004EE38 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C004EFD4 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C004F274 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F078 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1)
{
  if ( qword_1C011E5D0 )
  {
    CitpContextCleanup(qword_1C011E5D0);
    if ( qword_1C011E5D0 )
    {
      Win32FreePool();
      qword_1C011E5D0 = 0LL;
    }
  }
  *a1 = 0LL;
}
