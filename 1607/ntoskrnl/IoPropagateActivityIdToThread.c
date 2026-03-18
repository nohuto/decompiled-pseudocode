/*
 * XREFs of IoPropagateActivityIdToThread @ 0x1400CFF74
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x14008C2C0 (IoGetActivityIdIrp.c)
 *     IopIrpHasExtensionType @ 0x1400D13D8 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rcx
  PVOID SparePtr; // rax

  if ( !(unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    return 3221226021LL;
  IoGetActivityIdIrp(v5, a2);
  CurrentThread = KeGetCurrentThread();
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a2;
  *a3 = SparePtr;
  return 0LL;
}
