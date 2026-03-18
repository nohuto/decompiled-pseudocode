/*
 * XREFs of KiContinueEx @ 0x140020234
 * Callers:
 *     NtContinue @ 0x140182DD0 (NtContinue.c)
 * Callees:
 *     KeTestAlertThread @ 0x140020390 (KeTestAlertThread.c)
 *     KiContinuePreviousModeUser @ 0x140020448 (KiContinuePreviousModeUser.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KeContextToKframes @ 0x140182880 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(ULONG64 a1, char a2, __int64 a3, __int64 a4)
{
  ULONG64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v13; // [rsp+34h] [rbp-24h]

  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  v13 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( a2 )
    {
      if ( (a1 & 0xF) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 1231) = *(_BYTE *)(a1 + 1231);
      LOBYTE(a1) = 1;
      KeTestAlertThread(a1);
      if ( ((*(_QWORD *)(v7 + 152) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL) - 1232 == v7
        && CurrentThread->ApcState.UserApcPending )
      {
        *(_QWORD *)(a4 + 208) = v7;
        *(_QWORD *)(a4 + 352) = a3;
        LOBYTE(v10) = 1;
        KiDeliverApc(v10, 0LL, a4);
        v13 = 0;
        goto LABEL_18;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v11 = KiContinuePreviousModeUser(v7, a3, a4);
    if ( v11 >= 0 )
      v11 = 1;
    v13 = v11;
  }
  else
  {
    KeContextToKframes(a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( a2 )
      KeTestAlertThread(0LL);
  }
LABEL_18:
  if ( !CurrentIrql )
    __writecr8(0LL);
  return v13;
}
