/*
 * XREFs of ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C0014D04
 * Callers:
 *     CitDesktopSwitch @ 0x1C0014C70 (CitDesktopSwitch.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083390 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
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
