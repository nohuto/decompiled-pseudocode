/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x140499CD0
 * Callers:
 *     NtNotifyChangeKey @ 0x140499C68 (NtNotifyChangeKey.c)
 * Callees:
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     CmpAllocatePostBlock @ 0x14049A400 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14049A500 (CmpNotifyChangeKey.c)
 *     CmpFreePostBlock @ 0x14049A918 (CmpFreePostBlock.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 */

NTSTATUS __stdcall NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _QWORD *v14; // r13
  unsigned int v15; // esi
  struct _KTHREAD *CurrentThread; // rax
  void *v17; // r8
  bool v18; // r12
  KPROCESSOR_MODE PreviousMode; // cl
  int v20; // edx
  NTSTATUS v21; // edi
  unsigned __int64 *v22; // r15
  __int64 PostBlock; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  PVOID *v26; // rcx
  char *v27; // r12
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  __int64 v31; // rcx
  char *v32; // rcx
  char v33; // r14
  char v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  int v38; // r9d
  char *v39; // rcx
  bool v41; // zf
  __int64 v42; // rcx
  char *v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned __int8 CurrentIrql; // r8
  __int64 v47; // rdx
  _QWORD *v48; // rax
  NTSTATUS v49; // eax
  unsigned __int8 v50; // r8
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  unsigned __int8 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rcx
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  int Object; // [rsp+20h] [rbp-138h]
  int Objecta; // [rsp+20h] [rbp-138h]
  int HandleInformation; // [rsp+28h] [rbp-130h]
  int HandleInformationa; // [rsp+28h] [rbp-130h]
  char v72; // [rsp+40h] [rbp-118h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-117h]
  bool v74; // [rsp+43h] [rbp-115h]
  bool v75; // [rsp+44h] [rbp-114h]
  unsigned int v76; // [rsp+4Ch] [rbp-10Ch]
  PVOID v77; // [rsp+50h] [rbp-108h] BYREF
  PVOID v78; // [rsp+58h] [rbp-100h]
  __int64 v79; // [rsp+60h] [rbp-F8h]
  PVOID v80; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD *v81; // [rsp+70h] [rbp-E8h]
  __int64 v82; // [rsp+78h] [rbp-E0h]
  PVOID v83; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v84[200]; // [rsp+90h] [rbp-C8h] BYREF
  int v87; // [rsp+170h] [rbp+18h]

  v87 = (int)SubordinateObjects;
  v78 = 0LL;
  v14 = 0LL;
  v81 = 0LL;
  v15 = 1;
  v76 = 1;
  memset(v84, 0, 136);
  v74 = 0;
  v79 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v72 = 1;
  if ( Count > 1 )
    goto LABEL_81;
  v18 = Count == 1;
  v75 = Count == 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Asynchronous )
    {
      v15 = 3;
      v76 = 3;
      if ( Count )
        goto LABEL_81;
    }
