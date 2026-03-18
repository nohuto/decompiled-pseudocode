/*
 * XREFs of VerifierKeWaitForMultipleObjectsNoReboot @ 0x1407492AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeInjectStatusAlerted @ 0x140749C44 (ViKeInjectStatusAlerted.c)
 */

NTSTATUS __fastcall VerifierKeWaitForMultipleObjectsNoReboot(
        __int64 Count,
        PVOID Object[],
        WAIT_TYPE a3,
        KWAIT_REASON a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  struct _KTHREAD *CurrentThread; // r10
  ULONG_PTR *v9; // rsi
  __int64 v10; // rbp
  unsigned __int8 WaitIrql; // al
  int v12; // edi
  ULONG_PTR v13; // rdx
  unsigned __int8 StackLimits; // al
  ULONG_PTR v15; // r14
  ULONG_PTR v16; // r15
  int v17; // r12d
  ULONG_PTR v18; // rdi
  ULONG_PTR v20; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR v21[10]; // [rsp+48h] [rbp-50h] BYREF
  int v22; // [rsp+A0h] [rbp+8h]

  v22 = Count;
  CurrentThread = KeGetCurrentThread();
  v9 = (ULONG_PTR *)Object;
  v10 = (unsigned int)Count;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  v12 = (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1;
  if ( WaitIrql <= 2u )
  {
    if ( WaitIrql != 2 )
      goto LABEL_12;
    if ( Timeout )
    {
      if ( !Timeout->QuadPart )
        goto LABEL_12;
      v13 = 290LL;
    }
    else
    {
      v13 = 289LL;
    }
  }
  else
  {
    v13 = 288LL;
  }
  VerifierBugCheckIfAppropriate(0xC4u, v13, WaitIrql, *v9, (__int64)Timeout);
LABEL_12:
  if ( (MmVerifierData & 0x800) != 0 && WaitMode == 1 && (!Timeout || Timeout->QuadPart) && v12 )
  {
    StackLimits = RtlpGetStackLimits((__int64)v21, (__int64)&v20);
    v15 = v20;
    v16 = v21[0];
    v17 = StackLimits;
  }
  else
  {
    v17 = 0;
    v16 = 0LL;
    v15 = 0LL;
  }
  if ( (_DWORD)v10 )
  {
    do
    {
      v18 = *v9;
      VfUtilSynchronizationObjectSanityChecks((char *)*v9, 1LL);
      if ( v17 && v18 >= v16 && v18 < v15 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, v18, 0LL, 0LL);
      ++v9;
      --v10;
    }
    while ( v10 );
    LODWORD(v10) = v22;
    v9 = (ULONG_PTR *)Object;
  }
  LOBYTE(Count) = Alertable;
  if ( (unsigned int)ViKeInjectStatusAlerted(Count) )
    return 257;
  else
    return pXdvKeWaitForMultipleObjects(v10, (PVOID *)v9, a3, a4, WaitMode, Alertable, Timeout, WaitBlockArray);
}
