/*
 * XREFs of KiContinueEx @ 0x1400CA74C
 * Callers:
 *     NtContinue @ 0x14015E110 (NtContinue.c)
 * Callees:
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KeTestAlertThread @ 0x1400CAF2C (KeTestAlertThread.c)
 *     KiContinuePreviousModeUser @ 0x1400F4474 (KiContinuePreviousModeUser.c)
 *     KeContextToKframes @ 0x14015DBA0 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, char a2, unsigned __int64 a3, _KTRAP_FRAME *a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // r15
  int v10; // eax
  unsigned int v12; // [rsp+34h] [rbp-24h]

  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  v12 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( a2 )
    {
      if ( (a1 & 0xF) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 1231) = *(_BYTE *)(a1 + 1231);
      LOBYTE(a1) = 1;
      KeTestAlertThread(a1);
      if ( ((*(_QWORD *)(v7 + 152) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL) - 1232 == v7
        && CurrentThread->ApcState.UserApcPending )
      {
        a4->FaultAddress = v7;
        a4->ErrorCode = a3;
        KiDeliverApc(1, 0, a4);
        v12 = 0;
        goto LABEL_18;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v10 = KiContinuePreviousModeUser(v7, a3, a4);
    if ( v10 >= 0 )
      v10 = 1;
    v12 = v10;
  }
  else
  {
    KeContextToKframes((_DWORD)a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( a2 )
      KeTestAlertThread(0LL);
  }
LABEL_18:
  if ( !CurrentIrql )
    __writecr8(0LL);
  return v12;
}
