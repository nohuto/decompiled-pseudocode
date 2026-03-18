/*
 * XREFs of IoPropagateActivityIdToThread @ 0x140123250
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x140102D60 (IoGetActivityIdIrp.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rcx
  PVOID SparePtr; // rax

  v3 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v3 || (*(_BYTE *)(v3 + 2) & 1) == 0 )
    return 3221226021LL;
  IoGetActivityIdIrp(a1, a2);
  CurrentThread = KeGetCurrentThread();
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a2;
  *a3 = SparePtr;
  return 0LL;
}
