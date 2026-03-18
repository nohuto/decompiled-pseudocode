/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14014728C
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v2; // r8
  unsigned int v3; // r15d
  volatile signed __int32 *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v7; // rax
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int i; // r14d
  unsigned __int8 v12; // bp
  _QWORD *v13; // rax
  int v14; // ebp
  __int64 result; // rax
  _QWORD *v16; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
  v3 = 100;
  v4 = (volatile signed __int32 *)(v2 + 768);
  v5 = v2 + 24 * (*(_DWORD *)(a1 + 32) & 7 | (unsigned __int64)(8 * (*(_DWORD *)(a1 + 40) & 3u)));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4);
  }
  --*(_DWORD *)(v5 + 16);
  ++*(_DWORD *)(v5 + 20);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  v7 = CurrentIrql;
LABEL_7:
  __writecr8(v7);
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (__int64)(v1 - 5), 0);
  v9 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v8.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v9 < v3 )
    v3 = v9;
  PerformanceCounter.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
LABEL_10:
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v4);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v4);
    }
    v13 = *(_QWORD **)(v5 + 8);
    if ( *v13 )
    {
      if ( v13 == (_QWORD *)v5 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v5;
        *(_QWORD *)v5 = **(_QWORD **)v5;
        v16 = *(_QWORD **)(v5 + 8);
        if ( v1 == v16 )
        {
          *(_QWORD *)v5 = 0LL;
          *(_QWORD *)(v5 + 8) = v5;
        }
        else
        {
          --*v16;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v4, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      v7 = v12;
      goto LABEL_7;
    }
    if ( i )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    __writecr8(v12);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = 0;
    while ( *(_DWORD *)(v5 + 16) <= *(_DWORD *)(v5 + 20) )
    {
      if ( **(_QWORD **)(v5 + 8) )
        goto LABEL_10;
      if ( (++v14 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= (unsigned __int64)v3 )
      {
        break;
      }
      _mm_pause();
    }
  }
  --*(_DWORD *)(v5 + 20);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  result = v12;
  __writecr8(v12);
  return result;
}
