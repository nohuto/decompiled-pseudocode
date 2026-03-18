/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1405572F4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     PspCheckConditionalWakeCharge @ 0x14053CBE8 (PspCheckConditionalWakeCharge.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  int v7; // r11d
  int v9; // eax
  bool v11; // di
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  char v14; // cl
  unsigned int v15; // edi

  v4 = *(_QWORD *)(a1 + 944);
  v7 = a2;
  if ( !v4 )
    return 0LL;
  v9 = *(_DWORD *)(v4 + 1296);
  if ( (v9 & 0x1000) == 0 )
    return 0LL;
  v11 = (a2 & 2) != 0;
  if ( (v9 & 0x800000) != 0 && v11 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (a2 & 1) != 0 && !PspCheckConditionalWakeCharge((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a1 + 944)) )
    return 0LL;
  v14 = 1;
  if ( (Process[1].DirectoryTableBase & 0x40) == 0 && v11 )
  {
    v14 = 5;
    v15 = 5;
    if ( v7 < 0 )
      v14 = 7;
  }
  else
  {
    v15 = a3;
  }
  PspChargeJobWakeCounter((_QWORD *)v4, 0LL, a3, 1LL, v14, a1, a4);
  ObfReferenceObjectWithTag((PVOID)v4, 0x6B577350u);
  return v4 | v15;
}
