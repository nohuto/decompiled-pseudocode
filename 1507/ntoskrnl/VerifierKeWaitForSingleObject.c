/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x140749448
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeInjectStatusAlerted @ 0x140749C44 (ViKeInjectStatusAlerted.c)
 *     ViKeObjectAcquired @ 0x140749D58 (ViKeObjectAcquired.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(
        void *a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 WaitIrql; // al
  PLARGE_INTEGER Timeout; // rdi
  char *v11; // rbx
  int v12; // esi
  ULONG_PTR v13; // rdx
  unsigned __int8 StackLimits; // al
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  Object = a1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  Timeout = a5;
  v11 = (char *)Object;
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
  VerifierBugCheckIfAppropriate(0xC4u, v13, WaitIrql, (ULONG_PTR)Object, (__int64)a5);
LABEL_12:
  if ( (MmVerifierData & 0x800) != 0 && a3 == 1 && (!Timeout || Timeout->QuadPart) && v12 )
  {
    StackLimits = RtlpGetStackLimits((__int64)&v22, (__int64)&v21);
    v15 = v21;
    v16 = v22;
    v17 = StackLimits;
  }
  else
  {
    v17 = 0;
    v16 = 0LL;
    v15 = 0LL;
  }
  VfUtilSynchronizationObjectSanityChecks(v11, 1LL);
  if ( v17 && (unsigned __int64)v11 >= v16 && (unsigned __int64)v11 < v15 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, (ULONG_PTR)v11, 0LL, 0LL);
  LOBYTE(v18) = a4;
  if ( (unsigned int)ViKeInjectStatusAlerted(v18) )
    v19 = 257;
  else
    v19 = pXdvKeWaitForSingleObject(v11, a2, a3, a4, Timeout);
  if ( (v19 & 0xFFFFFF7F) == 0 )
    ViKeObjectAcquired(1LL, &Object, Timeout, retaddr);
  return v19;
}
