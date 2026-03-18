/*
 * XREFs of ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C00796F4
 * Callers:
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079454 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDesktopSwitch @ 0x1C0079660 (CitDesktopSwitch.c)
 * Callees:
 *     <none>
 */

bool CitpIsOnDefaultDesktop(void)
{
  const UNICODE_STRING *v0; // rax

  if ( !grpdeskRitInput )
    return 0;
  v0 = (const UNICODE_STRING *)((__int64 (*)(void))ObQueryNameInfo)();
  if ( v0 )
    v0 = (const UNICODE_STRING *)(ObQueryNameInfo(grpdeskRitInput) + 8);
  return v0 && RtlEqualUnicodeString(v0, &String2, 0);
}
