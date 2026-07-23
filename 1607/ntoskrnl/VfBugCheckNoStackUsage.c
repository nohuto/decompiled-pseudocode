/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1402231C4
 * Callers:
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x14070126C (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_14072C038, qword_14072C040, BugCheckParameter4);
}
