/*
 * XREFs of NtMapCMFModule @ 0x1404AB19C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmMapViewInSystemSpace @ 0x1403B5C20 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     MUIInitializeResourceLock @ 0x1404ABA74 (MUIInitializeResourceLock.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     CMFRegisterEventTime @ 0x140549218 (CMFRegisterEventTime.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     CMFUnmapModules @ 0x1406771D4 (CMFUnmapModules.c)
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
  char v17; // cl
  bool v18; // r13
  PVOID *v19; // r12
  char *v20; // rdx
  PVOID PoolWithTag; // rax
  signed __int64 v22; // rbx
  bool v23; // cl
  NTSTATUS v24; // eax
  signed __int64 v25; // rsi
  signed __int64 v26; // rbx
  ULONG v28; // ebx
  struct _KTHREAD *v29; // rax
  __int64 v30; // r8
  int v31; // eax
  PVOID v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // esi
  _DWORD *v35; // rcx
  _QWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  NTSTATUS v40; // [rsp+50h] [rbp-118h]
  char PreviousMode; // [rsp+55h] [rbp-113h]
  PVOID P; // [rsp+60h] [rbp-108h] BYREF
  int v44; // [rsp+68h] [rbp-100h]
  unsigned int v45; // [rsp+6Ch] [rbp-FCh]
  unsigned int v46; // [rsp+70h] [rbp-F8h]
  PULONG v47; // [rsp+78h] [rbp-F0h]
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v49; // [rsp+88h] [rbp-E0h]
  __int64 v50; // [rsp+90h] [rbp-D8h] BYREF
  __int64 *v51; // [rsp+98h] [rbp-D0h]
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-C8h] BYREF
  _DWORD StartContext[3]; // [rsp+A8h] [rbp-C0h] BYREF
  bool v54; // [rsp+B4h] [rbp-B4h]
  struct _KEVENT *p_Event; // [rsp+B8h] [rbp-B0h]
  unsigned int v56; // [rsp+C0h] [rbp-A8h]
  ULONG v57; // [rsp+C4h] [rbp-A4h]
  unsigned int v58; // [rsp+C8h] [rbp-A0h]
  NTSTATUS v59; // [rsp+CCh] [rbp-9Ch]
  PVOID *v60; // [rsp+D0h] [rbp-98h]
  int v61; // [rsp+D8h] [rbp-90h]
  int v62; // [rsp+E0h] [rbp-88h]
  struct _KEVENT Event; // [rsp+E8h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-68h] BYREF
  int v67; // [rsp+170h] [rbp+8h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v47 = CacheIndexOut;
  v8 = Index;
  P = 0LL;
  ViewSize = 0LL;
  v44 = 0;
  v46 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v10 = -1073741823;
    goto LABEL_84;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_83;
  v10 = MUIInitializeResourceLock(&CMFLock);
  v40 = v10;
  v11 = -1073741824;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_78;
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
        v40 = -1073741672;
        goto LABEL_77;
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
        v46 = v15;
        v16 = v14 & 0x130;
        v67 = v16;
        if ( (v15 & 0x40) != 0 )
        {
          v49 = 4;
        }
        else
        {
          v49 = 2;
          v11 = 0x80000000;
        }
        v45 = v11;
        v44 = 10000;
        v17 = 0;
        switch ( v16 )
        {
          case 16:
            if ( (unsigned int)CMFCacheIndex < 0x2710 )
            {
              v44 = CMFCacheIndex;
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
              v44 = v8;
            }
            v18 = (v15 & 2) != 0;
            v19 = &CMFDirectorySectionPointer;
            goto LABEL_48;
          case 32:
            if ( (unsigned int)v8 < 0x1E && CMFCacheIndex != 10000 )
            {
              v44 = CMFCacheIndex;
              v20 = (char *)CMFSegmentSectionPointer;
              if ( !CMFSegmentSectionPointer )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
                v22 = (signed __int64)PoolWithTag;
                P = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v40 = -1073741801;
                  goto LABEL_16;
                }
                memset(PoolWithTag, 0, 0xF0uLL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSegmentSectionPointer, v22, 0LL) )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v16 = v67;
                v15 = v46;
                v11 = v45;
                v17 = 0;
                v20 = (char *)CMFSegmentSectionPointer;
              }
              if ( (v15 & 4) != 0 )
                v17 = 1;
              v18 = v17;
              v19 = (PVOID *)&v20[8 * v8];
LABEL_48:
              v51 = (__int64 *)v19;
              goto LABEL_52;
            }
            break;
          case 256:
            v44 = CMFCacheIndex;
            v23 = (v15 & 8) != 0;
            v18 = v23;
            v19 = &CMFHitsSectionPointer;
            v51 = (__int64 *)&CMFHitsSectionPointer;
            if ( !CMFHitsSectionPointer )
            {
              CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
              v15 = v46;
              v11 = v45;
              v18 = v23;
              v19 = (PVOID *)v51;
            }
LABEL_52:
            v62 = 0x8000000;
            if ( !*v19 )
            {
              ExReleaseResourceLite(CMFLock);
              ExAcquireResourceExclusiveLite(CMFLock, 1u);
              if ( ((v15 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
              {
LABEL_55:
                v40 = -1073741823;
                goto LABEL_76;
              }
              if ( !*v19 )
              {
                StartContext[0] = 0x8000000;
                StartContext[1] = v44;
                StartContext[2] = v11;
                v54 = v18;
                v56 = v15;
                v57 = Index;
                v58 = v49;
                v60 = v19;
                v61 = v16;
                KeInitializeEvent(&Event, SynchronizationEvent, 0);
                p_Event = &Event;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 512;
                ObjectAttributes.ObjectName = 0LL;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v40 = PsCreateSystemThread(
                        &ThreadHandle,
                        0x1FFFFFu,
                        &ObjectAttributes,
                        0LL,
                        0LL,
                        CMFSystemThreadRoutine,
                        StartContext);
                if ( (v40 & 0xC0000000) == 0xC0000000 )
                  goto LABEL_76;
                ZwClose(ThreadHandle);
                v24 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                v40 = v24;
                if ( v24 )
                {
                  if ( v24 < 0 )
                    goto LABEL_76;
                  goto LABEL_55;
                }
                v46 = v56;
                v40 = v59;
                if ( (v59 & 0xC0000000) == 0xC0000000 )
                  goto LABEL_76;
                if ( v16 == 16 )
                  CMFRegisterEventTime(2LL);
              }
              ExConvertExclusiveToSharedLite(CMFLock);
            }
            P = 0LL;
            ViewSize = 0LL;
            v50 = 0LL;
            if ( BaseAddress )
            {
              if ( v16 == 256
                || (LOBYTE(v13) = PreviousMode, v40 = CMFCheckAccess(*v19, v11, v13), (v40 & 0xC0000000) != 0xC0000000) )
              {
                v40 = MmMapViewOfSection(
                        *v51,
                        KeGetCurrentThread()->ApcState.Process,
                        &P,
                        0LL,
                        0LL,
                        &v50,
                        &ViewSize,
                        1,
                        0x400000u,
                        v49);
                if ( (v40 & 0xC0000000) == 0xC0000000 )
                {
                  P = 0LL;
                }
                else if ( v67 == 256 )
                {
                  v25 = CMFHitsLastFlushTime;
                  v26 = MEMORY[0xFFFFF78000000014];
                  if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL )
                  {
                    if ( v25 == _InterlockedCompareExchange64(
                                  &CMFHitsLastFlushTime,
                                  MEMORY[0xFFFFF78000000014],
                                  CMFHitsLastFlushTime)
                      && (int)CMFFlushHitsFile(P, ViewSize) < 0 )
                    {
                      _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v25, v26);
                    }
                    goto LABEL_76;
                  }
                }
              }
              v6 = CacheFlagsOut;
              v7 = v47;
              goto LABEL_77;
            }
LABEL_76:
            v7 = v47;
            goto LABEL_16;
        }
        v40 = -1073741811;
LABEL_16:
        v6 = CacheFlagsOut;
LABEL_77:
        ExReleaseResourceLite(CMFLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v10 = v40;
        if ( (v40 & 0xC0000000) == 0xC0000000 )
          goto LABEL_78;
        if ( BaseAddress )
        {
          v36 = BaseAddress;
          if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
            v36 = (_QWORD *)MmUserProbeAddress;
          *v36 = *v36;
          *BaseAddress = P;
          P = 0LL;
        }
        if ( ViewSizeOut )
        {
          v37 = ViewSizeOut;
          if ( (unsigned __int64)ViewSizeOut >= MmUserProbeAddress )
            v37 = (_DWORD *)MmUserProbeAddress;
          *v37 = *v37;
          *ViewSizeOut = ViewSize;
        }
        if ( v7 )
        {
          v38 = v7;
          if ( (unsigned __int64)v7 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = *v38;
          *v7 = v44;
        }
        if ( v6 )
        {
          v39 = v6;
          if ( (unsigned __int64)v6 >= MmUserProbeAddress )
            v39 = (_DWORD *)MmUserProbeAddress;
          *v39 = *v39;
          *v6 = v46;
        }
        goto LABEL_107;
      }
      if ( (v14 & 0x130) == 0x20 && (v14 & 0x10000) == 0 )
      {
        v40 = -1073741672;
        goto LABEL_16;
      }
      v14 |= 0x80000u;
    }
    v11 = -1073741824;
    goto LABEL_8;
  }
  if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
  {
LABEL_83:
    v10 = -1073741811;
LABEL_84:
    v40 = v10;
    goto LABEL_78;
  }
  v28 = What & 0x1C0000;
  if ( v28 == (CMFFlagsCache & 0x1C0000) )
  {
LABEL_107:
    v10 = 0;
    goto LABEL_84;
  }
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  ExAcquireResourceExclusiveLite(CMFLock, 1u);
  v31 = CMFFlagsCache;
  if ( v28 != (CMFFlagsCache & 0x1C0000) )
  {
    v32 = CMFDirectorySectionPointer;
    if ( CMFDirectorySectionPointer )
    {
      if ( !v28 )
      {
        v40 = -1073741637;
        goto LABEL_105;
      }
      if ( CMFDirectorySectionPointer )
      {
        v34 = 0x80000000;
        v45 = 0x80000000;
        if ( (CMFFlagsCache & 0x1C0000) != 0 )
          v34 = -1073741824;
        v45 = v34;
        LOBYTE(v30) = PreviousMode;
        v40 = CMFCheckAccess(CMFDirectorySectionPointer, v34, v30);
        if ( (v40 & 0xC0000000) == 0xC0000000 )
          goto LABEL_105;
        v31 = CMFFlagsCache;
        v32 = CMFDirectorySectionPointer;
      }
    }
    v33 = v28 | v31 & 0xFFE3FFFF;
    CMFFlagsCache = v33;
    if ( v32 && ((v33 & 0x80000) != 0 || (v33 & 0x100000) != 0) )
    {
      P = 0LL;
      ViewSize = 104LL;
      if ( MmMapViewInSystemSpace(v32, &P, &ViewSize) >= 0 )
      {
        v35 = P;
        if ( P )
        {
          if ( ViewSize >= 0x68 )
          {
            *((_DWORD *)P + 12) &= 0xFFE3FFFF;
            v35[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
          }
          MmUnmapViewInSystemSpace(v35);
          P = 0LL;
        }
      }
      CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
      CMFRegisterEventTime(4LL);
    }
  }
  v40 = 0;
LABEL_105:
  ExReleaseResourceLite(CMFLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v10 = v40;
LABEL_78:
  if ( P )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (__int64)P, 0);
    return v40;
  }
  return v10;
}
