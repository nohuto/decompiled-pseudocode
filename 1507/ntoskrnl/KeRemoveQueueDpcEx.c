/*
 * XREFs of KeRemoveQueueDpcEx @ 0x14010C9A0
 * Callers:
 *     ExpCancelTimer @ 0x140066750 (ExpCancelTimer.c)
 *     KeRemoveQueueDpc @ 0x14010C998 (KeRemoveQueueDpc.c)
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 *     VfWdCheckForSettingsChange @ 0x14074AE14 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KiGetDeepIdleProcessors @ 0x1400D55E0 (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KeRemoveQueueDpcEx(int *a1, char a2)
{
  char v3; // r13
  __int64 v5; // r12
  bool v6; // bp
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 v19; // cx
  __int64 Group; // r8
  unsigned __int64 v21; // r15
  unsigned __int16 i; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r13
  volatile signed __int32 *v26; // rbx
  bool v27; // bp
  unsigned __int16 v28; // dx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r14
  struct _KPRCB *v30; // rsi
  KPRIORITY v31; // eax
  unsigned int v32; // r15d
  unsigned __int16 v33; // di
  KPRIORITY v34; // r12d
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v39[8]; // [rsp+0h] [rbp-248h] BYREF
  char v40; // [rsp+20h] [rbp-228h]
  int v41; // [rsp+24h] [rbp-224h]
  PKTHREAD Thread; // [rsp+28h] [rbp-220h]
  int v43; // [rsp+30h] [rbp-218h]
  unsigned int v44; // [rsp+40h] [rbp-208h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-1C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-1B8h] BYREF
  unsigned __int16 v47; // [rsp+A0h] [rbp-1A8h] BYREF
  _QWORD v48[21]; // [rsp+A8h] [rbp-1A0h]
  unsigned __int16 v49[88]; // [rsp+150h] [rbp-F8h] BYREF
  int v50; // [rsp+240h] [rbp-8h]
  void *retaddr; // [rsp+248h] [rbp+0h]

  v3 = 0;
  v40 = 0;
  _disable();
  v5 = *((_QWORD *)a1 + 7);
  v6 = (v50 & 0x200) != 0;
  if ( v5 )
  {
    v7 = *a1;
    v44 = v7;
    v8 = HIWORD(v7);
    if ( HIWORD(v7) >= 0x280u )
      LOWORD(v8) = HIWORD(v7) - 640;
    if ( (_BYTE)v44 == 26 && (v9 = KiProcessorBlock[(unsigned __int16)v8], *(_BYTE *)(v9 + 11752)) )
      v10 = v9 + 11688;
    else
      v10 = KiProcessorBlock[(unsigned __int16)v8] + 11648;
    v11 = (volatile signed __int32 *)(v10 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v10 + 16);
    }
    else if ( _interlockedbittestandset64(v11, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v10 + 16));
    }
    if ( v5 == *((_QWORD *)a1 + 7) && v7 == *a1 )
    {
      --*(_DWORD *)(v10 + 24);
      v12 = (__int64 *)(a1 + 2);
      v13 = (__int64 *)v10;
      if ( *(int **)v10 != a1 + 2 )
      {
        do
          v13 = (__int64 *)*v13;
        while ( (__int64 *)*v13 != v12 );
      }
      v14 = *v12;
      *v13 = v14;
      if ( !v14 )
        *(_QWORD *)(v10 + 8) = v13;
      *((_QWORD *)a1 + 7) = 0LL;
      v3 = 1;
      v40 = 1;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v10 + 16, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
  }
  if ( v6 )
    _enable();
  if ( !a2 || !*((_QWORD *)a1 + 2) )
    return v3;
  KiGetDeepIdleProcessors(v49, (__int64)&v47);
  v15 = 0;
  if ( v47 )
  {
    v16 = *((_QWORD *)a1 + 2);
    do
    {
      v17 = v15++;
      v48[v17] &= v16;
    }
    while ( v15 < v47 );
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = v47;
  Group = CurrentPrcb->Group;
  if ( v47 > (unsigned __int16)Group )
  {
    v48[Group] &= ~CurrentPrcb->GroupSetMember;
    v19 = v47;
  }
  v21 = v48[0];
  for ( i = 0; ; v21 = v48[i] )
  {
    while ( v21 )
    {
      _BitScanForward64(&v23, v21);
      v21 &= ~(1LL << v23);
      v43 = v23;
      v24 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v23]];
      if ( *(_BYTE *)a1 != 26 || (v25 = v24 + 11688, !*(_BYTE *)(v24 + 11752)) )
        v25 = v24 + 11648;
      if ( !v5 )
      {
        _InterlockedOr(v39, 0);
        v26 = (volatile signed __int32 *)(v25 + 16);
        if ( *(_QWORD *)(v25 + 16) )
        {
          _disable();
          v27 = (v50 & 0x200) != 0;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v25 + 16);
          }
          else if ( _interlockedbittestandset64(v26, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v25 + 16));
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v25 + 16, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v26, 0LL);
          if ( v27 )
            _enable();
        }
      }
      if ( *(int **)(v25 + 32) == a1 )
      {
LABEL_53:
        v19 = v47;
      }
      else
      {
        v19 = v47;
        if ( v47 > *(unsigned __int8 *)(v24 + 1616) )
        {
          v48[*(unsigned __int8 *)(v24 + 1616)] &= ~*(_QWORD *)(v24 + 1608);
          goto LABEL_53;
        }
      }
    }
    if ( ++i >= (unsigned int)v19 )
      break;
  }
  v28 = 0;
  if ( v19 )
  {
    while ( !v48[v28] )
    {
      if ( ++v28 >= v19 )
        return v40;
    }
    p_PreviousAffinity = &PreviousAffinity;
    *(_DWORD *)Affinity.Reserved = 0;
    v30 = 0LL;
    Affinity.Reserved[2] = 0;
    Thread = KeGetCurrentThread();
    v31 = KeSetPriorityThread(Thread, 30);
    v32 = v47;
    v33 = 0;
    v34 = v31;
    v35 = v48[0];
    while ( v35 )
    {
LABEL_62:
      _BitScanForward64(&v36, v35);
      Affinity.Group = v33;
      v35 &= ~(1LL << v36);
      v41 = v36;
      Affinity.Mask = 1LL << v36;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      v30 = KeGetCurrentPrcb();
      p_PreviousAffinity = 0LL;
    }
    while ( ++v33 < v32 )
    {
      v35 = v48[v33];
      if ( v35 )
        goto LABEL_62;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v30->DpcRoutineActive = 1;
    KeSetPriorityThread(Thread, v34);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    v30->DpcRoutineActive = 0;
    KiCheckForThreadDispatch((__int64)v30, CurrentIrql);
  }
  return v40;
}
