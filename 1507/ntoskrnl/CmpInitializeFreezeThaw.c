/*
 * XREFs of CmpInitializeFreezeThaw @ 0x1405A2A78
 * Callers:
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeFreezeThaw()
{
  __int64 *result; // rax

  CmpFreezeListLock = 0LL;
  result = &CmpFreezeThawWaitListHead;
  qword_14034D878 = (__int64)&CmpFreezeThawWaitListHead;
  CmpFreezeThawWaitListHead = (__int64)&CmpFreezeThawWaitListHead;
  if ( (unsigned int)CmFreezeThawTimeoutInSeconds > 0x384 )
    CmFreezeThawTimeoutInSeconds = 60;
  return result;
}
