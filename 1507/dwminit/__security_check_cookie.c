/*
 * XREFs of __security_check_cookie @ 0x1800063A0
 * Callers:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180001564 @ 0x180001564 (sub_180001564.c)
 *     sub_180001A88 @ 0x180001A88 (sub_180001A88.c)
 *     sub_180001E78 @ 0x180001E78 (sub_180001E78.c)
 *     sub_1800023BC @ 0x1800023BC (sub_1800023BC.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 *     DwmpCreateSessionProcess @ 0x180002CD0 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 *     sub_180003738 @ 0x180003738 (sub_180003738.c)
 *     sub_1800043E0 @ 0x1800043E0 (sub_1800043E0.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180005380 @ 0x180005380 (sub_180005380.c)
 *     sub_180005540 @ 0x180005540 (sub_180005540.c)
 *     sub_1800055F0 @ 0x1800055F0 (sub_1800055F0.c)
 *     sub_1800056A0 @ 0x1800056A0 (sub_1800056A0.c)
 *     sub_180005740 @ 0x180005740 (sub_180005740.c)
 *     sub_1800058A0 @ 0x1800058A0 (sub_1800058A0.c)
 *     sub_180005908 @ 0x180005908 (sub_180005908.c)
 *     sub_180005974 @ 0x180005974 (sub_180005974.c)
 *     sub_1800059D4 @ 0x1800059D4 (sub_1800059D4.c)
 *     sub_180007590 @ 0x180007590 (sub_180007590.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
