/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14025AF78
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140763038, qword_140763040, BugCheckParameter4);
}
