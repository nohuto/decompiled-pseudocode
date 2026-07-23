/*
 * XREFs of KiInterruptDispatchCommon @ 0x1402077A8
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401FB130 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x14020339C (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IoProcessPassiveInterrupts @ 0x1401FAC30 (IoProcessPassiveInterrupts.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessDisconnectList @ 0x140207E40 (KiProcessDisconnectList.c)
 *     KiProcessPendingDisconnect @ 0x140207E90 (KiProcessPendingDisconnect.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, char *a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  int v7; // r15d
  __int64 v8; // r8
  char *v9; // rbx
  char v10; // r13
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rdx
  int *v13; // rsi
  __int64 v14; // rbx
  int *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r9
  unsigned int v18; // r12d
  char v19; // r15
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // al
  char *v22; // r8
  __int64 v23; // r14
  char *v24; // r8
  char v26; // [rsp+20h] [rbp-61h]
  int v28; // [rsp+28h] [rbp-59h]
  __int64 v29; // [rsp+30h] [rbp-51h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-41h] BYREF
  __int64 v32; // [rsp+48h] [rbp-39h]
  char *v33; // [rsp+50h] [rbp-31h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-29h]
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-21h] BYREF
  __int64 v36; // [rsp+70h] [rbp-11h]
  char v37; // [rsp+78h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+57h]

  v5 = a5;
  v32 = (__int64)a5;
  v7 = 0;
  v28 = 0;
  v8 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v9 = &v37;
  v26 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v10 = 0;
  if ( a4 )
    v9 = a4;
  v33 = v9;
  *((_QWORD *)v9 + 1) = v9;
  *(_QWORD *)v9 = v9;
  if ( !a1 )
  {
    v11 = 0LL;
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    *(_QWORD *)&Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v12 = KeGetCurrentIrql();
    v29 = v12;
    __writecr8(0xFuLL);
    v8 = a2;
    v13 = 0LL;
    if ( a2 <= 0xFF )
    {
      _mm_lfence();
      v13 = (int *)KeGetCurrentPrcb()->InterruptObject[a2];
    }
    goto LABEL_14;
  }
  v14 = a2 - 256;
  v11 = (volatile signed __int32 *)(KiGlobalSecondaryIDT + 48 * v14);
  v12 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v29 = v12;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v11);
LABEL_10:
    v8 = a2;
    v12 = v29;
    goto LABEL_11;
  }
  if ( _interlockedbittestandset64(v11, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v11);
    goto LABEL_10;
  }
LABEL_11:
  v13 = 0LL;
  if ( (unsigned int)v14 < 0x100 )
  {
    _mm_lfence();
    v13 = *(int **)(KiGlobalSecondaryIDT + 48 * v14 + 40);
  }
  v9 = v33;
LABEL_14:
  if ( v13 )
  {
    v15 = v13;
    ++*((_WORD *)v13 + 51);
    if ( (a3 & 1) != 0 )
    {
      while ( *((_BYTE *)v15 + 93) )
      {
        v16 = *((_QWORD *)v15 + 1);
        if ( !v16 )
        {
          v15 = 0LL;
          break;
        }
        v15 = (int *)(v16 - 8);
        if ( v15 == v13 )
        {
          if ( *((_BYTE *)v15 + 93) )
            v15 = 0LL;
          break;
        }
      }
    }
    v17 = 0xFFFFLL;
    if ( v15 )
    {
      v18 = 0;
      v36 = v13[27];
      v19 = 0;
      while ( (unsigned __int8)CurrentIrql <= 2u || *((_BYTE *)v15 + 93) )
      {
        if ( (v15[26] & 1) != 0 )
        {
          v23 = *((_QWORD *)v15 + 1) - 8LL;
        }
        else
        {
          ++*((_WORD *)v15 + 51);
          ++v18;
          if ( a1 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseSpinLockInstrumented((volatile signed __int64 *)v11, retaddr);
              v12 = v29;
              v8 = a2;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
            }
          }
          __writecr8((unsigned __int8)v12);
          v28 = 2;
          v10 = KiInvokeInterruptServiceRoutine(v15, v12, v8, v17);
          if ( a1 )
          {
            v21 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            LOBYTE(v29) = v21;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v11);
            }
            else if ( _interlockedbittestandset64(v11, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(v11);
            }
          }
          else
          {
            v20 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            LOBYTE(v29) = v20;
          }
          v22 = v33;
          v23 = *((_QWORD *)v15 + 1) - 8LL;
          --*((_WORD *)v15 + 51);
          KiProcessPendingDisconnect(a1, v15, v22);
          v8 = a2;
        }
        if ( v36 )
        {
          if ( v10 )
            v19 = 1;
          if ( (int *)v23 == v13 )
          {
            if ( !v19 || v18 <= 1 )
            {
              v10 = 1;
LABEL_55:
              v7 = v28;
              goto LABEL_56;
            }
            v18 = 0;
            v19 = 0;
            v10 = 0;
          }
        }
        else if ( v10 || (int *)v23 == v13 )
        {
          goto LABEL_55;
        }
        v12 = v29;
        v15 = (int *)v23;
      }
      v7 = v28;
      v26 = 1;
      if ( v28 != 2 )
        v7 = 1;
LABEL_56:
      v5 = (_DWORD *)v32;
    }
    v9 = v33;
    v24 = v33;
    --*((_WORD *)v13 + 51);
    KiProcessPendingDisconnect(a1, v13, v24);
  }
  if ( a1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v11, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    __writecr8((unsigned __int8)v29);
  }
  else
  {
    __writecr8((unsigned __int8)v29);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v26 )
    IoProcessPassiveInterrupts();
  if ( (unsigned __int8)CurrentIrql < 2u )
    KiProcessDisconnectList(v9);
  if ( v5 )
    *v5 = v7;
  return v10;
}