LABEL_10:
    if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
    {
      v21 = -1073741811;
      goto LABEL_40;
    }
    v21 = CmObReferenceObjectByHandle(MasterKeyHandle, 0x10u, v17, PreviousMode, &v80, 0LL);
    if ( v21 < 0 )
    {
LABEL_40:
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v21;
    }
    v22 = 0LL;
    v77 = 0LL;
    if ( !v18 )
    {
LABEL_13:
      PostBlock = CmpAllocatePostBlock(v15, 0x10000LL, 0LL, 0LL);
      v24 = PostBlock;
      v82 = PostBlock;
      if ( !PostBlock )
      {
        if ( v18 )
          ObfDereferenceObject(v22);
        goto LABEL_85;
      }
      if ( v18 )
      {
        v14 = (_QWORD *)CmpAllocatePostBlock(v76, 0LL, v22, PostBlock);
        v81 = v14;
        if ( !v14 )
        {
          ObfDereferenceObject(v22);
          CmpFreePostBlock(v24);
LABEL_85:
          v21 = -1073741670;
          goto LABEL_80;
        }
      }
      v25 = v76;
      if ( v76 != 1 )
      {
        if ( Event )
        {
          v21 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v83, 0LL);
          v78 = v83;
          if ( v21 < 0 )
          {
            v41 = !v18;
            goto LABEL_88;
          }
          KeResetEvent((PRKEVENT)v83);
          v25 = v76;
        }
        v26 = *(PVOID **)(v24 + 64);
        if ( v25 == 2 )
        {
          v26[13] = IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v24 + 64) + 8LL) = v78;
          v34 = AccessMode;
          if ( !ApcRoutine )
          {
            ApcRoutine = (PIO_APC_ROUTINE)AlpcMessageDeleteProcedure;
            v34 = 0;
          }
          KeInitializeApc(
            *(_QWORD *)(v24 + 64) + 16LL,
            (__int64)KeGetCurrentThread(),
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)ApcRoutine,
            v34,
            (__int64)ApcContext);
          v22 = (unsigned __int64 *)v77;
        }
        else
        {
          *v26 = v78;
          if ( v25 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v24 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v24 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      v27 = (char *)v80 + 8;
      v28 = *((_QWORD *)v80 + 1);
      if ( Count == 1 )
        CmpLockTwoKcbsShared(v28, v22[1]);
      else
        CmpLockKcbShared(v28);
      v29 = *(_QWORD *)v27;
      if ( (*(_DWORD *)(*(_QWORD *)v27 + 4LL) & 0x20000) == 0 )
      {
        if ( !v75 )
          goto LABEL_26;
        v35 = v22[1];
        if ( (*(_DWORD *)(v35 + 4) & 0x20000) == 0 )
        {
          v36 = *(_QWORD *)(v29 + 32);
          v37 = *(_QWORD *)(v35 + 32);
          if ( v36 != v37 )
          {
            if ( v36 >= v37 )
            {
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v37 + 2832));
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v27 + 32LL) + 2832LL));
              LODWORD(v77) = 3;
            }
            else
            {
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v36 + 2832));
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v22[1] + 32) + 2832LL));
              LODWORD(v77) = 2;
            }
            v79 = *(_QWORD *)(v22[1] + 32);
LABEL_27:
            ExAcquireFastMutexUnsafe(&CmpPostLock);
            LOBYTE(v30) = WatchTree;
            v21 = CmpNotifyChangeKey((_DWORD)v80, v24, CompletionFilter, v30, Object, HandleInformation, v24);
            if ( v21 >= 0 )
            {
              if ( v75 )
              {
                ObfReferenceObject(v22);
                if ( v21 )
                {
                  LOBYTE(v38) = WatchTree;
                  v21 = CmpNotifyChangeKey(
                          (_DWORD)v22,
                          (_DWORD)v14,
                          CompletionFilter,
                          v38,
                          Objecta,
                          HandleInformationa,
                          v24);
                  if ( v21 < 0 )
                  {
                    v44 = *(_QWORD *)v24;
                    v45 = *(_QWORD **)(v24 + 8);
                    if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 || *v45 != v24 )
                      __fastfail(3u);
                    *v45 = v44;
                    *(_QWORD *)(v44 + 8) = v45;
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    v47 = *(_QWORD *)(v24 + 16);
                    v48 = *(_QWORD **)(v24 + 24);
                    if ( *(_QWORD *)(v47 + 8) != v24 + 16 || *v48 != v24 + 16 )
                      __fastfail(3u);
                    *v48 = v47;
                    *(_QWORD *)(v47 + 8) = v48;
                    __writecr8(CurrentIrql);
                  }
                }
                else
                {
                  CmpFreePostBlock(v14);
                  v75 = 0;
                }
              }
              ExReleaseFastMutexUnsafe(&CmpPostLock);
              if ( (_DWORD)v77 != 1 )
              {
                if ( (_DWORD)v77 != 2 )
                {
                  if ( (_DWORD)v77 != 3 )
                    goto LABEL_32;
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v27 + 32LL) + 2832LL));
                  v31 = v79;
