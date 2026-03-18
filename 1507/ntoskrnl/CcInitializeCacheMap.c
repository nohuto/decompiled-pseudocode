/*
 * XREFs of CcInitializeCacheMap @ 0x140040D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     CcInitializeVolumeCacheMap @ 0x140117D58 (CcInitializeVolumeCacheMap.c)
 *     MmDisableModifiedWriteOfSection @ 0x140125D24 (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MmCreateCacheManagerSection @ 0x1404B2EDC (MmCreateCacheManagerSection.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404ECC84 (ObDeleteCapturedInsertInfo.c)
 *     CcCreateVacbArray @ 0x14052FC9C (CcCreateVacbArray.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  struct _KTHREAD *CurrentThread; // r13
  __int128 v7; // xmm0
  BOOLEAN v9; // bl
  _KPROCESS *Process; // r12
  LARGE_INTEGER *v11; // r14
  LARGE_INTEGER AllocationSize; // rcx
  int v13; // edi
  unsigned __int8 CurrentIrql; // r12
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rdx
  char *SharedCacheMap; // rbx
  int v21; // eax
  int v22; // eax
  __int64 **v23; // rcx
  unsigned int v24; // eax
  bool v25; // zf
  int v26; // ebp
  _WORD *v27; // rdi
  KIRQL v28; // r15
  void *v29; // rcx
  volatile __int64 *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // edx
  _WORD *v34; // rax
  PVOID *v35; // rdx
  NTSTATUS v36; // r15d
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 **v39; // rcx
  __int64 **v40; // rcx
  __int64 v41; // rcx
  volatile signed __int64 **v42; // rbx
  __int64 v43; // rax
  LARGE_INTEGER *v44; // rax
  LARGE_INTEGER v45; // rax
  LARGE_INTEGER v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rcx
  int v50; // r12d
  NTSTATUS CacheManagerSection; // eax
  NTSTATUS v52; // r15d
  KIRQL v53; // al
  struct _KEVENT *v54; // rcx
  KIRQL v55; // al
  char v56; // al
  _QWORD *v57; // rax
  BOOLEAN IsNtstatusExpected; // al
  int v59; // ecx
  NTSTATUS v60; // eax
  char *PoolWithTag; // rax
  _QWORD *v62; // rax
  NTSTATUS v63; // edi
  unsigned int v64; // eax
  KIRQL v65; // di
  struct _KEVENT *v66; // rcx
  __int64 v67; // rdx
  __int64 *v68; // rax
  __int64 **v69; // rcx
  __int64 **v70; // rcx
  unsigned __int64 v71; // rcx
  __int64 v72; // rdi
  NTSTATUS Status; // [rsp+30h] [rbp-88h]
  int v75; // [rsp+38h] [rbp-80h]
  int v76; // [rsp+40h] [rbp-78h]
  PVOID P; // [rsp+48h] [rbp-70h]
  _KPROCESS *v78; // [rsp+50h] [rbp-68h]
  unsigned __int128 v79; // [rsp+58h] [rbp-60h] BYREF
  LARGE_INTEGER ValidDataLength; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v7 = *(_OWORD *)&FileSizes->AllocationSize.LowPart;
  v9 = PinAccess;
  Process = CurrentThread->ApcState.Process;
  v11 = 0LL;
  AllocationSize = FileSizes->AllocationSize;
  v13 = 0;
  v75 = 0;
  v76 = 0;
  P = 0LL;
  v78 = Process;
  Status = 0;
  ValidDataLength = FileSizes->ValidDataLength;
  v79 = __PAIR128__(*((unsigned __int64 *)&v7 + 1), AllocationSize.QuadPart);
  if ( !AllocationSize.QuadPart )
  {
    LODWORD(v79) = 1;
    AllocationSize.QuadPart = v79;
  }
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    v13 = 1;
  if ( FileObject->WriteAccess )
    *(_QWORD *)&v79 = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  else
    *(_QWORD *)&v79 = (AllocationSize.QuadPart + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
  if ( !FileObject->SectionObjectPointer->SharedCacheMap )
    goto LABEL_60;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    v16 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 11);
    v17 = (__int64)ArbitraryUserPointer + 80;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v17, v16);
    }
    else
    {
      v18 = _InterlockedExchange64(v16, v17);
      if ( v18 )
        KxWaitForLockOwnerShip(v17, v18, v16);
    }
    if ( FileObject->PrivateCacheMap )
      break;
    v19 = &CcCleanSharedCacheMapList;
    SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      if ( (FileObject->Flags & 0x20) == 0 )
        *((_DWORD *)SharedCacheMap + 38) &= ~0x40u;
      v21 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v21 & 0x200000) != 0 && !v13 )
        *((_DWORD *)SharedCacheMap + 38) = v21 & 0xFFDFFFFF;
      v22 = *(_DWORD *)&v78[1].BasePriority;
      if ( v22 )
        *((_DWORD *)SharedCacheMap + 128) = v22;
      goto LABEL_21;
    }
    if ( v11 )
    {
      v23 = (__int64 **)qword_14034DE28;
      SharedCacheMap = (char *)v11;
      v11 = 0LL;
      *((_QWORD *)SharedCacheMap + 17) = &CcCleanSharedCacheMapList;
      *((_QWORD *)SharedCacheMap + 18) = v23;
      if ( *v23 != &CcCleanSharedCacheMapList )
        __fastfail(3u);
      *v23 = (__int64 *)(SharedCacheMap + 136);
      qword_14034DE28 = (__int64)(SharedCacheMap + 136);
      v76 = 1;
      FileObject->SectionObjectPointer->SharedCacheMap = SharedCacheMap;
      ObfReferenceObjectWithTag(FileObject, 0x746C6644u);
LABEL_21:
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (*((_DWORD *)SharedCacheMap + 38) & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n", v19);
        __debugbreak();
      }
      if ( (FileObject->Flags & 0x100000) != 0 )
        *((_DWORD *)SharedCacheMap + 38) = *((_DWORD *)SharedCacheMap + 38) & 0xFFDFEFFF | 0x1000;
      v24 = *((_DWORD *)SharedCacheMap + 38) & 0xFFFFFFEF;
      v25 = *((_QWORD *)SharedCacheMap + 11) == 0LL;
      *((_DWORD *)SharedCacheMap + 38) = v24;
      if ( v25 )
      {
        if ( (v24 & 0x100) != 0 )
          goto LABEL_111;
        ++*((_DWORD *)SharedCacheMap + 1);
        *((_DWORD *)SharedCacheMap + 38) = v24 | 0x100;
        v47 = *((_QWORD *)SharedCacheMap + 22);
        if ( v47 )
        {
          *(_WORD *)v47 = 0;
          *(_BYTE *)(v47 + 2) = 6;
          *(_DWORD *)(v47 + 4) = 0;
          v57 = (_QWORD *)(v47 + 8);
          v57[1] = v57;
          *v57 = v57;
        }
        KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
        v26 = 0;
        v75 = 1;
        v48 = SharedCacheMap + 168;
        v49 = *((_QWORD *)SharedCacheMap + 21);
        v50 = 1;
        if ( v49 )
        {
          if ( (__int64)v79 > *((_QWORD *)SharedCacheMap + 4) )
          {
            v60 = MmExtendSection(v49, &v79, 1LL);
            v36 = v60;
            if ( v60 < 0 )
            {
              if ( !FsRtlIsNtstatusExpected(v60) )
                v36 = -1073741588;
              goto LABEL_126;
            }
          }
          Status = CcExtendVacbArray(SharedCacheMap);
          v36 = Status;
          if ( Status < 0 )
            goto LABEL_126;
        }
        else
        {
          CacheManagerSection = MmCreateCacheManagerSection((int)SharedCacheMap + 168, (unsigned int)&v79);
          *((_DWORD *)SharedCacheMap + 39) = CacheManagerSection;
          v52 = CacheManagerSection;
          if ( CacheManagerSection < 0 )
          {
            *v48 = 0LL;
            IsNtstatusExpected = FsRtlIsNtstatusExpected(CacheManagerSection);
            v59 = -1073741590;
            if ( IsNtstatusExpected )
              v59 = v52;
            v36 = v59;
            goto LABEL_126;
          }
          ObDeleteCapturedInsertInfo(*v48);
          if ( (*((_BYTE *)FileObject->FsContext + 6) & 1) == 0 && !FileObject->FsContext2 )
          {
            MmDisableModifiedWriteOfSection(FileObject->SectionObjectPointer);
            v55 = KeAcquireQueuedSpinLock(5uLL);
            *((_DWORD *)SharedCacheMap + 38) |= 0x200u;
            KeReleaseQueuedSpinLock(5uLL, v55);
          }
          Status = CcCreateVacbArray(SharedCacheMap, v79);
          v36 = Status;
          if ( Status < 0 )
          {
LABEL_126:
            v65 = KeAcquireQueuedSpinLock(5uLL);
            if ( v50 )
            {
              v66 = (struct _KEVENT *)*((_QWORD *)SharedCacheMap + 22);
              if ( v66 )
                KeSetEvent(v66, 0, 0);
              *((_DWORD *)SharedCacheMap + 38) &= ~0x100u;
            }
            v25 = (*((_DWORD *)SharedCacheMap + 1))-- == 1;
            if ( !v25 || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 || *((_DWORD *)SharedCacheMap + 28) )
              KeReleaseQueuedSpinLock(5uLL, v65);
            else
              CcDeleteSharedCacheMap(SharedCacheMap, v65, 0LL, 0LL);
            goto LABEL_54;
          }
        }
        v53 = KeAcquireQueuedSpinLock(5uLL);
        v54 = (struct _KEVENT *)*((_QWORD *)SharedCacheMap + 22);
        CurrentIrql = v53;
        *((_DWORD *)SharedCacheMap + 38) &= ~0x100u;
        if ( v54 )
          KeSetEvent(v54, 0, 0);
        KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
      }
      else
      {
        if ( (v24 & 0x100) == 0 )
        {
          ++*((_DWORD *)SharedCacheMap + 1);
          KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
          v26 = 0;
          v75 = 1;
          goto LABEL_27;
        }
LABEL_111:
        if ( !*((_QWORD *)SharedCacheMap + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)SharedCacheMap + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
            v26 = 0;
LABEL_124:
            v36 = -1073741670;
            if ( v75 )
            {
              v50 = 0;
              goto LABEL_126;
            }
LABEL_38:
            if ( !v26 )
              CurrentIrql = KeAcquireQueuedSpinLock(5uLL);
            if ( !v76 && !*((_DWORD *)SharedCacheMap + 28) && *((_DWORD *)SharedCacheMap + 1) )
            {
              if ( (*((_DWORD *)SharedCacheMap + 38) & 0x3000000) != 0 )
              {
                v67 = *((_QWORD *)SharedCacheMap + 15);
                v68 = (__int64 *)(SharedCacheMap + 120);
                v69 = (__int64 **)*((_QWORD *)SharedCacheMap + 16);
                if ( *(char **)(v67 + 8) != SharedCacheMap + 120 || *v69 != v68 )
                  __fastfail(3u);
                *v69 = (__int64 *)v67;
                *(_QWORD *)(v67 + 8) = v69;
                v70 = (__int64 **)qword_14034DE18;
                *v68 = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
                *((_QWORD *)SharedCacheMap + 16) = v70;
                if ( *v70 != &CcCleanSharedCacheMapWithLogHandleList )
                  __fastfail(3u);
                *v70 = v68;
                qword_14034DE18 = (__int64)(SharedCacheMap + 120);
              }
              v37 = (__int64 *)(SharedCacheMap + 136);
              v38 = *((_QWORD *)SharedCacheMap + 17);
              v39 = (__int64 **)*((_QWORD *)SharedCacheMap + 18);
              if ( *(char **)(v38 + 8) != SharedCacheMap + 136 || *v39 != v37 )
                __fastfail(3u);
              *v39 = (__int64 *)v38;
              *(_QWORD *)(v38 + 8) = v39;
              v40 = (__int64 **)qword_14034DE28;
              *v37 = (__int64)&CcCleanSharedCacheMapList;
              *((_QWORD *)SharedCacheMap + 18) = v40;
              if ( *v40 != &CcCleanSharedCacheMapList )
                __fastfail(3u);
              *v40 = v37;
              qword_14034DE28 = (__int64)(SharedCacheMap + 136);
            }
            v41 = *((_QWORD *)SharedCacheMap + 34);
            if ( v41 )
            {
              do
              {
                v71 = v41 & 0xFFFFFFFFFFFFFFFEuLL;
                v72 = *(_QWORD *)v71;
                KeSetEvent((PRKEVENT)(v71 + 8), 0, 0);
                v41 = v72;
              }
              while ( v72 );
            }
            *((_DWORD *)SharedCacheMap + 38) &= ~0x10000u;
            *((_QWORD *)SharedCacheMap + 34) = 0LL;
LABEL_50:
            v42 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(v42, retaddr);
            }
            else
            {
              _m_prefetchw(v42);
              v43 = (__int64)*v42;
              if ( !*v42 )
              {
                if ( v42 == (volatile signed __int64 **)_InterlockedCompareExchange64(v42[1], 0LL, (signed __int64)v42) )
                  goto LABEL_53;
                v43 = KxWaitForLockChainValid(v42);
              }
              *v42 = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(v43 + 8), 1uLL);
            }
LABEL_53:
            __writecr8(CurrentIrql);
LABEL_54:
            if ( v11 )
              ExFreePoolWithTag(v11, 0x63536343u);
            if ( P )
              ExFreePoolWithTag(P, 0x63506343u);
            if ( v36 < 0 )
              RtlRaiseStatus(v36);
            return;
          }
          *(_WORD *)PoolWithTag = 0;
          PoolWithTag[2] = 6;
          *((_DWORD *)PoolWithTag + 1) = 0;
          v62 = PoolWithTag + 8;
          v62[1] = v62;
          *v62 = v62;
        }
        ++*((_DWORD *)SharedCacheMap + 1);
        KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
        v26 = 0;
        v75 = 1;
        KeWaitForSingleObject(*((PVOID *)SharedCacheMap + 22), Executive, 0, 0, 0LL);
        v63 = *((_DWORD *)SharedCacheMap + 39);
        if ( v63 < 0 )
        {
          v36 = -1073741590;
          v50 = 0;
          if ( FsRtlIsNtstatusExpected(v63) )
            v36 = v63;
          goto LABEL_126;
        }
      }
LABEL_27:
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x63536343u);
        v11 = 0LL;
      }
      v27 = SharedCacheMap + 376;
      if ( *((_WORD *)SharedCacheMap + 188) )
        goto LABEL_84;
      while ( 1 )
      {
        v26 = 1;
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v29 = KeGetPcr()->NtTib.ArbitraryUserPointer;
        v30 = (volatile __int64 *)*((_QWORD *)v29 + 11);
        v31 = (__int64)v29 + 80;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(v31, v30);
        }
        else
        {
          v32 = _InterlockedExchange64(v30, v31);
          if ( v32 )
            KxWaitForLockOwnerShip(v31, v32, v30);
        }
        CurrentIrql = v28;
        if ( FileObject->PrivateCacheMap )
          break;
        if ( !*v27 )
          goto LABEL_35;
        if ( P )
        {
          v27 = P;
          P = 0LL;
LABEL_35:
          memset(v27, 0, 0x78uLL);
          *((_QWORD *)v27 + 1) = FileObject;
          *v27 = 766;
          *((_DWORD *)v27 + 1) = 4095;
          v33 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
          if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          {
            v56 = 2;
            if ( v33 < 2 )
              v56 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
            LOBYTE(v33) = v56;
          }
          *((_QWORD *)v27 + 10) = 0LL;
          *(_DWORD *)v27 ^= (*(_DWORD *)v27 ^ ((unsigned __int8)v33 << 18)) & 0x1C0000;
          v34 = v27 + 48;
          v35 = (PVOID *)*((_QWORD *)SharedCacheMap + 29);
          *((_QWORD *)v27 + 12) = SharedCacheMap + 224;
          *((_QWORD *)v27 + 13) = v35;
          if ( *v35 != SharedCacheMap + 224 )
            __fastfail(3u);
          v36 = Status;
          *v35 = v34;
          *((_QWORD *)SharedCacheMap + 29) = v34;
          FileObject->PrivateCacheMap = v27;
          goto LABEL_38;
        }
        KeReleaseQueuedSpinLock(5uLL, v28);
        v26 = 0;
LABEL_84:
        P = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
        if ( !P )
          goto LABEL_124;
      }
      v64 = *((_DWORD *)SharedCacheMap + 1);
      if ( v64 <= 1 )
        KeBugCheckEx(0x34u, 0x78FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v36 = Status;
      *((_DWORD *)SharedCacheMap + 1) = v64 - 1;
      goto LABEL_50;
    }
    KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
    v9 = PinAccess;
    Process = v78;
LABEL_60:
    v44 = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x63536343u);
    v11 = v44;
    if ( !v44 )
      RtlRaiseStatus(-1073741670);
    memset(v44, 0, 0x210uLL);
    v45 = *(LARGE_INTEGER *)((char *)&v79 + 8);
    v11->LowPart = 34603775;
    v11[12].QuadPart = (LONGLONG)FileObject;
    v11[1] = v45;
    v46 = ValidDataLength;
    v11[5] = ValidDataLength;
    v11[6] = v46;
    v11[64].LowPart = *(_DWORD *)&Process[1].BasePriority;
    Status = CcInitializeVolumeCacheMap(FileObject, &v11[63]);
    if ( Status < 0 )
      RtlRaiseStatus(-1073741670);
    v11[35].LowPart = 1;
    v11[36].QuadPart = 0LL;
    v11[37].LowPart = 0;
    LOWORD(v11[38].LowPart) = 1;
    BYTE2(v11[38].u.LowPart) = 6;
    v11[38].HighPart = 0;
    v11[40].QuadPart = (LONGLONG)&v11[39];
    v11[39].QuadPart = (LONGLONG)&v11[39];
    v11[13].QuadPart = 0LL;
    if ( v9 )
      v11[19].LowPart |= 4u;
    if ( (FileObject->Flags & 0x20) != 0 )
      v11[19].LowPart |= 0x40u;
    if ( v13 )
      v11[19].LowPart |= 0x200000u;
    v11[3].QuadPart = (LONGLONG)&v11[2];
    v11[2].QuadPart = (LONGLONG)&v11[2];
    v11[26].QuadPart = (LONGLONG)Callbacks;
    v11[27].QuadPart = (LONGLONG)LazyWriteContext;
    v11[29].QuadPart = (LONGLONG)&v11[28];
    v11[28].QuadPart = (LONGLONG)&v11[28];
  }
  KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x63536343u);
}
