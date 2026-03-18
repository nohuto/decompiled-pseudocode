/*
 * XREFs of MiSetTrimWhileAgingState @ 0x1400F3E10
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1400F3DF8 (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1401413A4 (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 5616);
  v3 = ExAcquireSpinLockExclusive(&dword_1402FF880);
  v4 = (unsigned __int8)a2;
  LOBYTE(v5) = v3;
  if ( !(_BYTE)a2 )
  {
    *(_QWORD *)(v2 + 80) = 0LL;
    goto LABEL_9;
  }
  v4 = (unsigned int)(unsigned __int8)a2 - 1;
  if ( (unsigned __int8)a2 == 1 )
  {
    *(_QWORD *)(v2 + 72) = -1LL;
    *(_QWORD *)(v2 + 80) = 204800LL;
    goto LABEL_6;
  }
  v4 = (unsigned int)(unsigned __int8)a2 - 2;
  if ( (unsigned __int8)a2 == 2 )
  {
    *(_QWORD *)(v2 + 80) = 204800LL;
    *(_QWORD *)(v2 + 72) = 51200LL;
    goto LABEL_6;
  }
  v4 = (unsigned int)(unsigned __int8)a2 - 3;
  if ( (unsigned __int8)a2 != 3 )
  {
    if ( (unsigned __int8)a2 != 4 )
      goto LABEL_6;
    *(_QWORD *)(v2 + 80) = 384000LL;
LABEL_9:
    *(_QWORD *)(v2 + 72) = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)(v2 + 80) = 204800LL;
  *(_QWORD *)(v2 + 72) = 12800LL;
LABEL_6:
  *(_DWORD *)(v2 + 88) = (unsigned __int8)a2;
  LOBYTE(v4) = v3;
  *(_WORD *)(v2 + 2362) = *(_WORD *)((char *)&a2 + 1);
  return MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v4, v5);
}
