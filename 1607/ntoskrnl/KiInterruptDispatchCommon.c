/*
 * XREFs of KiInterruptDispatchCommon @ 0x1401D8494
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401CD9E0 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x1401D57F0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x14008B940 (KeGetCurrentProcessorNumberEx.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IoProcessPassiveInterrupts @ 0x1401CD7A0 (IoProcessPassiveInterrupts.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessDisconnectList @ 0x1401D8A70 (KiProcessDisconnectList.c)
 *     KiProcessPendingDisconnect @ 0x1401D8AC0 (KiProcessPendingDisconnect.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, char *a4, unsigned int *a5)
{
  int *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v8; // r15d
  char *v9; // rbx
  char v10; // r13
  unsigned __int8 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rdx
  int *v14; // rbx
  __int64 v15; // rbx
  char v16; // r14
  KSPIN_LOCK *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rsi
  char v22; // [rsp+20h] [rbp-61h]
  int v24; // [rsp+28h] [rbp-59h]
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+38h] [rbp-49h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+40h] [rbp-41h]
  char *v28; // [rsp+48h] [rbp-39h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-31h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-29h] BYREF
  unsigned int *v31; // [rsp+68h] [rbp-19h]
  char v32; // [rsp+70h] [rbp-11h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-1h] BYREF

  v5 = 0LL;
  v6 = a1;
  v31 = a5;
  v8 = 0;
  v24 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = &v32;
  v22 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  if ( a4 )
    v9 = a4;
  v28 = v9;
  v10 = 0;
  *((_QWORD *)v9 + 1) = v9;
  *(_QWORD *)v9 = v9;
  if ( a1 )
  {
    v12 = a2 - 256;
    SpinLock = (PKSPIN_LOCK)(KiGlobalSecondaryIDT + 48 * v12);
    v11 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock(SpinLock);
    if ( (unsigned int)v12 < 0x100 )
    {
      _mm_lfence();
      v5 = *(int **)(KiGlobalSecondaryIDT + 48 * v12 + 40);
    }
    v9 = v28;
    v6 = a1;
  }
  else
  {
    SpinLock = 0LL;
    KeGetCurrentProcessorNumberEx(ProcNumber);
    *(_QWORD *)&Affinity.Group = ProcNumber[0].Group;
    Affinity.Mask = 1LL << ProcNumber[0].Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v11 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( a2 <= 0xFF )
    {
      _mm_lfence();
      v5 = (int *)KeGetCurrentPrcb()->InterruptObject[a2];
    }
  }
  if ( v5 )
  {
    v13 = 1LL;
    v14 = v5;
    ++*((_WORD *)v5 + 51);
    if ( (a3 & 1) != 0 )
    {
      while ( *((_BYTE *)v14 + 93) )
      {
        v15 = *((_QWORD *)v14 + 1);
        if ( !v15 )
        {
          v14 = 0LL;
          break;
        }
        v14 = (int *)(v15 - 8);
        if ( v14 == v5 )
        {
          if ( *((_BYTE *)v14 + 93) )
            v14 = 0LL;
          break;
        }
      }
    }
    if ( v14 )
    {
      v16 = 0;
      *(_QWORD *)&ProcNumber[0].Group = v5[27];
      while ( (unsigned __int8)CurrentIrql <= 2u || *((_BYTE *)v14 + 93) )
      {
        if ( (v14[26] & 1) != 0 )
        {
          v20 = *((_QWORD *)v14 + 1) - 8LL;
        }
        else
        {
          ++*((_WORD *)v14 + 51);
          ++v8;
          v17 = SpinLock;
          if ( a1 )
            KxReleaseSpinLock(SpinLock);
          __writecr8(v11);
          LOBYTE(v13) = v11;
          v10 = KiInvokeInterruptServiceRoutine(v14, v13, a2);
          v24 = 2;
          v18 = a1;
          v11 = KeGetCurrentIrql();
          if ( a1 )
          {
            __writecr8(0xCuLL);
            KxAcquireSpinLock(v17);
            v18 = a1;
          }
          else
          {
            __writecr8(0xFuLL);
          }
          v19 = *((_QWORD *)v14 + 1);
          --*((_WORD *)v14 + 51);
          v20 = v19 - 8;
          KiProcessPendingDisconnect(v18, v14, v28);
          v13 = 1LL;
        }
        if ( *(_QWORD *)&ProcNumber[0].Group )
        {
          if ( v10 )
            v16 = 1;
          if ( (int *)v20 == v5 )
          {
            if ( !v16 || v8 <= 1 )
            {
              v10 = 1;
LABEL_45:
              v8 = v24;
              goto LABEL_46;
            }
            v8 = 0;
            v16 = 0;
            v10 = 0;
          }
        }
        else if ( v10 || (int *)v20 == v5 )
        {
          goto LABEL_45;
        }
        v14 = (int *)v20;
      }
      v8 = v24;
      v22 = 1;
      if ( v24 != 2 )
        v8 = 1;
LABEL_46:
      v6 = a1;
    }
    --*((_WORD *)v5 + 51);
    v9 = v28;
    KiProcessPendingDisconnect(v6, v5, v28);
  }
  if ( v6 )
  {
    KxReleaseSpinLock(SpinLock);
    __writecr8(v11);
  }
  else
  {
    __writecr8(v11);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v22 )
    IoProcessPassiveInterrupts();
  if ( (unsigned __int8)CurrentIrql < 2u )
    KiProcessDisconnectList(v9);
  if ( v31 )
    *v31 = v8;
  return v10;
}
