/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x1407490A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeInjectStatusAlerted @ 0x140749C44 (ViKeInjectStatusAlerted.c)
 *     ViKeObjectAcquired @ 0x140749D58 (ViKeObjectAcquired.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        __int64 Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE a5,
        BOOLEAN Alertable,
        PLARGE_INTEGER a7,
        PKWAIT_BLOCK WaitBlockArray)
{
  struct _KTHREAD *CurrentThread; // r10
  KWAIT_REASON v9; // r14d
  WAIT_TYPE v10; // r12d
  __int64 v11; // rsi
  unsigned __int8 WaitIrql; // al
  LARGE_INTEGER *Timeout; // rbx
  int v15; // edi
  ULONG_PTR v16; // rdx
  KPROCESSOR_MODE WaitMode; // bp
  unsigned __int8 StackLimits; // al
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbp
  char **v21; // r14
  __int64 v22; // r12
  char *v23; // rdi
  int v24; // edi
  signed int v25; // ecx
  PVOID *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v31[8]; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v33; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v9 = WaitReason;
  v10 = WaitType;
  v11 = (unsigned int)Count;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  Timeout = a7;
  v15 = (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1;
  if ( WaitIrql <= 2u )
  {
    if ( WaitIrql != 2 )
      goto LABEL_12;
    if ( a7 )
    {
      if ( !a7->QuadPart )
        goto LABEL_12;
      v16 = 290LL;
    }
    else
    {
      v16 = 289LL;
    }
  }
  else
  {
    v16 = 288LL;
  }
  VerifierBugCheckIfAppropriate(0xC4u, v16, WaitIrql, (ULONG_PTR)*Object, (__int64)a7);
LABEL_12:
  WaitMode = a5;
  if ( (MmVerifierData & 0x800) != 0 && a5 == 1 && (!a7 || a7->QuadPart) && v15 )
  {
    StackLimits = RtlpGetStackLimits((__int64)v31, (__int64)&v30);
    v19 = v30;
    Count = StackLimits;
    v30 = v31[0];
    v33 = StackLimits;
  }
  else
  {
    v33 = 0;
    v30 = 0LL;
    v19 = 0LL;
  }
  if ( (_DWORD)v11 )
  {
    v20 = v30;
    v21 = (char **)Object;
    v22 = v11;
    do
    {
      v23 = *v21;
      VfUtilSynchronizationObjectSanityChecks(*v21, 1LL);
      if ( v33 && (unsigned __int64)v23 >= v20 && (unsigned __int64)v23 < v19 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, (ULONG_PTR)v23, 0LL, 0LL);
      ++v21;
      --v22;
    }
    while ( v22 );
    Timeout = a7;
    WaitMode = a5;
    v9 = WaitReason;
    v10 = WaitType;
  }
  LOBYTE(Count) = Alertable;
  if ( (unsigned int)ViKeInjectStatusAlerted(Count) )
    v24 = 257;
  else
    v24 = pXdvKeWaitForMultipleObjects(v11, Object, v10, v9, WaitMode, Alertable, Timeout, WaitBlockArray);
  v25 = v24 & 0xFFFFFF7F;
  if ( WaitMode )
  {
    if ( v24 >= 0 && v25 < (int)v11 )
    {
      v28 = v25;
      v27 = 1LL;
      v26 = &Object[v28];
      goto LABEL_36;
    }
  }
  else if ( !v25 )
  {
    v26 = Object;
    v27 = (unsigned int)v11;
LABEL_36:
    ViKeObjectAcquired(v27, v26, Timeout, retaddr);
  }
  return (unsigned int)v24;
}
