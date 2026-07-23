/*
 * XREFs of NtMapCMFModule @ 0x14053AB00
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     MmMapViewInSystemSpace @ 0x14051B270 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 *     CMFRegisterEventTime @ 0x1405C0698 (CMFRegisterEventTime.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFUnmapModules @ 0x1406FB9A4 (CMFUnmapModules.c)
 */

NTSTATUS __cdecl NtMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  PULONG v6; // r15
  PULONG v7; // r13
  __int64 v8; // r12
  unsigned int v10; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  ULONG v13; // ebx
  unsigned int v14; // r15d
  int v15; // ebx
  char v16; // cl
  bool v17; // r13
  PVOID *v18; // r12
  char *v19; // rdx
  PVOID PoolWithTag; // rax
  signed __int64 v21; // rbx
  bool v22; // cl
  NTSTATUS v23; // eax
  signed __int64 v24; // rsi
  signed __int64 v25; // rbx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  ULONG v29; // ebx
  struct _KTHREAD *v30; // rax
  __int64 v31; // r8
  int v32; // eax
  PVOID v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // esi
  _DWORD *v36; // rcx
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  _QWORD *v39; // rcx
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  NTSTATUS v43; // [rsp+50h] [rbp-118h]
  char PreviousMode; // [rsp+55h] [rbp-113h]
  PVOID P; // [rsp+60h] [rbp-108h] BYREF
  int v47; // [rsp+68h] [rbp-100h]
  unsigned int v48; // [rsp+6Ch] [rbp-FCh]
  unsigned int v49; // [rsp+70h] [rbp-F8h]
  PULONG v50; // [rsp+78h] [rbp-F0h]
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-E8h] BYREF
  int v52; // [rsp+88h] [rbp-E0h]
  __int64 v53; // [rsp+90h] [rbp-D8h] BYREF
  PVOID *v54; // [rsp+98h] [rbp-D0h]
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-C8h] BYREF
  _DWORD StartContext[3]; // [rsp+A8h] [rbp-C0h] BYREF
  bool v57; // [rsp+B4h] [rbp-B4h]
  struct _KEVENT *p_Event; // [rsp+B8h] [rbp-B0h]
  unsigned int v59; // [rsp+C0h] [rbp-A8h]
  ULONG v60; // [rsp+C4h] [rbp-A4h]
  int v61; // [rsp+C8h] [rbp-A0h]
  NTSTATUS v62; // [rsp+CCh] [rbp-9Ch]
  PVOID *v63; // [rsp+D0h] [rbp-98h]
  int v64; // [rsp+D8h] [rbp-90h]
  int v65; // [rsp+E0h] [rbp-88h]
  struct _KEVENT Event; // [rsp+E8h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-68h] BYREF
  int v70; // [rsp+170h] [rbp+8h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v50 = CacheIndexOut;
  v8 = Index;
  P = 0LL;
  ViewSize = 0LL;
  v47 = 0;
  v49 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v43 = -1073741823;
    goto LABEL_80;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_85;
  v43 = MUIInitializeResourceLock(&CMFLock);
  v10 = -1073741824;
  if ( (v43 & 0xC0000000) == 0xC0000000 )
    goto LABEL_80;
  if ( (What & 0x20000) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(CMFLock, 1u);
    if ( !CMFFlagsCache )
    {
      v13 = What | 1;
      goto LABEL_8;
    }
    if ( (CMFFlagsCache & 0xF) != 0 )
      v13 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
    else
      v13 = What | 1;
    if ( (CMFFlagsCache & 0x100000) != 0 )
    {
      if ( (v13 & 0x10000) == 0 )
      {
        v43 = -1073741672;
        goto LABEL_77;
      }
      v13 |= 0x100000u;
    }
    else
    {
      if ( (CMFFlagsCache & 0x80000) == 0 )
      {
        v10 = -1073741824;
        if ( (CMFFlagsCache & 0x40000) != 0 )
          v13 |= 0x40000u;
LABEL_8:
        v14 = v13 & 0xFFFFFECF;
        v49 = v14;
        v15 = v13 & 0x130;
        v70 = v15;
        if ( (v14 & 0x40) != 0 )
        {
          v52 = 4;
        }
        else
        {
          v52 = 2;
          v10 = 0x80000000;
        }
        v48 = v10;
        v47 = 10000;
        v16 = 0;
        switch ( v15 )
        {
          case 16:
            if ( (unsigned int)CMFCacheIndex < 0x2710 )
            {
              v47 = CMFCacheIndex;
            }
            else
            {
              if ( (unsigned int)v8 >= 0x2710 )
              {
                if ( CMFFirstAccess )
                {
                  CMFRegisterEventTime(1LL);
                  CMFFirstAccess = 0;
                }
                break;
              }
              v47 = v8;
            }
            v17 = (v14 & 2) != 0;
            v18 = &CMFDirectorySectionPointer;
            goto LABEL_48;
          case 32:
            if ( (unsigned int)v8 < 0x1E && CMFCacheIndex != 10000 )
            {
              v47 = CMFCacheIndex;
              v19 = (char *)CMFSegmentSectionPointer;
              if ( !CMFSegmentSectionPointer )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
                v21 = (signed __int64)PoolWithTag;
                P = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v43 = -1073741801;
                  goto LABEL_16;
                }
                memset(PoolWithTag, 0, 0xF0uLL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSegmentSectionPointer, v21, 0LL) )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v15 = v70;
                v14 = v49;
                v10 = v48;
                v16 = 0;
                v19 = (char *)CMFSegmentSectionPointer;
              }
              if ( (v14 & 4) != 0 )
                v16 = 1;
              v17 = v16;
              v18 = (PVOID *)&v19[8 * v8];
LABEL_48:
              v54 = v18;
LABEL_52:
              v65 = 0x8000000;
              if ( !*v18 )
              {
                ExReleaseResourceLite(CMFLock);
                ExAcquireResourceExclusiveLite(CMFLock, 1u);
                if ( ((v14 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
                {
LABEL_55:
                  v43 = -1073741823;
LABEL_76:
                  v7 = v50;
                  goto LABEL_16;
                }
                if ( !*v18 )
                {
                  StartContext[0] = 0x8000000;
                  StartContext[1] = v47;
                  StartContext[2] = v10;
                  v57 = v17;
                  v59 = v14;
                  v60 = Index;
                  v61 = v52;
                  v63 = v18;
                  v64 = v15;
                  KeInitializeEvent(&Event, SynchronizationEvent, 0);
                  p_Event = &Event;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 512;
                  ObjectAttributes.ObjectName = 0LL;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v43 = PsCreateSystemThread(
                          &ThreadHandle,
                          0x1FFFFFu,
                          &ObjectAttributes,
                          0LL,
                          0LL,
                          CMFSystemThreadRoutine,
                          StartContext);
                  if ( (v43 & 0xC0000000) == 0xC0000000 )
                    goto LABEL_76;
                  ZwClose(ThreadHandle);
                  v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  v43 = v23;
                  if ( v23 )
                  {
                    if ( v23 < 0 )
                      goto LABEL_76;
                    goto LABEL_55;
                  }
                  v49 = v59;
                  v43 = v62;
                  if ( (v62 & 0xC0000000) == 0xC0000000 )
                    goto LABEL_76;
                  if ( v15 == 16 )
                    CMFRegisterEventTime(2LL);
                }
                ExConvertExclusiveToSharedLite(CMFLock);
              }
              P = 0LL;
              ViewSize = 0LL;
              v53 = 0LL;
              if ( !BaseAddress )
                goto LABEL_76;
              if ( v15 == 256
                || (LOBYTE(v12) = PreviousMode, v43 = CMFCheckAccess(*v18, v10, v12), (v43 & 0xC0000000) != 0xC0000000) )
              {
                v43 = MmMapViewOfSection(
                        (int)*v54,
                        (int)KeGetCurrentThread()->ApcState.Process,
                        (int)&P,
                        0,
                        0LL,
                        (__int64)&v53,
                        (__int64)&ViewSize,
                        1,
                        0x400000,
                        v52);
                if ( (v43 & 0xC0000000) == 0xC0000000 )
                {
                  P = 0LL;
                }
                else if ( v70 == 256 )
                {
                  v24 = CMFHitsLastFlushTime;
                  v25 = MEMORY[0xFFFFF78000000014];
                  if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL )
                  {
                    if ( v24 == _InterlockedCompareExchange64(
                                  &CMFHitsLastFlushTime,
                                  MEMORY[0xFFFFF78000000014],
                                  CMFHitsLastFlushTime)
                      && (int)CMFFlushHitsFile(P, ViewSize) < 0 )
                    {
                      _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v24, v25);
                    }
                    goto LABEL_76;
                  }
                }
              }
              v6 = CacheFlagsOut;
              v7 = v50;
LABEL_77:
              ExReleaseResourceLite(CMFLock);
              v26 = KeGetCurrentThread();
              v27 = v26->KernelApcDisable + 1;
              v26->KernelApcDisable = v27;
              if ( !v27
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
                && !v26->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              if ( (v43 & 0xC0000000) == 0xC0000000 )
                goto LABEL_80;
              if ( BaseAddress )
              {
                v39 = BaseAddress;
                if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
                  v39 = (_QWORD *)MmUserProbeAddress;
                *v39 = *v39;
                *BaseAddress = P;
                P = 0LL;
              }
              if ( ViewSizeOut )
              {
                v40 = ViewSizeOut;
                if ( (unsigned __int64)ViewSizeOut >= MmUserProbeAddress )
                  v40 = (_DWORD *)MmUserProbeAddress;
                *v40 = *v40;
                *ViewSizeOut = ViewSize;
              }
              if ( v7 )
              {
                v41 = v7;
                if ( (unsigned __int64)v7 >= MmUserProbeAddress )
                  v41 = (_DWORD *)MmUserProbeAddress;
                *v41 = *v41;
                *v7 = v47;
              }
              if ( v6 )
              {
                v42 = v6;
                if ( (unsigned __int64)v6 >= MmUserProbeAddress )
                  v42 = (_DWORD *)MmUserProbeAddress;
                *v42 = *v42;
                *v6 = v49;
              }
LABEL_110:
              v43 = 0;
              goto LABEL_80;
            }
            break;
          case 256:
            v47 = CMFCacheIndex;
            v22 = (v14 & 8) != 0;
            v17 = v22;
            v18 = &CMFHitsSectionPointer;
            v54 = &CMFHitsSectionPointer;
            if ( !CMFHitsSectionPointer )
            {
              CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
              v14 = v49;
              v10 = v48;
              v17 = v22;
              v18 = v54;
            }
            goto LABEL_52;
        }
        v43 = -1073741811;
LABEL_16:
        v6 = CacheFlagsOut;
        goto LABEL_77;
      }
      if ( (v13 & 0x130) == 0x20 && (v13 & 0x10000) == 0 )
      {
        v43 = -1073741672;
        goto LABEL_16;
      }
      v13 |= 0x80000u;
    }
    v10 = -1073741824;
    goto LABEL_8;
  }
  if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
  {
LABEL_85:
    v43 = -1073741811;
    goto LABEL_80;
  }
  v29 = What & 0x1C0000;
  if ( v29 == (CMFFlagsCache & 0x1C0000) )
    goto LABEL_110;
  v30 = KeGetCurrentThread();
  --v30->KernelApcDisable;
  ExAcquireResourceExclusiveLite(CMFLock, 1u);
  v32 = CMFFlagsCache;
  if ( v29 != (CMFFlagsCache & 0x1C0000) )
  {
    v33 = CMFDirectorySectionPointer;
    if ( CMFDirectorySectionPointer )
    {
      if ( !v29 )
      {
        v43 = -1073741637;
        goto LABEL_106;
      }
      if ( CMFDirectorySectionPointer )
      {
        v35 = 0x80000000;
        v48 = 0x80000000;
        if ( (CMFFlagsCache & 0x1C0000) != 0 )
          v35 = -1073741824;
        v48 = v35;
        LOBYTE(v31) = PreviousMode;
        v43 = CMFCheckAccess(CMFDirectorySectionPointer, v35, v31);
        if ( (v43 & 0xC0000000) == 0xC0000000 )
          goto LABEL_106;
        v32 = CMFFlagsCache;
        v33 = CMFDirectorySectionPointer;
      }
    }
    v34 = v29 | v32 & 0xFFE3FFFF;
    CMFFlagsCache = v34;
    if ( v33 && ((v34 & 0x80000) != 0 || (v34 & 0x100000) != 0) )
    {
      P = 0LL;
      ViewSize = 104LL;
      if ( MmMapViewInSystemSpace(v33, &P, &ViewSize) >= 0 )
      {
        v36 = P;
        if ( P )
        {
          if ( ViewSize >= 0x68 )
          {
            *((_DWORD *)P + 12) &= 0xFFE3FFFF;
            v36[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
          }
          MmUnmapViewInSystemSpace(v36);
          P = 0LL;
        }
      }
      CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
      CMFRegisterEventTime(4LL);
    }
  }
  v43 = 0;
LABEL_106:
  ExReleaseResourceLite(CMFLock);
  v37 = KeGetCurrentThread();
  v38 = v37->KernelApcDisable + 1;
  v37->KernelApcDisable = v38;
  if ( !v38
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_80:
  if ( P )
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (__int64)P, 0);
  return v43;
}
