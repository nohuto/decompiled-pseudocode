/*
 * XREFs of CcInitializeCacheMap @ 0x1400AF300
 * Callers:
 *     <none>
 * Callees:
 *     MmDisableModifiedWriteOfSection @ 0x14000A624 (MmDisableModifiedWriteOfSection.c)
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AF9C0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B0CB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 *     CcInitializeVolumeCacheMap @ 0x1400E3538 (CcInitializeVolumeCacheMap.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     ObDeleteCapturedInsertInfo @ 0x1403DC1C0 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x14044EA7C (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x1404A8F70 (CcCreateVacbArray.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  struct _KTHREAD *CurrentThread; // r13
  PCACHE_MANAGER_CALLBACKS v7; // rbx
  LARGE_INTEGER *v8; // r14
  int v9; // edi
  BOOLEAN v10; // r15
  LARGE_INTEGER AllocationSize; // rcx
  __int128 v12; // kr00_16
  unsigned __int8 CurrentIrql; // r15
  _QWORD *ArbitraryUserPointer; // rcx
  char *SharedCacheMap; // rbx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v19; // zf
  int v20; // ebp
  _WORD *v21; // rdi
  KIRQL v22; // r12
  _QWORD *v23; // rcx
  unsigned __int8 PagePriorityThread; // al
  int v25; // ecx
  _WORD *v26; // rax
  PVOID *v27; // rdx
  NTSTATUS v28; // esi
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  NTSTATUS CacheManagerSection; // eax
  NTSTATUS v34; // r15d
  int VacbArray; // eax
  KIRQL v36; // al
  struct _KEVENT *v37; // rcx
  LARGE_INTEGER *v38; // rax
  LARGE_INTEGER v39; // rax
  LARGE_INTEGER v40; // rax
  __int64 **v41; // rcx
  KIRQL v42; // al
  _QWORD *v43; // rax
  int v44; // r12d
  KIRQL v45; // di
  struct _KEVENT *v46; // rcx
  __int64 v47; // rdx
  NTSTATUS v48; // eax
  char *PoolWithTag; // rax
  _QWORD *v50; // rax
  NTSTATUS v51; // edi
  int v52; // r12d
  unsigned int v53; // eax
  unsigned __int64 v54; // rcx
  __int64 v55; // rdi
  NTSTATUS Status; // [rsp+30h] [rbp-88h]
  NTSTATUS Statusa; // [rsp+30h] [rbp-88h]
  int v59; // [rsp+38h] [rbp-80h]
  int v60; // [rsp+3Ch] [rbp-7Ch]
  int v61; // [rsp+40h] [rbp-78h]
  PVOID P; // [rsp+48h] [rbp-70h]
  _KPROCESS *Process; // [rsp+50h] [rbp-68h]
  int v65[4]; // [rsp+60h] [rbp-58h] BYREF
  LARGE_INTEGER ValidDataLength; // [rsp+70h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v7 = Callbacks;
  v8 = 0LL;
  v9 = 0;
  v60 = 0;
  v10 = PinAccess;
  v59 = 0;
  v61 = 0;
  P = 0LL;
  Status = 0;
  v12 = *(_OWORD *)&FileSizes->AllocationSize.LowPart;
  AllocationSize = FileSizes->AllocationSize;
  Process = CurrentThread->ApcState.Process;
  ValidDataLength = FileSizes->ValidDataLength;
  *(_OWORD *)v65 = __PAIR128__(*((unsigned __int64 *)&v12 + 1), AllocationSize.QuadPart);
  if ( !AllocationSize.QuadPart )
  {
    v65[0] = 1;
    AllocationSize.QuadPart = 1LL;
  }
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    v9 = 1;
  if ( FileObject->WriteAccess )
    *(_QWORD *)v65 = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  else
    *(_QWORD *)v65 = (AllocationSize.QuadPart + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
  if ( !FileObject->SectionObjectPointer->SharedCacheMap )
    goto LABEL_57;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    KxAcquireQueuedSpinLock(ArbitraryUserPointer + 10, ArbitraryUserPointer[11]);
    if ( FileObject->PrivateCacheMap )
      break;
    SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      if ( (FileObject->Flags & 0x20) == 0 )
        *((_DWORD *)SharedCacheMap + 38) &= ~0x40u;
      v16 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v16 & 0x200000) != 0 && !v9 )
        *((_DWORD *)SharedCacheMap + 38) = v16 & 0xFFDFFFFF;
      v17 = Process[1].ThreadSeed[1];
      if ( v17 )
        *((_DWORD *)SharedCacheMap + 128) = v17;
      goto LABEL_15;
    }
    if ( v8 )
    {
      v41 = (__int64 **)qword_1402FD988;
      SharedCacheMap = (char *)v8;
      v8 = 0LL;
      *((_QWORD *)SharedCacheMap + 17) = &CcCleanSharedCacheMapList;
      *((_QWORD *)SharedCacheMap + 18) = v41;
      if ( *v41 != &CcCleanSharedCacheMapList )
        __fastfail(3u);
      *v41 = (__int64 *)(SharedCacheMap + 136);
      qword_1402FD988 = (__int64)(SharedCacheMap + 136);
      v61 = 1;
      FileObject->SectionObjectPointer->SharedCacheMap = SharedCacheMap;
      ObfReferenceObjectWithTag(FileObject, 0x746C6644u);
LABEL_15:
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (*((_DWORD *)SharedCacheMap + 38) & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      if ( (FileObject->Flags & 0x100000) != 0 )
        *((_DWORD *)SharedCacheMap + 38) = *((_DWORD *)SharedCacheMap + 38) & 0xFFDFEFFF | 0x1000;
      v18 = *((_DWORD *)SharedCacheMap + 38) & 0xFFFFFFEF;
      v19 = *((_QWORD *)SharedCacheMap + 11) == 0LL;
      *((_DWORD *)SharedCacheMap + 38) = v18;
      if ( !v19 )
      {
        if ( (v18 & 0x100) == 0 )
        {
          ++*((_DWORD *)SharedCacheMap + 1);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
          __writecr8(CurrentIrql);
          v20 = 0;
          v59 = 1;
          goto LABEL_21;
        }
LABEL_103:
        if ( !*((_QWORD *)SharedCacheMap + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)SharedCacheMap + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
            v20 = 0;
            v28 = -1073741670;
LABEL_72:
            if ( v59 )
            {
LABEL_86:
              v45 = KeAcquireQueuedSpinLock(5uLL);
              if ( v60 )
              {
                v46 = (struct _KEVENT *)*((_QWORD *)SharedCacheMap + 22);
                if ( v46 )
                  KeSetEvent(v46, 0, 0);
                *((_DWORD *)SharedCacheMap + 38) &= ~0x100u;
              }
              v19 = (*((_DWORD *)SharedCacheMap + 1))-- == 1;
              if ( !v19 || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 || *((_DWORD *)SharedCacheMap + 28) )
                KeReleaseQueuedSpinLock(5uLL, v45);
              else
                CcDeleteSharedCacheMap((__int64)SharedCacheMap, v45, 0, 0LL);
              goto LABEL_37;
            }
LABEL_28:
            if ( !v20 )
              CurrentIrql = KeAcquireQueuedSpinLock(5uLL);
            if ( !v61 && !*((_DWORD *)SharedCacheMap + 28) && *((_DWORD *)SharedCacheMap + 1) )
              CcInsertIntoCleanSharedCacheMapList(SharedCacheMap);
            v29 = *((_QWORD *)SharedCacheMap + 34);
            if ( v29 )
            {
              do
              {
                v54 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
                v55 = *(_QWORD *)v54;
                KeSetEvent((PRKEVENT)(v54 + 8), 0, 0);
                v29 = v55;
              }
              while ( v55 );
            }
            *((_DWORD *)SharedCacheMap + 38) &= ~0x10000u;
            *((_QWORD *)SharedCacheMap + 34) = 0LL;
LABEL_36:
            KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
            __writecr8(CurrentIrql);
LABEL_37:
            if ( v8 )
              ExFreePoolWithTag(v8, 0x63536343u);
            if ( P )
              ExFreePoolWithTag(P, 0x63506343u);
            if ( v28 < 0 )
              RtlRaiseStatus(v28);
            return;
          }
          *(_WORD *)PoolWithTag = 0;
          PoolWithTag[2] = 6;
          *((_DWORD *)PoolWithTag + 1) = 0;
          v50 = PoolWithTag + 8;
          v50[1] = v50;
          *v50 = v50;
        }
        ++*((_DWORD *)SharedCacheMap + 1);
        KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
        v59 = 1;
        v20 = 0;
        KeWaitForSingleObject(*((PVOID *)SharedCacheMap + 22), Executive, 0, 0, 0LL);
        v51 = *((_DWORD *)SharedCacheMap + 39);
        if ( v51 < 0 )
        {
          v52 = -1073741590;
          if ( FsRtlIsNtstatusExpected(v51) )
            v52 = v51;
          v28 = v52;
          goto LABEL_86;
        }
LABEL_21:
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x63536343u);
          v8 = 0LL;
        }
        v21 = SharedCacheMap + 376;
        if ( *((_WORD *)SharedCacheMap + 188) )
          goto LABEL_70;
        while ( 1 )
        {
          v20 = 1;
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v23 = KeGetPcr()->NtTib.ArbitraryUserPointer;
          KxAcquireQueuedSpinLock(v23 + 10, v23[11]);
          CurrentIrql = v22;
          if ( FileObject->PrivateCacheMap )
            break;
          if ( !*v21 )
            goto LABEL_26;
          if ( P )
          {
            v21 = P;
            P = 0LL;
LABEL_26:
            memset(v21, 0, 0x78uLL);
            *((_QWORD *)v21 + 1) = FileObject;
            *v21 = 766;
            *((_DWORD *)v21 + 1) = 4095;
            PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
            *((_QWORD *)v21 + 10) = 0LL;
            v25 = PagePriorityThread;
            v26 = v21 + 48;
            *(_DWORD *)v21 ^= (*(_DWORD *)v21 ^ (v25 << 18)) & 0x1C0000;
            v27 = (PVOID *)*((_QWORD *)SharedCacheMap + 29);
            *((_QWORD *)v21 + 12) = SharedCacheMap + 224;
            *((_QWORD *)v21 + 13) = v27;
            if ( *v27 != SharedCacheMap + 224 )
              __fastfail(3u);
            *v27 = v26;
            *((_QWORD *)SharedCacheMap + 29) = v26;
            FileObject->PrivateCacheMap = v21;
            v28 = Status;
            goto LABEL_28;
          }
          KeReleaseQueuedSpinLock(5uLL, v22);
          v20 = 0;
LABEL_70:
          P = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !P )
          {
            v28 = -1073741670;
            goto LABEL_72;
          }
        }
        v53 = *((_DWORD *)SharedCacheMap + 1);
        if ( v53 <= 1 )
          KeBugCheckEx(0x34u, 0x79EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v28 = Status;
        *((_DWORD *)SharedCacheMap + 1) = v53 - 1;
        goto LABEL_36;
      }
      if ( (v18 & 0x100) != 0 )
        goto LABEL_103;
      ++*((_DWORD *)SharedCacheMap + 1);
      *((_DWORD *)SharedCacheMap + 38) = v18 | 0x100;
      v30 = *((_QWORD *)SharedCacheMap + 22);
      if ( v30 )
      {
        *(_WORD *)v30 = 0;
        *(_BYTE *)(v30 + 2) = 6;
        *(_DWORD *)(v30 + 4) = 0;
        v43 = (_QWORD *)(v30 + 8);
        v43[1] = v43;
        *v43 = v43;
      }
      KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
      v31 = SharedCacheMap + 168;
      v59 = 1;
      v32 = *((_QWORD *)SharedCacheMap + 21);
      v20 = 0;
      v60 = 1;
      if ( v32 )
      {
        v47 = *(_QWORD *)v65;
        if ( *(__int64 *)v65 > *((_QWORD *)SharedCacheMap + 4) )
        {
          v48 = MmExtendSection(v32, v65, 1LL);
          Statusa = v48;
          if ( v48 < 0 )
          {
            if ( FsRtlIsNtstatusExpected(v48) )
              v28 = Statusa;
            else
              v28 = -1073741588;
            goto LABEL_86;
          }
          v47 = *(_QWORD *)v65;
        }
        VacbArray = CcExtendVacbArray(SharedCacheMap, v47);
        Status = VacbArray;
        if ( VacbArray >= 0 )
        {
LABEL_54:
          v36 = KeAcquireQueuedSpinLock(5uLL);
          v37 = (struct _KEVENT *)*((_QWORD *)SharedCacheMap + 22);
          CurrentIrql = v36;
          *((_DWORD *)SharedCacheMap + 38) &= ~0x100u;
          if ( v37 )
            KeSetEvent(v37, 0, 0);
          KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
          v60 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        CacheManagerSection = MmCreateCacheManagerSection((int)SharedCacheMap + 168, (int)v65);
        *((_DWORD *)SharedCacheMap + 39) = CacheManagerSection;
        v34 = CacheManagerSection;
        if ( CacheManagerSection < 0 )
        {
          *v31 = 0LL;
          v44 = -1073741590;
          if ( FsRtlIsNtstatusExpected(CacheManagerSection) )
            v44 = v34;
          v28 = v44;
          goto LABEL_86;
        }
        ObDeleteCapturedInsertInfo(*v31);
        if ( (*((_BYTE *)FileObject->FsContext + 6) & 1) == 0 && !FileObject->FsContext2 )
        {
          MmDisableModifiedWriteOfSection((__int64)FileObject->SectionObjectPointer);
          v42 = KeAcquireQueuedSpinLock(5uLL);
          *((_DWORD *)SharedCacheMap + 38) |= 0x200u;
          KeReleaseQueuedSpinLock(5uLL, v42);
        }
        VacbArray = CcCreateVacbArray(SharedCacheMap, *(_QWORD *)v65);
        Status = VacbArray;
        if ( VacbArray >= 0 )
          goto LABEL_54;
      }
      v28 = VacbArray;
      goto LABEL_86;
    }
    KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
    v7 = Callbacks;
    v10 = PinAccess;
LABEL_57:
    v38 = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x63536343u);
    v8 = v38;
    if ( !v38 )
      RtlRaiseStatus(-1073741670);
    memset(v38, 0, 0x210uLL);
    v39 = *(LARGE_INTEGER *)&v65[2];
    v8->LowPart = 34603775;
    v8[12].QuadPart = (LONGLONG)FileObject;
    v8[1] = v39;
    v40 = ValidDataLength;
    v8[5] = ValidDataLength;
    v8[6] = v40;
    v8[64].LowPart = Process[1].ThreadSeed[1];
    Status = CcInitializeVolumeCacheMap(FileObject, &v8[63]);
    if ( Status < 0 )
      RtlRaiseStatus(-1073741670);
    v8[35].LowPart = 1;
    v8[36].QuadPart = 0LL;
    v8[37].LowPart = 0;
    LOWORD(v8[38].LowPart) = 1;
    BYTE2(v8[38].u.LowPart) = 6;
    v8[38].HighPart = 0;
    v8[40].QuadPart = (LONGLONG)&v8[39];
    v8[39].QuadPart = (LONGLONG)&v8[39];
    v8[13].QuadPart = 0LL;
    if ( v10 )
      v8[19].LowPart |= 4u;
    if ( (FileObject->Flags & 0x20) != 0 )
      v8[19].LowPart |= 0x40u;
    if ( v9 )
      v8[19].LowPart |= 0x200000u;
    v8[3].QuadPart = (LONGLONG)&v8[2];
    v8[2].QuadPart = (LONGLONG)&v8[2];
    v8[26].QuadPart = (LONGLONG)v7;
    v8[27].QuadPart = (LONGLONG)LazyWriteContext;
    v8[29].QuadPart = (LONGLONG)&v8[28];
    v8[28].QuadPart = (LONGLONG)&v8[28];
  }
  KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
