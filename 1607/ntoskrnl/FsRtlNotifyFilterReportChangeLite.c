/*
 * XREFs of FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C
 * Callers:
 *     <none>
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x14009C638 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyInitializeSync @ 0x1404AAF64 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1404ABEC8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUninitializeSync @ 0x14052E214 (FsRtlNotifyUninitializeSync.c)
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
  const void **v9; // r12
  _QWORD **v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v13; // r13
  _QWORD *v14; // rdi
  unsigned __int8 (__fastcall *v15)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v16)(_QWORD); // rax
  UINT v17; // r15d
  _QWORD *v18; // rax
  UINT v19; // r12d
  unsigned __int64 v20; // rbx
  NTSTATUS v21; // eax
  __int64 v22; // r9
  __int16 v23; // r10
  _DWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r10
  PVOID PoolWithTag; // rax
  int v29; // r15d
  _DWORD *v30; // rbx
  _WORD *v31; // rbx
  __int16 v32; // ax
  UINT puResult[3]; // [rsp+4Ch] [rbp-7Ch] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-70h]
  _QWORD *v35; // [rsp+60h] [rbp-68h]
  PNOTIFY_SYNC NotifySync; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-58h]
  NTSTATUS v38; // [rsp+78h] [rbp-50h]
  __int64 v39; // [rsp+80h] [rbp-48h]

  v9 = a3;
  v10 = (_QWORD **)a2;
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
  v13 = *v10;
  while ( 1 )
  {
    v35 = v13;
    if ( v13 == v10 )
      break;
    v14 = v13 - 4;
    v34 = v13 - 4;
    if ( (*((_DWORD *)v13 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (v14[9] & 1) != 0
       && ((v15 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))v14[2]) == 0LL || v15(v14[1], a7, v14[3]))) )
    {
      v16 = (unsigned __int8 (__fastcall *)(_QWORD))v14[8];
      if ( !v16 || !a8 || v16(v14[1]) )
      {
        if ( (v14[9] & 2) == 0 )
        {
          v17 = *((_DWORD *)v14 + 24);
          if ( v17 )
          {
            v39 = 0LL;
            if ( *((_DWORD *)v14 + 25) )
            {
              v17 = *((_DWORD *)v14 + 25);
            }
            else
            {
              v18 = v14 + 6;
              if ( (_QWORD *)*v18 != v18 )
              {
                v39 = *v18 - 168LL;
                v17 = *(_DWORD *)(*(_QWORD *)(v39 + 184) + 8LL);
              }
            }
            v19 = *(unsigned __int16 *)v9 + 12;
            if ( a4 )
              v19 += *(unsigned __int16 *)a4 + 2;
            v20 = (*((unsigned int *)v14 + 26) + 3LL) & 0xFFFFFFFFFFFFFFFCuLL;
            v37 = v20;
            puResult[1] = v20;
            v21 = RtlUIntAdd(v20, v19, puResult);
            v38 = v21;
            if ( v19 > v17 || v21 || puResult[0] > v17 )
            {
              *((_WORD *)v14 + 36) = v23 | 2;
            }
            else
            {
              v24 = 0LL;
              v25 = v14[11];
              if ( v25 )
              {
                *(_DWORD *)(v25 + *((unsigned int *)v14 + 27)) = v20 - *((_DWORD *)v14 + 27);
                *((_DWORD *)v14 + 27) = v20;
                v24 = (_DWORD *)(v14[11] + (unsigned int)v20);
                goto LABEL_40;
              }
              if ( v22 )
              {
                v26 = *(_QWORD *)(v22 + 24);
                if ( v26 )
                {
                  v24 = *(_DWORD **)(v22 + 24);
                  v14[11] = v26;
                  goto LABEL_39;
                }
                v27 = *(_QWORD *)(v22 + 8);
                if ( v27 )
                {
                  if ( (*(_BYTE *)(v27 + 10) & 5) != 0 )
                    v24 = *(_DWORD **)(v27 + 24);
                  else
                    v24 = MmMapLockedPagesSpecifyCache((PMDL)v27, 0, MmCached, 0LL, 0, 0x40000010u);
                  v14[11] = v24;
LABEL_39:
                  *((_DWORD *)v14 + 25) = v17;
                }
              }
LABEL_40:
              if ( !v14[11] )
              {
                PsChargePoolQuota((PEPROCESS)v14[15], PagedPool, v17);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v17, 0x4E725346u);
                v14[11] = PoolWithTag;
                v14[10] = PoolWithTag;
                memset((void *)v14[11], 0, v17);
                *((_DWORD *)v14 + 25) = v17;
                v24 = (_DWORD *)v14[11];
              }
              v29 = v37;
              if ( v24 )
              {
                *v24 = 0;
                v24[1] = a6;
                v24[2] = v19 - 12;
                v30 = v24 + 3;
                memmove(v24 + 3, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v31 = (_WORD *)((char *)v30 + *(unsigned __int16 *)a3);
                  *v31 = 58;
                  memmove(v31 + 1, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v14 + 26) = v29 + v19;
              }
            }
            if ( (v14[9] & 2) != 0 && v14[11] )
            {
              if ( v14[10] )
              {
                PsReturnProcessPagedPoolQuota(v14[15], *((unsigned int *)v14 + 25));
                ExFreePoolWithTag((PVOID)v14[10], 0);
              }
              v14[11] = 0LL;
              v14[10] = 0LL;
              v14[13] = 0LL;
              *((_DWORD *)v14 + 25) = 0;
            }
            v9 = a3;
          }
        }
        v32 = *((_WORD *)v14 + 36);
        if ( a6 == 4 )
        {
          *((_WORD *)v14 + 36) = v32 | 8;
        }
        else
        {
          *((_WORD *)v14 + 36) = v32 & 0xFFF7;
          if ( (_QWORD *)v14[6] != v14 + 6 )
            FsRtlNotifyCompleteIrpList(v14, 0LL);
        }
      }
    }
    v13 = (_QWORD *)*v13;
    v10 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
