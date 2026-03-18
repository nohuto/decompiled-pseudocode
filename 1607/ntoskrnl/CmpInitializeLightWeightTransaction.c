/*
 * XREFs of CmpInitializeLightWeightTransaction @ 0x140603750
 * Callers:
 *     CmpTransMgrCommit @ 0x1404DA7A0 (CmpTransMgrCommit.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall CmpInitializeLightWeightTransaction(_QWORD *a1)
{
  memset(a1, 0, 0x20uLL);
  a1[1] = 0LL;
  return 0LL;
}
