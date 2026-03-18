/*
 * XREFs of FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsChargePoolQuota @ 0x140074534 (PsChargePoolQuota.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1404A6720 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1404A7068 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14055B258 (FsRtlNotifyUninitializeSync.c)
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
  const void **v10; // r14
  _QWORD *v11; // r13
  volatile signed __int64 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int8 (__fastcall *v19)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v20)(_QWORD); // rax
  ULONG v21; // esi
  _QWORD *v22; // rax
  ULONG v23; // r14d
  ULONG v24; // r12d
  NTSTATUS v25; // eax
  __int64 v26; // r9
  __int16 v27; // r10
  _DWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r10
  PVOID PoolWithTag; // rax
  _DWORD *v33; // rbx
  _WORD *v34; // rbx
  __int16 v35; // ax
  ULONG_PTR v36; // rbx
  signed __int32 v37; // eax
  ULONG pulResult[3]; // [rsp+4Ch] [rbp-7Ch] BYREF
  _QWORD *v39; // [rsp+58h] [rbp-70h]
  _QWORD *v40; // [rsp+60h] [rbp-68h]
  PNOTIFY_SYNC NotifySync; // [rsp+68h] [rbp-60h] BYREF
  NTSTATUS v42; // [rsp+70h] [rbp-58h]
  __int64 v43; // [rsp+78h] [rbp-50h]

  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( (_QWORD *)*a2 == a2 )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(v12, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *v12;
  if ( CurrentThread != *(struct _KTHREAD **)(*v12 + 56) )
  {
    v15 = KeGetCurrentThread();
    v16 = KeAbPreAcquire(*v12, 0LL, 0LL, (__int64)a4);
    v17 = v16;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v14, 0) )
      ExpAcquireFastMutexContended(v14, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    *(_QWORD *)(v14 + 8) = v15;
    v12 = a1;
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v10 = a3;
  }
  ++*(_DWORD *)(*v12 + 64);
  while ( 1 )
  {
    v11 = (_QWORD *)*v11;
    v40 = v11;
    if ( v11 == a2 )
      break;
    v18 = (__int64)(v11 - 4);
    v39 = v11 - 4;
    if ( (*((_DWORD *)v11 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*(_BYTE *)(v18 + 72) & 1) != 0
       && ((v19 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(v18 + 16)) == 0LL
        || v19(*(_QWORD *)(v18 + 8), a7, *(_QWORD *)(v18 + 24)))) )
    {
      v20 = *(unsigned __int8 (__fastcall **)(_QWORD))(v18 + 64);
      if ( !v20 || !a8 || v20(*(_QWORD *)(v18 + 8)) )
      {
        if ( (*(_WORD *)(v18 + 72) & 2) == 0 )
        {
          v21 = *(_DWORD *)(v18 + 96);
          if ( v21 )
          {
            v43 = 0LL;
            if ( *(_DWORD *)(v18 + 100) )
            {
              v21 = *(_DWORD *)(v18 + 100);
            }
            else
            {
              v22 = (_QWORD *)(v18 + 48);
              if ( (_QWORD *)*v22 != v22 )
              {
                v43 = *v22 - 168LL;
                v21 = *(_DWORD *)(*(_QWORD *)(v43 + 184) + 8LL);
              }
            }
            v23 = *(unsigned __int16 *)v10 + 12;
            if ( v9 )
              v23 += *(unsigned __int16 *)v9 + 2;
            v24 = (*(_DWORD *)(v18 + 104) + 3) & 0xFFFFFFFC;
            pulResult[1] = v24;
            v25 = RtlULongAdd(v24, v23, pulResult);
            v42 = v25;
            if ( v23 > v21 || v25 || pulResult[0] > v21 )
            {
              *(_WORD *)(v18 + 72) = v27 | 2;
            }
            else
            {
              v28 = 0LL;
              v29 = *(_QWORD *)(v18 + 88);
              if ( v29 )
              {
                *(_DWORD *)(v29 + *(unsigned int *)(v18 + 108)) = v24 - *(_DWORD *)(v18 + 108);
                *(_DWORD *)(v18 + 108) = v24;
                v28 = (_DWORD *)(*(_QWORD *)(v18 + 88) + v24);
                goto LABEL_44;
              }
              if ( v26 )
              {
                v30 = *(_QWORD *)(v26 + 24);
                if ( v30 )
                {
                  v28 = *(_DWORD **)(v26 + 24);
                  *(_QWORD *)(v18 + 88) = v30;
                  goto LABEL_43;
                }
                v31 = *(_QWORD *)(v26 + 8);
                if ( v31 )
                {
                  if ( (*(_BYTE *)(v31 + 10) & 5) != 0 )
                    v28 = *(_DWORD **)(v31 + 24);
                  else
                    v28 = MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, 0x40000010u);
                  *(_QWORD *)(v18 + 88) = v28;
LABEL_43:
                  *(_DWORD *)(v18 + 100) = v21;
                }
              }
LABEL_44:
              if ( !*(_QWORD *)(v18 + 88) )
              {
                PsChargePoolQuota(*(PEPROCESS *)(v18 + 120), PagedPool, v21);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v21, 0x4E725346u);
                *(_QWORD *)(v18 + 88) = PoolWithTag;
                *(_QWORD *)(v18 + 80) = PoolWithTag;
                memset(*(void **)(v18 + 88), 0, v21);
                *(_DWORD *)(v18 + 100) = v21;
                v28 = *(_DWORD **)(v18 + 88);
              }
              if ( v28 )
              {
                *v28 = 0;
                v28[1] = a6;
                v28[2] = v23 - 12;
                v33 = v28 + 3;
                memmove(v28 + 3, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v34 = (_WORD *)((char *)v33 + *(unsigned __int16 *)a3);
                  *v34 = 58;
                  memmove(v34 + 1, a4[1], *(unsigned __int16 *)a4);
                }
                *(_DWORD *)(v18 + 104) = v24 + v23;
              }
            }
            if ( (*(_BYTE *)(v18 + 72) & 2) != 0 && *(_QWORD *)(v18 + 88) )
            {
              if ( *(_QWORD *)(v18 + 80) )
              {
                PsReturnProcessPagedPoolQuota(*(_QWORD *)(v18 + 120), *(unsigned int *)(v18 + 100));
                ExFreePoolWithTag(*(PVOID *)(v18 + 80), 0);
              }
              *(_QWORD *)(v18 + 88) = 0LL;
              *(_QWORD *)(v18 + 80) = 0LL;
              *(_QWORD *)(v18 + 104) = 0LL;
              *(_DWORD *)(v18 + 100) = 0;
            }
            v9 = a4;
          }
        }
        v35 = *(_WORD *)(v18 + 72);
        if ( a6 == 4 )
        {
          *(_WORD *)(v18 + 72) = v35 | 8;
        }
        else
        {
          *(_WORD *)(v18 + 72) = v35 & 0xFFF7;
          if ( *(_QWORD *)(v18 + 48) != v18 + 48 )
            FsRtlNotifyCompleteIrpList(v18, 0);
        }
      }
    }
    v10 = a3;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    v36 = *a1;
    *(_QWORD *)(v36 + 8) = 0LL;
    v37 = _InterlockedCompareExchange((volatile signed __int32 *)v36, 1, 0);
    if ( v37 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v36, v37);
    KeAbPostRelease(v36);
  }
}
