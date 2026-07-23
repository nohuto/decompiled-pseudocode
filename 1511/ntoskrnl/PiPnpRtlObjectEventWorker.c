/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x14045A4D8
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x14045A4B0 (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x14050DD30 (PiDqIrpPropertySet.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlLookupElementGenericTableAvl @ 0x14008FDF0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x14043DEF0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043EFE4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043F934 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140440E78 (PiPnpRtlObjectEventDispatch.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1404E04AC (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140607388 (PiDqObjectManagerMakeInconsistent.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(wchar_t *a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  int PWSTR; // r14d
  void *v10; // rdx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  __int128 *v15; // rax
  const wchar_t *v16; // rdi
  __int128 v17; // xmm0
  unsigned int v18; // r12d
  int v19; // eax
  char *v20; // rcx
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  const wchar_t *v25; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v27; // rbx
  _RTL_AVL_TABLE *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  char v31; // si
  signed __int64 *v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  signed __int64 v35; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rdi
  __int64 *v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rbx
  void **v41; // rcx
  char *v42; // rbx
  char *v43; // rbx
  char *v44; // rax
  char **v45; // rcx
  char *v46; // rbx
  char *v47; // rbx
  char *v48; // rax
  char **v49; // rcx
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v52[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v54; // [rsp+48h] [rbp-28h]
  __int128 v55; // [rsp+58h] [rbp-18h] BYREF

  if ( (int)a2 < 6 )
  {
    P = 0LL;
    Src = 0LL;
    if ( a3 == 1 )
    {
LABEL_68:
      ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(a2);
      if ( ObjectManagerForPnpObjectType )
        PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
      goto LABEL_21;
    }
    if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) < 0
      || (PiPnpRtlDisableRemoveOperationDispatch(),
          PWSTR = PiPnpRtlObjectEventCreate(a1, a2, (__int64)P, &Src),
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock),
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread()),
          PWSTR < 0) )
    {
      v10 = Src;
LABEL_62:
      if ( v10 )
      {
        PiPnpRtlDisableRemoveOperationDispatch();
        if ( !*((_QWORD *)Src + 7) )
        {
          v46 = (char *)P;
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
          v47 = v46 + 128;
          v48 = (char *)Src + 56;
          v49 = (char **)*((_QWORD *)v47 + 1);
          *((_QWORD *)Src + 7) = v47;
          *((_QWORD *)v48 + 1) = v49;
          if ( *v49 != v47 )
            __fastfail(3u);
          *v49 = v48;
          *((_QWORD *)v47 + 1) = v48;
        }
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      goto LABEL_68;
    }
    v10 = Src;
    if ( Src )
    {
      v11 = a3 - 2;
      if ( !v11 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_19;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        if ( !(_DWORD)v13 )
        {
          PiDmObjectProcessPropertyChange(
            a2,
            (_DWORD)a1,
            *((_QWORD *)Src + 1),
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            (__int64)v52);
          if ( v52[0] )
          {
LABEL_19:
            v10 = Src;
            goto LABEL_20;
          }
          PiPnpRtlDisableRemoveOperationDispatch();
          v14 = Src;
          if ( !*((_QWORD *)Src + 7) )
          {
            v15 = *(__int128 **)(a4 + 16);
            v16 = *(const wchar_t **)(a4 + 8);
            v17 = *v15;
            v18 = *((_DWORD *)v15 + 4);
            *(_QWORD *)&v55 = __PAIR64__(a5, v18);
            v54 = v17;
            *((_QWORD *)&v55 + 1) = v16;
            if ( *((_DWORD *)Src + 19) )
            {
              do
              {
                if ( v18 == v14[8 * v13 + 24] )
                {
                  v23 = 8LL * (unsigned int)v13;
                  v24 = v54 - *(_QWORD *)&v14[v23 + 20];
                  if ( (_QWORD)v54 == *(_QWORD *)&v14[v23 + 20] )
                    v24 = *((_QWORD *)&v54 + 1) - *(_QWORD *)&v14[v23 + 22];
                  if ( !v24 && a5 == v14[v23 + 25] )
                  {
                    v25 = *(const wchar_t **)&v14[v23 + 26];
                    if ( v16 == v25 )
                      goto LABEL_18;
                    if ( v16 && v25 )
                    {
                      if ( !wcsicmp(v16, v25) )
                        goto LABEL_18;
                      v14 = Src;
                    }
                  }
                }
                v13 = (unsigned int)(v13 + 1);
              }
              while ( (unsigned int)v13 < v14[19] );
            }
            if ( a5 == 1 )
            {
              v29 = v14[1];
              if ( (v29 & 4) == 0 )
              {
                v14[1] = v29 | 4;
                SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                v14 = Src;
              }
            }
            v19 = v14[18];
            if ( v14[19] != v19 )
              goto LABEL_16;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v19) + 80, 0x41706E50u);
            v27 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
              v28 = (_RTL_AVL_TABLE *)((char *)P + 24);
              v27[18] *= 2;
              *(_QWORD *)RtlLookupElementGenericTableAvl(v28, &Src) = v27;
              ExFreePoolWithTag(Src, 0x41706E50u);
              Src = v27;
LABEL_16:
              PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v55 + 1);
              if ( PWSTR >= 0 )
              {
                v20 = (char *)Src;
                v21 = v55;
                v22 = 32LL * *((unsigned int *)Src + 19);
                *(_OWORD *)((char *)Src + v22 + 80) = v54;
                *(_OWORD *)&v20[v22 + 96] = v21;
                ++*((_DWORD *)Src + 19);
              }
              goto LABEL_18;
            }
            PWSTR = -1073741670;
          }
LABEL_18:
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_19;
        }
        if ( (_DWORD)v13 == 1 )
        {
          *((_DWORD *)Src + 1) |= 8u;
          goto LABEL_19;
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        PiDmObjectAcquireExclusiveLock(*((_QWORD *)Src + 1));
        v30 = *((_QWORD *)Src + 1);
        v31 = *(_DWORD *)(v30 + 32) & 1;
        *(_DWORD *)(v30 + 32) &= ~1u;
        v32 = (signed __int64 *)*((_QWORD *)Src + 1);
        _m_prefetchw(v32);
        v33 = *v32;
        if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v34 = 0LL;
        else
          v34 = v33 - 16;
        if ( (v33 & 2) != 0 || (v35 = *v32, v35 != _InterlockedCompareExchange64(v32, v34, v33)) )
          ExfReleasePushLock(v32);
        KeAbPostRelease((ULONG_PTR)v32);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( v31 )
          PiDmRemoveCacheReferenceForObject(a2, a1);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v38 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v38 )
            {
              v39 = *v38;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v38);
              v40 = (_QWORD *)(v39 + 56);
              v41 = (void **)i[17];
              *v40 = i + 16;
              v40[1] = v41;
              if ( *v41 != i + 16 )
                __fastfail(3u);
              *v41 = v40;
              i[17] = (__int64)v40;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        PiPnpRtlObjectEventDispatch((__int64)Src);
        v42 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v43 = v42 + 128;
        v44 = (char *)Src + 56;
        v45 = (char **)*((_QWORD *)v43 + 1);
        *((_QWORD *)Src + 7) = v43;
        *((_QWORD *)v44 + 1) = v45;
        if ( *v45 != v43 )
          __fastfail(3u);
        *v45 = v44;
        *((_QWORD *)v43 + 1) = v44;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v10 = 0LL;
        Src = 0LL;
      }
    }
LABEL_20:
    if ( PWSTR >= 0 )
    {
LABEL_21:
      if ( P )
        PiPnpRtlEndOperation((char *)P);
      return;
    }
    goto LABEL_62;
  }
}
