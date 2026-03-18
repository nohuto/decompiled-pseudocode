/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14020B8DC
 * Callers:
 *     IovCallDriver @ 0x1406B4C6C (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1406B5404 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1406BF888 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1406BFA50 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_1406E0038, qword_1406E0040, BugCheckParameter4);
}
