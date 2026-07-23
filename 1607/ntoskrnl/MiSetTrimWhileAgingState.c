/*
 * XREFs of MiSetTrimWhileAgingState @ 0x1400B314C
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1400B3134 (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014B1AC (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // r8
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 6248);
  v3 = a1 + 6592;
  SharedVm = MiGetSharedVm(a1 + 6592);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = (unsigned __int8)a2;
  if ( !(_BYTE)a2 )
  {
    *(_QWORD *)(v2 + 80) = 0LL;
    goto LABEL_7;
  }
  v6 = (unsigned int)(unsigned __int8)a2 - 1;
  if ( (unsigned __int8)a2 == 1 )
  {
    *(_QWORD *)(v2 + 72) = -1LL;
    *(_QWORD *)(v2 + 80) = 204800LL;
    goto LABEL_8;
  }
  v6 = (unsigned int)(unsigned __int8)a2 - 2;
  if ( (unsigned __int8)a2 == 2 )
  {
    *(_QWORD *)(v2 + 80) = 204800LL;
    *(_QWORD *)(v2 + 72) = 51200LL;
    goto LABEL_8;
  }
  v6 = (unsigned int)(unsigned __int8)a2 - 3;
  if ( (unsigned __int8)a2 == 3 )
  {
    *(_QWORD *)(v2 + 80) = 204800LL;
    *(_QWORD *)(v2 + 72) = 12800LL;
    goto LABEL_8;
  }
  if ( (unsigned __int8)a2 == 4 )
  {
    *(_QWORD *)(v2 + 80) = 384000LL;
LABEL_7:
    *(_QWORD *)(v2 + 72) = 0LL;
  }
LABEL_8:
  LOBYTE(v6) = v5;
  *(_DWORD *)(v2 + 88) = (unsigned __int8)a2;
  *(_WORD *)(v2 + 2362) = *(_WORD *)((char *)&a2 + 1);
  return MiUnlockWorkingSetExclusive(v3, v6);
}
