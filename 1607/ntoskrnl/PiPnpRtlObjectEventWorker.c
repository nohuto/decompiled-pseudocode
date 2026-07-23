/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1404E769C
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x1404E8304 (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1404C1988 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1404E2AC0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1404E4B54 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1404E4EE0 (PiPnpRtlObjectEventDispatch.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140631D30 (PiDqObjectManagerMakeInconsistent.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(wchar_t *a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  int PWSTR; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rbx
  _DWORD *v17; // rcx
  __int128 *v18; // rax
  const wchar_t *v19; // rdi
  __int128 v20; // xmm0
  unsigned int v21; // r12d
  int v22; // eax
  char *v23; // rcx
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  const wchar_t *v31; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v33; // rbx
  _RTL_AVL_TABLE *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  char v37; // si
  signed __int64 *v38; // rbx
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  signed __int64 v41; // rtt
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rdi
  __int64 *v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rbx
  void **v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char *v54; // rbx
  char *v55; // rbx
  char *v56; // rax
  char **v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  char *v61; // rbx
  char *v62; // rbx
  char *v63; // rax
  char **v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  struct _ERESOURCE *ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v70[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v72; // [rsp+48h] [rbp-28h]
  __int128 v73; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 < 6 )
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12),
          PWSTR < 0) )
    {
      v13 = Src;
LABEL_62:
      if ( v13 )
      {
        PiPnpRtlDisableRemoveOperationDispatch();
        if ( !*((_QWORD *)Src + 7) )
        {
          v61 = (char *)P;
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
          v62 = v61 + 128;
          v63 = (char *)Src + 56;
          v64 = (char **)*((_QWORD *)v62 + 1);
          if ( *v64 != v62 )
            __fastfail(3u);
          *(_QWORD *)v63 = v62;
          *((_QWORD *)v63 + 1) = v64;
          *v64 = v63;
          *((_QWORD *)v62 + 1) = v63;
        }
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v65, v66, v67);
      }
      goto LABEL_68;
    }
    v13 = Src;
    if ( Src )
    {
      v14 = a3 - 2;
      if ( !v14 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_19;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = (unsigned int)(v15 - 1);
        if ( !(_DWORD)v16 )
        {
          PiDmObjectProcessPropertyChange(
            a2,
            (_DWORD)a1,
            *((_QWORD *)Src + 1),
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            (__int64)v70);
          if ( v70[0] )
          {
LABEL_19:
            v13 = Src;
            goto LABEL_20;
          }
          PiPnpRtlDisableRemoveOperationDispatch();
          v17 = Src;
          if ( !*((_QWORD *)Src + 7) )
          {
            v18 = *(__int128 **)(a4 + 16);
            v19 = *(const wchar_t **)(a4 + 8);
            v20 = *v18;
            v21 = *((_DWORD *)v18 + 4);
            *(_QWORD *)&v73 = __PAIR64__(a5, v21);
            v72 = v20;
            *((_QWORD *)&v73 + 1) = v19;
            if ( *((_DWORD *)Src + 19) )
            {
              do
              {
                if ( v21 == v17[8 * v16 + 24] )
                {
                  v29 = 8LL * (unsigned int)v16;
                  v30 = v72 - *(_QWORD *)&v17[v29 + 20];
                  if ( (_QWORD)v72 == *(_QWORD *)&v17[v29 + 20] )
                    v30 = *((_QWORD *)&v72 + 1) - *(_QWORD *)&v17[v29 + 22];
                  if ( !v30 && a5 == v17[v29 + 25] )
                  {
                    v31 = *(const wchar_t **)&v17[v29 + 26];
                    if ( v19 == v31 )
                      goto LABEL_18;
                    if ( v19 && v31 )
                    {
                      if ( !wcsicmp(v19, v31) )
                        goto LABEL_18;
                      v17 = Src;
                    }
                  }
                }
                v16 = (unsigned int)(v16 + 1);
              }
              while ( (unsigned int)v16 < v17[19] );
            }
            if ( a5 == 1 )
            {
              v35 = v17[1];
              if ( (v35 & 4) == 0 )
              {
                v17[1] = v35 | 4;
                SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                v17 = Src;
              }
            }
            v22 = v17[18];
            if ( v17[19] != v22 )
              goto LABEL_16;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v22) + 80, 0x41706E50u);
            v33 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
              v34 = (_RTL_AVL_TABLE *)((char *)P + 24);
              v33[18] *= 2;
              *(_QWORD *)RtlLookupElementGenericTableAvl(v34, &Src) = v33;
              ExFreePoolWithTag(Src, 0x41706E50u);
              Src = v33;
LABEL_16:
              PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v73 + 1);
              if ( PWSTR >= 0 )
              {
                v23 = (char *)Src;
                v24 = v73;
                v25 = 32LL * *((unsigned int *)Src + 19);
                *(_OWORD *)((char *)Src + v25 + 80) = v72;
                *(_OWORD *)&v23[v25 + 96] = v24;
                ++*((_DWORD *)Src + 19);
              }
              goto LABEL_18;
            }
            PWSTR = -1073741670;
          }
LABEL_18:
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
          goto LABEL_19;
        }
        if ( (_DWORD)v16 == 1 )
        {
          *((_DWORD *)Src + 1) |= 8u;
          goto LABEL_19;
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        PiDmObjectAcquireExclusiveLock(*((_QWORD *)Src + 1));
        v36 = *((_QWORD *)Src + 1);
        v37 = *(_DWORD *)(v36 + 32) & 1;
        *(_DWORD *)(v36 + 32) &= ~1u;
        v38 = (signed __int64 *)*((_QWORD *)Src + 1);
        _m_prefetchw(v38);
        v39 = *v38;
        if ( (*v38 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v40 = 0LL;
        else
          v40 = v39 - 16;
        if ( (v39 & 2) != 0 || (v41 = *v38, v41 != _InterlockedCompareExchange64(v38, v40, v39)) )
          ExfReleasePushLock(v38);
        KeAbPostRelease((ULONG_PTR)v38);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v42, v43, v44);
        if ( v37 )
          PiDmRemoveCacheReferenceForObject((unsigned int)a2, a1);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v47 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v47 )
            {
              v48 = *v47;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v47);
              v49 = (_QWORD *)(v48 + 56);
              v50 = (void **)i[17];
              if ( *v50 != i + 16 )
                __fastfail(3u);
              *v49 = i + 16;
              v49[1] = v50;
              *v50 = v49;
              i[17] = (__int64)v49;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v51, v52, v53);
        PiPnpRtlObjectEventDispatch((__int64)Src);
        v54 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v55 = v54 + 128;
        v56 = (char *)Src + 56;
        v57 = (char **)*((_QWORD *)v55 + 1);
        if ( *v57 != v55 )
          __fastfail(3u);
        *((_QWORD *)Src + 8) = v57;
        *(_QWORD *)v56 = v55;
        *v57 = v56;
        *((_QWORD *)v55 + 1) = v56;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v58, v59, v60);
        v13 = 0LL;
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
