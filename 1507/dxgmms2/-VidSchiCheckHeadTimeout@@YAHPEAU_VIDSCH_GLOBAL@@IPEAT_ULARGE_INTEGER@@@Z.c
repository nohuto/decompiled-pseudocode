/*
 * XREFs of ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAT_ULARGE_INTEGER@@@Z @ 0x1C0012424
 * Callers:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C00051EC (VidSchiCheckFlipQueueTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckHeadTimeout(struct _VIDSCH_GLOBAL *a1, unsigned int a2, union _ULARGE_INTEGER *a3)
{
  union _ULARGE_INTEGER *v4; // rdi
  int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  union _ULARGE_INTEGER *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r13
  union _ULARGE_INTEGER v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rax
  ULONGLONG v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h]
  int v23; // [rsp+88h] [rbp+10h]

  v4 = a3;
  v5 = 0;
  v6 = *((_QWORD *)a1 + a2 + 330);
  v22 = v6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
  v7 = 0;
  v23 = 0;
  if ( !*((_DWORD *)a1 + 31) )
  {
LABEL_21:
    v8 = v5;
    goto LABEL_22;
  }
  v8 = 1;
  while ( 1 )
  {
    v9 = *(union _ULARGE_INTEGER **)(v6 + 8LL * v7 + 16);
    if ( v9 )
    {
      if ( *(int *)(v6 + 4) >= 4 )
        break;
    }
LABEL_20:
    v23 = ++v7;
    if ( v7 >= *((_DWORD *)a1 + 31) )
      goto LABEL_21;
  }
  if ( (v9->LowPart & 1) == 0 )
  {
    v10 = MEMORY[0xFFFFF78000000320];
    v9[1].QuadPart = MEMORY[0xFFFFF78000000320];
    if ( *(_DWORD *)(v6 + 2320) )
    {
      v11 = (__int64)&v9[143 * v9[5].HighPart + 7];
      if ( *(_DWORD *)(v11 + 1044) != 5 )
      {
        v11 = (__int64)&v9[143 * v9[5].LowPart + 7];
        if ( (unsigned int)(*(_DWORD *)(v11 + 1044) - 3) > 1 )
          v11 = 0LL;
      }
      if ( v11 )
      {
        v12.QuadPart = v10 - *(_QWORD *)(v11 + 1072);
        v13 = 10000000LL * g_TdrConfig[1];
        if ( v12.QuadPart * KeQueryTimeIncrement() > v13 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 284LL) & 0x100) == 0 )
            goto LABEL_14;
          v14 = __rdtsc();
          v15 = __readmsr(0x400000F6u);
          v16 = *((unsigned int *)KeGetCurrentPrcb() + 381);
          v17 = 10 * (v14 - v15) / v16;
          v18 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v16, 10 * (v14 - v15) % v16);
          v18[3] = v15;
          v18[4] = v14;
          v18[5] = v17;
          WdLogEvent5_WdPresentTokenEvent(v18);
          if ( v17 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
          {
LABEL_14:
            v9->LowPart |= 1u;
            v4 = a3;
            v7 = v23;
            v9[2] = v12;
            v19 = *(_QWORD *)(v11 + 1072);
            v9[3].QuadPart = v19;
            if ( a3 )
              a3->QuadPart = v19;
            goto LABEL_18;
          }
        }
        v4 = a3;
      }
      v7 = v23;
    }
LABEL_18:
    v5 = v9->LowPart & 1;
    if ( v5 )
      goto LABEL_21;
    v6 = v22;
    goto LABEL_20;
  }
  if ( v4 )
    *v4 = v9[3];
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
