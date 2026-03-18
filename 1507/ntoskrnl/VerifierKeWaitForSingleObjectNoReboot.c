/*
 * XREFs of VerifierKeWaitForSingleObjectNoReboot @ 0x1407495C4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeInjectStatusAlerted @ 0x140749C44 (ViKeInjectStatusAlerted.c)
 */

NTSTATUS __fastcall VerifierKeWaitForSingleObjectNoReboot(
        char *a1,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 WaitIrql; // al
  PLARGE_INTEGER Timeout; // rbx
  int v12; // esi
  ULONG_PTR v13; // rdx
  unsigned __int8 StackLimits; // al
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  int v17; // r14d
  __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  Timeout = a5;
  v12 = (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1;
  if ( WaitIrql <= 2u )
  {
    if ( WaitIrql != 2 )
      goto LABEL_12;
    if ( a5 )
    {
      if ( !a5->QuadPart )
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
  VerifierBugCheckIfAppropriate(0xC4u, v13, WaitIrql, (ULONG_PTR)a1, (__int64)a5);
LABEL_12:
  if ( (MmVerifierData & 0x800) != 0 && WaitMode == 1 && (!Timeout || Timeout->QuadPart) && v12 )
  {
    StackLimits = RtlpGetStackLimits((__int64)&v20, (__int64)&v21);
    v15 = v21;
    v16 = v20;
    v17 = StackLimits;
  }
  else
  {
    v17 = 0;
    v16 = 0LL;
    v15 = 0LL;
  }
  VfUtilSynchronizationObjectSanityChecks(a1, 1LL);
  if ( v17 && (unsigned __int64)a1 >= v16 && (unsigned __int64)a1 < v15 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, (ULONG_PTR)a1, 0LL, 0LL);
  LOBYTE(v18) = Alertable;
  if ( (unsigned int)ViKeInjectStatusAlerted(v18) )
    return 257;
  else
    return pXdvKeWaitForSingleObject(a1, WaitReason, WaitMode, Alertable, Timeout);
}
