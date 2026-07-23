/*
 * XREFs of NtMapCMFModule @ 0x1404B3BEC
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A4198 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     MUIInitializeResourceLock @ 0x1404B42FC (MUIInitializeResourceLock.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     CMFRegisterEventTime @ 0x14057E32C (CMFRegisterEventTime.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     CMFUnmapModules @ 0x1406B9D4C (CMFUnmapModules.c)
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
  NTSTATUS v10; // edx
  unsigned int v11; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  ULONG v14; // ebx
  unsigned int v15; // r15d
  int v16; // ebx
  bool v17; // r13
  PVOID *v18; // r12
  char *v19; // rdx
  PVOID PoolWithTag; // rax
  signed __int64 v21; // rbx
  NTSTATUS v22; // eax
  signed __int64 v23; // rsi
  signed __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG v29; // ebx
  struct _KTHREAD *v30; // rax
  __int64 v31; // r8
  int v32; // eax
  PVOID v33; // rcx
  unsigned int v34; // esi
  unsigned int v35; // eax
  _DWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  NTSTATUS v44; // [rsp+50h] [rbp-118h]
  char PreviousMode; // [rsp+55h] [rbp-113h]
  int v47; // [rsp+60h] [rbp-108h]
  PVOID P; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-F8h]
  unsigned int v50; // [rsp+74h] [rbp-F4h]
  PULONG v51; // [rsp+78h] [rbp-F0h]
  unsigned int v52; // [rsp+80h] [rbp-E8h]
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+90h] [rbp-D8h] BYREF
  __int64 *v55; // [rsp+98h] [rbp-D0h]
  int v56; // [rsp+A0h] [rbp-C8h]
  HANDLE ThreadHandle; // [rsp+A8h] [rbp-C0h] BYREF
  _DWORD StartContext[3]; // [rsp+B0h] [rbp-B8h] BYREF
  bool v59; // [rsp+BCh] [rbp-ACh]
  struct _KEVENT *p_Event; // [rsp+C0h] [rbp-A8h]
  unsigned int v61; // [rsp+C8h] [rbp-A0h]
  ULONG v62; // [rsp+CCh] [rbp-9Ch]
  unsigned int v63; // [rsp+D0h] [rbp-98h]
  NTSTATUS v64; // [rsp+D4h] [rbp-94h]
  PVOID *v65; // [rsp+D8h] [rbp-90h]
  int v66; // [rsp+E0h] [rbp-88h]
  struct _KEVENT Event; // [rsp+F0h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-60h] BYREF
  int v71; // [rsp+170h] [rbp+8h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v51 = CacheIndexOut;
  v8 = Index;
  P = 0LL;
  ViewSize = 0LL;
  v47 = 0;
  v50 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v10 = -1073741823;
LABEL_81:
    v44 = v10;
    goto LABEL_76;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_82;
  v10 = MUIInitializeResourceLock(&CMFLock);
  v44 = v10;
  v11 = -1073741824;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_76;
  if ( (What & 0x20000) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(CMFLock, 1u);
    if ( !CMFFlagsCache )
    {
      v14 = What | 1;
      goto LABEL_8;
    }
    if ( (CMFFlagsCache & 0xF) != 0 )
      v14 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
    else
      v14 = What | 1;
    if ( (CMFFlagsCache & 0x100000) != 0 )
    {
      if ( (v14 & 0x10000) == 0 )
      {
        v44 = -1073741672;
        goto LABEL_75;
      }
      v14 |= 0x100000u;
    }
    else
    {
      if ( (CMFFlagsCache & 0x80000) == 0 )
      {
        v11 = -1073741824;
        if ( (CMFFlagsCache & 0x40000) != 0 )
          v14 |= 0x40000u;
LABEL_8:
        v15 = v14 & 0xFFFFFECF;
        v50 = v15;
        v16 = v14 & 0x130;
        v71 = v16;
        if ( (v15 & 0x40) != 0 )
        {
          v52 = 4;
        }
        else
        {
          v52 = 2;
          v11 = 0x80000000;
        }
        v49 = v11;
        v47 = 10000;
        switch ( v16 )
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
            v17 = (v15 & 2) != 0;
            v18 = &CMFDirectorySectionPointer;
            goto LABEL_46;
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
                  v44 = -1073741801;
                  goto LABEL_16;
                }
                memset(PoolWithTag, 0, 0xF0uLL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSegmentSectionPointer, v21, 0LL) )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v16 = v71;
                v15 = v50;
                v11 = v49;
                v19 = (char *)CMFSegmentSectionPointer;
              }
              v17 = (v15 & 4) != 0;
              v18 = (PVOID *)&v19[8 * v8];
LABEL_46:
              v55 = (__int64 *)v18;
              goto LABEL_50;
            }
            break;
          case 256:
            v47 = CMFCacheIndex;
            v17 = (v15 & 8) != 0;
            v18 = &CMFHitsSectionPointer;
            v55 = (__int64 *)&CMFHitsSectionPointer;
            if ( !CMFHitsSectionPointer )
            {
              CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
              v15 = v50;
              v11 = v49;
              v18 = (PVOID *)v55;
            }
LABEL_50:
            v56 = 0x8000000;
            if ( !*v18 )
            {
              ExReleaseResourceLite(CMFLock);
              ExAcquireResourceExclusiveLite(CMFLock, 1u);
              if ( ((v15 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
              {
LABEL_53:
                v44 = -1073741823;
                goto LABEL_74;
              }
              if ( !*v18 )
              {
                StartContext[0] = 0x8000000;
                StartContext[1] = v47;
                StartContext[2] = v11;
                v59 = v17;
                v61 = v15;
                v62 = Index;
                v63 = v52;
                v65 = v18;
                v66 = v16;
                KeInitializeEvent(&Event, SynchronizationEvent, 0);
                p_Event = &Event;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 512;
                ObjectAttributes.ObjectName = 0LL;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v44 = PsCreateSystemThread(
                        &ThreadHandle,
                        0x1FFFFFu,
                        &ObjectAttributes,
                        0LL,
                        0LL,
                        CMFSystemThreadRoutine,
                        StartContext);
                if ( (v44 & 0xC0000000) == 0xC0000000 )
                  goto LABEL_74;
                ZwClose(ThreadHandle);
                v22 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                v44 = v22;
                if ( v22 )
                {
                  if ( v22 < 0 )
                    goto LABEL_74;
                  goto LABEL_53;
                }
                v50 = v61;
                v44 = v64;
                if ( (v64 & 0xC0000000) == 0xC0000000 )
                  goto LABEL_74;
                if ( v16 == 16 )
                  CMFRegisterEventTime(2LL);
              }
              ExConvertExclusiveToSharedLite(CMFLock);
            }
            P = 0LL;
            ViewSize = 0LL;
            v54 = 0LL;
            if ( BaseAddress )
            {
              if ( v16 == 256
                || (LOBYTE(v13) = PreviousMode, v44 = CMFCheckAccess(*v18, v11, v13), (v44 & 0xC0000000) != 0xC0000000) )
              {
                v44 = MmMapViewOfSection(
                        *v55,
                        KeGetCurrentThread()->ApcState.Process,
                        &P,
                        0LL,
                        0LL,
                        &v54,
                        &ViewSize,
                        1,
                        0x400000u,
                        v52);
                if ( (v44 & 0xC0000000) == 0xC0000000 )
                {
                  P = 0LL;
                }
                else if ( v71 == 256 )
                {
                  v23 = CMFHitsLastFlushTime;
                  v24 = MEMORY[0xFFFFF78000000014];
                  if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL )
                  {
                    if ( v23 == _InterlockedCompareExchange64(
                                  &CMFHitsLastFlushTime,
                                  MEMORY[0xFFFFF78000000014],
                                  CMFHitsLastFlushTime)
                      && (int)CMFFlushHitsFile(P, ViewSize) < 0 )
                    {
                      _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v23, v24);
                    }
                    goto LABEL_74;
                  }
                }
              }
              v6 = CacheFlagsOut;
              v7 = v51;
              goto LABEL_75;
            }
LABEL_74:
            v7 = v51;
            goto LABEL_16;
        }
        v44 = -1073741811;
LABEL_16:
        v6 = CacheFlagsOut;
LABEL_75:
        ExReleaseResourceLite(CMFLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
        v10 = v44;
        if ( (v44 & 0xC0000000) == 0xC0000000 )
          goto LABEL_76;
        if ( BaseAddress )
        {
          v40 = (__int64)BaseAddress;
          if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
            v40 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v40 = *(_QWORD *)v40;
          *BaseAddress = P;
          P = 0LL;
        }
        if ( ViewSizeOut )
        {
          v41 = (__int64)ViewSizeOut;
          if ( (unsigned __int64)ViewSizeOut >= 0x7FFFFFFF0000LL )
            v41 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v41 = *(_DWORD *)v41;
          *ViewSizeOut = ViewSize;
        }
        if ( v7 )
        {
          v42 = (__int64)v7;
          if ( (unsigned __int64)v7 >= 0x7FFFFFFF0000LL )
            v42 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v42 = *(_DWORD *)v42;
          *v7 = v47;
        }
        if ( v6 )
        {
          v43 = (__int64)v6;
          if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
            v43 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v43 = *(_DWORD *)v43;
          *v6 = v50;
        }
        goto LABEL_80;
      }
      if ( (v14 & 0x130) == 0x20 && (v14 & 0x10000) == 0 )
      {
        v44 = -1073741672;
        goto LABEL_16;
      }
      v14 |= 0x80000u;
    }
    v11 = -1073741824;
    goto LABEL_8;
  }
  if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
  {
LABEL_82:
    v10 = -1073741811;
    goto LABEL_81;
  }
  v29 = What & 0x1C0000;
  if ( v29 == (CMFFlagsCache & 0x1C0000) )
  {
LABEL_80:
    v10 = 0;
    goto LABEL_81;
  }
  v30 = KeGetCurrentThread();
  --v30->KernelApcDisable;
  ExAcquireResourceExclusiveLite(CMFLock, 1u);
  v32 = CMFFlagsCache;
  if ( v29 == (CMFFlagsCache & 0x1C0000) )
    goto LABEL_104;
  v33 = CMFDirectorySectionPointer;
  if ( !CMFDirectorySectionPointer )
  {
LABEL_95:
    v35 = v29 | v32 & 0xFFE3FFFF;
    CMFFlagsCache = v35;
    if ( v33 && ((v35 & 0x80000) != 0 || (v35 & 0x100000) != 0) )
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
LABEL_104:
    v44 = 0;
    goto LABEL_105;
  }
  if ( v29 )
  {
    if ( CMFDirectorySectionPointer )
    {
      v34 = 0x80000000;
      v49 = 0x80000000;
      if ( (CMFFlagsCache & 0x1C0000) != 0 )
        v34 = -1073741824;
      v49 = v34;
      LOBYTE(v31) = PreviousMode;
      v44 = CMFCheckAccess(CMFDirectorySectionPointer, v34, v31);
      if ( (v44 & 0xC0000000) == 0xC0000000 )
        goto LABEL_105;
      v32 = CMFFlagsCache;
      v33 = CMFDirectorySectionPointer;
    }
    goto LABEL_95;
  }
  v44 = -1073741637;
LABEL_105:
  ExReleaseResourceLite(CMFLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v37, v38, v39);
  v10 = v44;
LABEL_76:
  if ( P )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (__int64)P, 0);
    return v44;
  }
  return v10;
}