LABEL_31:
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v31 + 2832));
LABEL_32:
                  v32 = *(char **)v27;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v32, (char *)v22[1]);
                  else
                    CmpUnlockKcb(v32);
                  CmpUnlockRegistry();
                  if ( v22 )
                    ObfDereferenceObject(v22);
                  if ( v21 < 0 )
                  {
                    CmpFreePostBlock(v24);
                    if ( v78 )
                      ObfDereferenceObject(v78);
                    goto LABEL_80;
                  }
                  if ( v76 != 1 )
                  {
                    v33 = 1;
                    goto LABEL_39;
                  }
                  ExReleaseRundownProtection_0(&CmpShutdownRundown);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v72 = 0;
                  v49 = KeWaitForSingleObject(*(PVOID *)(v24 + 64), Executive, AccessMode, 1u, 0LL);
                  v21 = v49;
                  if ( v49 != 257 && v49 != 192 )
                  {
                    CmpLockRegistry();
                    ExAcquireFastMutexUnsafe(&CmpPostLock);
                    v50 = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    if ( v75 )
                    {
                      v51 = *v14;
                      if ( *v14 )
                      {
                        v52 = (_QWORD *)v14[1];
                        if ( *(_QWORD **)(v51 + 8) != v14 || (_QWORD *)*v52 != v14 )
                          __fastfail(3u);
                        *v52 = v51;
                        *(_QWORD *)(v51 + 8) = v52;
                      }
                      v53 = v14[2];
                      v54 = (_QWORD *)v14[3];
                      if ( *(_QWORD **)(v53 + 8) != v14 + 2 || (_QWORD *)*v54 != v14 + 2 )
                        __fastfail(3u);
                      *v54 = v53;
                      *(_QWORD *)(v53 + 8) = v54;
                    }
                    v55 = *(_QWORD *)v24;
                    if ( *(_QWORD *)v24 )
                    {
                      v56 = *(_QWORD **)(v24 + 8);
                      if ( *(_QWORD *)(v55 + 8) != v24 || *v56 != v24 )
                        __fastfail(3u);
                      *v56 = v55;
                      *(_QWORD *)(v55 + 8) = v56;
                    }
                    v57 = *(_QWORD *)(v24 + 16);
                    v58 = *(_QWORD **)(v24 + 24);
                    if ( *(_QWORD *)(v57 + 8) != v24 + 16 || *v58 != v24 + 16 )
                      __fastfail(3u);
                    *v58 = v57;
                    *(_QWORD *)(v57 + 8) = v58;
                    __writecr8(v50);
                    ExReleaseFastMutexUnsafe(&CmpPostLock);
                    CmpUnlockRegistry();
                    v21 = *(_DWORD *)(*(_QWORD *)(v24 + 64) + 24LL);
                    IoStatusBlock->Status = v21;
                    if ( v74 )
                      HIDWORD(IoStatusBlock->Pointer) = 0;
                    else
                      IoStatusBlock->Information = 0LL;
                    v33 = 0;
                    if ( v75 )
                      CmpFreePostBlock(v14);
                    CmpFreePostBlock(v24);
                    goto LABEL_39;
                  }
                  CmpLockRegistry();
                  ExAcquireFastMutexUnsafe(&CmpPostLock);
                  v59 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v75 )
                  {
                    v60 = *v14;
                    if ( *v14 )
                    {
                      v61 = (_QWORD *)v14[1];
                      if ( *(_QWORD **)(v60 + 8) != v14 || (_QWORD *)*v61 != v14 )
                        __fastfail(3u);
                      *v61 = v60;
                      *(_QWORD *)(v60 + 8) = v61;
                    }
                    v62 = v14[2];
                    v63 = (_QWORD *)v14[3];
                    if ( *(_QWORD **)(v62 + 8) != v14 + 2 || (_QWORD *)*v63 != v14 + 2 )
                      __fastfail(3u);
                    *v63 = v62;
                    *(_QWORD *)(v62 + 8) = v63;
                  }
                  v64 = *(_QWORD *)v24;
                  if ( *(_QWORD *)v24 )
                  {
                    v65 = *(_QWORD **)(v24 + 8);
                    if ( *(_QWORD *)(v64 + 8) != v24 || *v65 != v24 )
                      __fastfail(3u);
                    *v65 = v64;
                    *(_QWORD *)(v64 + 8) = v65;
                  }
                  v66 = *(_QWORD *)(v24 + 16);
                  v67 = *(_QWORD **)(v24 + 24);
                  if ( *(_QWORD *)(v66 + 8) != v24 + 16 || *v67 != v24 + 16 )
                    __fastfail(3u);
                  *v67 = v66;
                  *(_QWORD *)(v66 + 8) = v67;
                  __writecr8(v59);
                  ExReleaseFastMutexUnsafe(&CmpPostLock);
                  CmpUnlockRegistry();
                  v41 = !v75;
