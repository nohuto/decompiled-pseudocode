/*
 * XREFs of FsRtlNotifyFilterReportChangeLite @ 0x14048D904
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x1400C9030 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlNotifyInitializeSync @ 0x14048D7FC (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14048DE28 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUninitializeSync @ 0x1404C412C (FsRtlNotifyUninitializeSync.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  const void **v9; // r13
  const void **v10; // r12
  _QWORD **v11; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  unsigned __int8 (__fastcall *v16)(_QWORD); // rax
  __int16 v17; // r8
  unsigned int v18; // r15d
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  __int16 v23; // ax
  _DWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r10
  PVOID PoolWithTag; // rax
  _DWORD *v29; // rbx
  _WORD *v30; // rbx
  __int64 (__fastcall *v31)(_QWORD, __int64, _QWORD); // rax
  char v32; // al
  _QWORD *v33; // [rsp+48h] [rbp-80h]
  PNOTIFY_SYNC NotifySync; // [rsp+68h] [rbp-60h] BYREF
  _QWORD *v35; // [rsp+70h] [rbp-58h]

  v9 = a4;
  v10 = a3;
  v11 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  v14 = *v11;
  while ( 1 )
  {
    v33 = v14;
    if ( v14 == v11 )
      break;
    v15 = v14 - 4;
    if ( (*((_DWORD *)v14 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (v15[9] & 1) != 0
       && ((v31 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v15[2]) == 0LL || (v32 = v31(v15[1], a7, v15[3])) != 0)) )
    {
      v16 = (unsigned __int8 (__fastcall *)(_QWORD))v15[8];
      if ( !v16 || !a8 || v16(v15[1]) )
      {
        v17 = *((_WORD *)v15 + 36);
        if ( (v17 & 2) == 0 )
        {
          v18 = *((_DWORD *)v15 + 24);
          if ( v18 )
          {
            v19 = 0LL;
            v35 = 0LL;
            if ( *((_DWORD *)v15 + 25) )
            {
              v18 = *((_DWORD *)v15 + 25);
            }
            else
            {
              v20 = v15 + 6;
              if ( (_QWORD *)*v20 != v20 )
              {
                v19 = (_QWORD *)(*v20 - 168LL);
                v35 = v19;
                v18 = *(_DWORD *)(v19[23] + 8LL);
              }
            }
            v21 = *(unsigned __int16 *)v10 + 12;
            if ( v9 )
              v21 += *(unsigned __int16 *)v9 + 2;
            v22 = (*((_DWORD *)v15 + 26) + 3) & 0xFFFFFFFC;
            if ( v21 > v18 || v21 + v22 > v18 )
            {
              *((_WORD *)v15 + 36) = v17 | 2;
            }
            else
            {
              v24 = 0LL;
              v25 = v15[11];
              if ( v25 )
              {
                *(_DWORD *)(v25 + *((unsigned int *)v15 + 27)) = v22 - *((_DWORD *)v15 + 27);
                *((_DWORD *)v15 + 27) = v22;
                v24 = (_DWORD *)(v15[11] + v22);
              }
              else
              {
                if ( !v19 )
                  goto LABEL_35;
                v26 = v19[3];
                if ( v26 )
                {
                  v24 = (_DWORD *)v19[3];
                  v15[11] = v26;
                }
                else
                {
                  v27 = v19[1];
                  if ( !v27 )
                    goto LABEL_35;
                  if ( (*(_BYTE *)(v27 + 10) & 5) != 0 )
                    v24 = *(_DWORD **)(v27 + 24);
                  else
                    v24 = MmMapLockedPagesSpecifyCache((PMDL)v27, 0, MmCached, 0LL, 0, 0x40000010u);
                  v15[11] = v24;
                }
                *((_DWORD *)v15 + 25) = v18;
              }
LABEL_35:
              if ( !v15[11] )
              {
                PsChargePoolQuota((PEPROCESS)v15[15], PagedPool, v18);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v18, 0x4E725346u);
                v15[11] = PoolWithTag;
                v15[10] = PoolWithTag;
                memset((void *)v15[11], 0, v18);
                *((_DWORD *)v15 + 25) = v18;
                v24 = (_DWORD *)v15[11];
              }
              if ( v24 )
              {
                *v24 = 0;
                v24[1] = a6;
                v24[2] = v21 - 12;
                v29 = v24 + 3;
                memmove(v24 + 3, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v30 = (_WORD *)((char *)v29 + *(unsigned __int16 *)a3);
                  *v30 = 58;
                  memmove(v30 + 1, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v15 + 26) = v21 + v22;
                v14 = v33;
              }
            }
            if ( (v15[9] & 2) != 0 && v15[11] )
            {
              if ( v15[10] )
              {
                PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v15[15], *((unsigned int *)v15 + 25));
                ExFreePoolWithTag((PVOID)v15[10], 0);
              }
              v15[11] = 0LL;
              v15[10] = 0LL;
              v15[13] = 0LL;
              *((_DWORD *)v15 + 25) = 0;
            }
            v9 = a4;
            v10 = a3;
          }
        }
        v23 = *((_WORD *)v15 + 36);
        if ( a6 == 4 )
        {
          *((_WORD *)v15 + 36) = v23 | 8;
        }
        else
        {
          *((_WORD *)v15 + 36) = v23 & 0xFFF7;
          if ( (_QWORD *)v15[6] != v15 + 6 )
            FsRtlNotifyCompleteIrpList(v15, 0LL);
        }
      }
    }
    v14 = (_QWORD *)*v14;
    v11 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
