/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1404DFCE4
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x1404DFCBC (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x14043ABD4 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043B180 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventDispatch @ 0x14043C09C (PiPnpRtlObjectEventDispatch.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140542C18 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1406820AC (PiDqObjectManagerMakeInconsistent.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(wchar_t *a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  int PWSTR; // r15d
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v11; // cx
  void *v12; // rcx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rbx
  _DWORD *v16; // rcx
  __int128 *v17; // rax
  const wchar_t *v18; // rdi
  __int128 v19; // xmm0
  unsigned int v20; // r12d
  int v21; // eax
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // r8
  const wchar_t *v29; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v31; // rbx
  _RTL_AVL_TABLE *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // si
  signed __int64 *v37; // rbx
  signed __int64 v38; // rax
  signed __int64 v39; // rcx
  signed __int64 v40; // rtt
  struct _KTHREAD *v41; // rcx
  __int16 v42; // ax
  struct _KTHREAD *v43; // rax
  __int64 *i; // rdi
  __int64 *v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rbx
  void **v48; // rcx
  struct _KTHREAD *v49; // rcx
  __int16 v50; // ax
  char *v51; // rbx
  char *v52; // rbx
  char *v53; // rax
  char **v54; // rcx
  struct _KTHREAD *v55; // rcx
  __int16 v56; // ax
  char *v57; // rbx
  char *v58; // rbx
  char *v59; // rax
  char **v60; // rcx
  struct _KTHREAD *v61; // rdx
  __int16 v62; // ax
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v65[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v67; // [rsp+48h] [rbp-28h]
  __int128 v68; // [rsp+58h] [rbp-18h] BYREF

  if ( (int)a2 < 6 )
  {
    P = 0LL;
    Src = 0LL;
    if ( a3 == 1 )
    {
LABEL_91:
      ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(a2);
      if ( ObjectManagerForPnpObjectType )
        PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
      goto LABEL_22;
    }
    if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) < 0 )
      goto LABEL_81;
    PiPnpRtlDisableRemoveOperationDispatch();
    PWSTR = PiPnpRtlObjectEventCreate(a1, a2, (__int64)P, &Src);
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    CurrentThread = KeGetCurrentThread();
    v11 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( PWSTR < 0 )
    {
LABEL_81:
      v12 = Src;
LABEL_82:
      if ( v12 )
      {
        PiPnpRtlDisableRemoveOperationDispatch();
        if ( !*((_QWORD *)Src + 7) )
        {
          v57 = (char *)P;
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
          v58 = v57 + 128;
          v59 = (char *)Src + 56;
          v60 = (char **)*((_QWORD *)v58 + 1);
          *((_QWORD *)Src + 7) = v58;
          *((_QWORD *)v59 + 1) = v60;
          if ( *v60 != v58 )
            __fastfail(3u);
          *v60 = v59;
          *((_QWORD *)v58 + 1) = v59;
        }
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        v61 = KeGetCurrentThread();
        v62 = v61->KernelApcDisable + 1;
        v61->KernelApcDisable = v62;
        if ( !v62
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v61->ApcState.ApcListHead[0].Flink != &v61->152
          && !v61->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      goto LABEL_91;
    }
    v12 = Src;
    if ( Src )
    {
      v13 = a3 - 2;
      if ( !v13 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_20;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = (unsigned int)(v14 - 1);
        if ( !(_DWORD)v15 )
        {
          PiDmObjectProcessPropertyChange(
            a2,
            (_DWORD)a1,
            *((_QWORD *)Src + 1),
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            (__int64)v65);
          if ( !v65[0] )
          {
            PiPnpRtlDisableRemoveOperationDispatch();
            v16 = Src;
            if ( !*((_QWORD *)Src + 7) )
            {
              v17 = *(__int128 **)(a4 + 16);
              v18 = *(const wchar_t **)(a4 + 8);
              v19 = *v17;
              v20 = *((_DWORD *)v17 + 4);
              *(_QWORD *)&v68 = __PAIR64__(a5, v20);
              v67 = v19;
              *((_QWORD *)&v68 + 1) = v18;
              if ( *((_DWORD *)Src + 19) )
              {
                do
                {
                  if ( v20 == v16[8 * v15 + 24] )
                  {
                    v27 = 8LL * (unsigned int)v15;
                    v28 = v67 - *(_QWORD *)&v16[v27 + 20];
                    if ( (_QWORD)v67 == *(_QWORD *)&v16[v27 + 20] )
                      v28 = *((_QWORD *)&v67 + 1) - *(_QWORD *)&v16[v27 + 22];
                    if ( !v28 && a5 == v16[v27 + 25] )
                    {
                      v29 = *(const wchar_t **)&v16[v27 + 26];
                      if ( v18 == v29 )
                        goto LABEL_19;
                      if ( v18 && v29 )
                      {
                        if ( !wcsicmp(v18, v29) )
                          goto LABEL_19;
                        v16 = Src;
                      }
                    }
                  }
                  v15 = (unsigned int)(v15 + 1);
                }
                while ( (unsigned int)v15 < v16[19] );
              }
              if ( a5 == 1 )
              {
                v33 = v16[1];
                if ( (v33 & 4) == 0 )
                {
                  v16[1] = v33 | 4;
                  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                  v16 = Src;
                }
              }
              v21 = v16[18];
              if ( v16[19] != v21 )
                goto LABEL_17;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v21) + 80, 0x41706E50u);
              v31 = PoolWithTag;
              if ( PoolWithTag )
              {
                memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
                v32 = (_RTL_AVL_TABLE *)((char *)P + 24);
                v31[18] *= 2;
                *(_QWORD *)RtlLookupElementGenericTableAvl(v32, &Src) = v31;
                ExFreePoolWithTag(Src, 0x41706E50u);
                Src = v31;
LABEL_17:
                PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v68 + 1);
                if ( PWSTR >= 0 )
                {
                  v22 = (char *)Src;
                  v23 = v68;
                  v24 = 32LL * *((unsigned int *)Src + 19);
                  *(_OWORD *)((char *)Src + v24 + 80) = v67;
                  *(_OWORD *)&v22[v24 + 96] = v23;
                  ++*((_DWORD *)Src + 19);
                }
                goto LABEL_19;
              }
              PWSTR = -1073741670;
            }
LABEL_19:
            ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
            v25 = KeGetCurrentThread();
            v26 = v25->KernelApcDisable + 1;
            v25->KernelApcDisable = v26;
            if ( !v26
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
              && !v25->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
LABEL_20:
          v12 = Src;
          goto LABEL_21;
        }
        if ( (_DWORD)v15 == 1 )
        {
          *((_DWORD *)Src + 1) |= 8u;
          goto LABEL_20;
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        PiDmObjectAcquireExclusiveLock(*((_QWORD *)Src + 1));
        v35 = *((_QWORD *)Src + 1);
        v36 = *(_DWORD *)(v35 + 32) & 1;
        *(_DWORD *)(v35 + 32) &= ~1u;
        v37 = (signed __int64 *)*((_QWORD *)Src + 1);
        _m_prefetchw(v37);
        v38 = *v37;
        v39 = *v37 - 16;
        if ( (*v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v39 = 0LL;
        if ( (v38 & 2) != 0 || (v40 = *v37, v40 != _InterlockedCompareExchange64(v37, v39, v38)) )
          ExfReleasePushLock(v37, v34);
        KeAbPostRelease((ULONG_PTR)v37);
        v41 = KeGetCurrentThread();
        v42 = v41->KernelApcDisable + 1;
        v41->KernelApcDisable = v42;
        if ( !v42
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
          && !v41->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( v36 )
          PiDmRemoveCacheReferenceForObject(a2, a1);
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v45 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v45 )
            {
              v46 = *v45;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v45);
              v47 = (_QWORD *)(v46 + 56);
              v48 = (void **)i[17];
              *v47 = i + 16;
              v47[1] = v48;
              if ( *v48 != i + 16 )
                __fastfail(3u);
              *v48 = v47;
              i[17] = (__int64)v47;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        v49 = KeGetCurrentThread();
        v50 = v49->KernelApcDisable + 1;
        v49->KernelApcDisable = v50;
        if ( !v50
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
          && !v49->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        PiPnpRtlObjectEventDispatch((__int64)Src);
        v51 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v52 = v51 + 128;
        v53 = (char *)Src + 56;
        v54 = (char **)*((_QWORD *)v52 + 1);
        *((_QWORD *)Src + 7) = v52;
        *((_QWORD *)v53 + 1) = v54;
        if ( *v54 != v52 )
          __fastfail(3u);
        *v54 = v53;
        *((_QWORD *)v52 + 1) = v53;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        v55 = KeGetCurrentThread();
        v56 = v55->KernelApcDisable + 1;
        v55->KernelApcDisable = v56;
        if ( !v56
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v55->ApcState.ApcListHead[0].Flink != &v55->152
          && !v55->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v12 = 0LL;
        Src = 0LL;
      }
    }
LABEL_21:
    if ( PWSTR >= 0 )
    {
LABEL_22:
      if ( P )
        PiPnpRtlEndOperation((char *)P);
      return;
    }
    goto LABEL_82;
  }
}