LABEL_88:
                  if ( !v41 )
                    CmpFreePostBlock(v14);
                  CmpFreePostBlock(v24);
                  goto LABEL_80;
                }
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v79 + 2832));
              }
              v31 = *(_QWORD *)(*(_QWORD *)v27 + 32LL);
              goto LABEL_31;
            }
            ExReleaseFastMutexUnsafe(&CmpPostLock);
            if ( (_DWORD)v77 != 1 )
            {
              if ( (_DWORD)v77 != 2 )
              {
                if ( (_DWORD)v77 != 3 )
                {
LABEL_98:
                  v43 = *(char **)v27;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v43, (char *)v22[1]);
                  else
                    CmpUnlockKcb(v43);
                  CmpUnlockRegistry();
                  if ( v78 )
                    ObfDereferenceObject(v78);
                  if ( v75 )
                    CmpFreePostBlock(v14);
                  v33 = 1;
LABEL_39:
                  ObfDereferenceObject(v80);
                  if ( !v33 )
                    return v21;
                  goto LABEL_40;
                }
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v27 + 32LL) + 2832LL));
                v42 = v79;
LABEL_97:
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v42 + 2832));
                goto LABEL_98;
              }
              ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v79 + 2832));
            }
            v42 = *(_QWORD *)(*(_QWORD *)v27 + 32LL);
            goto LABEL_97;
          }
LABEL_26:
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v29 + 32) + 2832LL));
          LODWORD(v77) = 1;
          goto LABEL_27;
        }
      }
      v39 = *(char **)v27;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v39, (char *)v22[1]);
      else
        CmpUnlockKcb(v39);
      CmpUnlockRegistry();
      if ( v78 )
        ObfDereferenceObject(v78);
      if ( v75 )
        CmpFreePostBlock(v14);
      CmpFreePostBlock(v24);
      v21 = -1073741444;
      goto LABEL_80;
    }
    v21 = ObReferenceObjectByNameEx(v87, v20, 16, (_DWORD)CmKeyObjectType, AccessMode, (__int64)v84, (__int64)&v77);
    if ( v21 >= 0 )
    {
      v22 = (unsigned __int64 *)v77;
      if ( *(_QWORD *)(*((_QWORD *)v80 + 1) + 32LL) != *(_QWORD *)(*((_QWORD *)v77 + 1) + 32LL) )
        goto LABEL_13;
      ObfDereferenceObject(v77);
      v21 = -1073741811;
    }
LABEL_80:
    v33 = v72;
    goto LABEL_39;
  }
  if ( (CompletionFilter & 0x10000000) == 0 )
  {
    v74 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] != 0;
    ProbeForWrite(IoStatusBlock, (-(__int64)v74 & 0xFFFFFFFFFFFFFFF8uLL) + 16, 4u);
    ProbeForWrite(Buffer, BufferSize, 4u);
    if ( v74 )
    {
      IoStatusBlock->Pointer = (PVOID)259;
    }
    else
    {
      IoStatusBlock->Status = 259;
      IoStatusBlock->Information = 0LL;
    }
    PreviousMode = AccessMode;
    if ( Asynchronous )
    {
      v15 = 2;
      v76 = 2;
    }
    goto LABEL_10;
  }
  if ( Asynchronous && !ApcRoutine && Event )
  {
    v15 = 4;
    v76 = 4;
    goto LABEL_10;
  }
LABEL_81:
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
