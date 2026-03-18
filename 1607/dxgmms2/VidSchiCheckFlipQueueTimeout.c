/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x1C000A140
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  KSPIN_LOCK *v3; // rsi
  _QWORD *v4; // rbp
  char v6; // bl
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+8h]
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v3 = (KSPIN_LOCK *)(a1 + 1856);
  v4 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v7 )
  {
    v9 = a1 + 2968;
    while ( !*(_QWORD *)v9 || !*(_DWORD *)(*(_QWORD *)v9 + 2280LL) )
    {
      ++v8;
      v9 += 8LL;
      if ( v8 >= v7 )
        goto LABEL_6;
    }
    v6 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return 0LL;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 40) )
    return 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2968);
    v28 = v12;
    v13 = 0;
    KeAcquireInStackQueuedSpinLock(v3, &v26);
    v14 = 0LL;
    if ( *(_DWORD *)(a1 + 128) )
      break;
LABEL_20:
    KeReleaseInStackQueuedSpinLock(&v26);
    if ( v13 )
      goto LABEL_34;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 40) )
      return 0LL;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(v12 + 8 * v14 + 24);
    if ( !v15 || *(int *)(v12 + 4) < 4 )
      goto LABEL_18;
    if ( (*(_DWORD *)v15 & 1) != 0 )
      break;
    v16 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v15 + 8) = MEMORY[0xFFFFF78000000320];
    if ( *(_DWORD *)(v12 + 2264) )
    {
      v17 = 1224LL * *(unsigned int *)(v15 + 44) + v15 + 56;
      v31 = v17;
      if ( *(_DWORD *)(v17 + 1044) == 5
        || (v17 = 1224LL * *(unsigned int *)(v15 + 40) + v15 + 56,
            v31 = v17,
            (unsigned int)(*(_DWORD *)(v17 + 1044) - 3) <= 1) )
      {
        v18 = v16 - *(_QWORD *)(v17 + 1080);
        v19 = 10000000LL * g_TdrConfig[1];
        if ( v18 * (unsigned __int64)KeQueryTimeIncrement() <= v19 )
          goto LABEL_16;
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) == 0 )
          goto LABEL_29;
        v20 = __rdtsc();
        v21 = __readmsr(0x400000F6u);
        v22 = *((unsigned int *)KeGetCurrentPrcb() + 381);
        v23 = 10 * (v20 - v21) / v22;
        v24 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v22, 10 * (v20 - v21) % v22);
        v24[3] = v21;
        v24[4] = v20;
        v24[5] = v23;
        WdLogEvent5_WdPresentTokenEvent(v24);
        v4 = a2;
        if ( v23 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        {
LABEL_16:
          v12 = v28;
        }
        else
        {
LABEL_29:
          *(_DWORD *)v15 |= 1u;
          v12 = v28;
          *(_QWORD *)(v15 + 16) = v18;
          v25 = *(_QWORD *)(v31 + 1080);
          *(_QWORD *)(v15 + 24) = v25;
          if ( v4 )
            *v4 = v25;
        }
      }
    }
    v13 = *(_DWORD *)v15 & 1;
    if ( v13 )
    {
LABEL_19:
      v3 = (KSPIN_LOCK *)(a1 + 1856);
      goto LABEL_20;
    }
LABEL_18:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 128) )
      goto LABEL_19;
  }
  if ( v4 )
    *v4 = *(_QWORD *)(v15 + 24);
  KeReleaseInStackQueuedSpinLock(&v26);
LABEL_34:
  if ( a3 )
    *a3 = v11;
  return 1LL;
}
