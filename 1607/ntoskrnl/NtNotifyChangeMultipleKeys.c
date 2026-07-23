/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1403FF884
 * Callers:
 *     NtNotifyChangeKey @ 0x1403FF81C (NtNotifyChangeKey.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpAllocatePostBlock @ 0x1403FFFF8 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1404000F4 (CmpNotifyChangeKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmObReferenceObjectByName @ 0x140606D64 (CmObReferenceObjectByName.c)
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
  _QWORD *v13; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // r15
  char PreviousMode; // dl
  unsigned int v20; // esi
  int v21; // edi
  _QWORD *v22; // r13
  __int64 PostBlock; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  char *v26; // r15
  __int64 v27; // rcx
  int v28; // r9d
  __int64 v29; // rcx
  void *v30; // rcx
  char v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // r8
  int v36; // edx
  int v37; // r9d
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // r9d
  void *v41; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  void *v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  unsigned __int8 CurrentIrql; // r8
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  NTSTATUS v56; // eax
  unsigned __int8 v57; // r8
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  PIO_STATUS_BLOCK v66; // rax
  unsigned __int8 v67; // r8
  __int64 v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  int Object; // [rsp+20h] [rbp-1C8h]
  int Objecta; // [rsp+20h] [rbp-1C8h]
  int HandleInformation; // [rsp+28h] [rbp-1C0h]
  int HandleInformationa; // [rsp+28h] [rbp-1C0h]
  char v80; // [rsp+40h] [rbp-1A8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1A7h]
  bool v82; // [rsp+42h] [rbp-1A6h]
  unsigned int v83; // [rsp+44h] [rbp-1A4h]
  bool v84; // [rsp+48h] [rbp-1A0h]
  PVOID v86; // [rsp+58h] [rbp-190h] BYREF
  PVOID v87; // [rsp+60h] [rbp-188h]
  __int64 v88; // [rsp+68h] [rbp-180h]
  PVOID v89; // [rsp+70h] [rbp-178h] BYREF
  PIO_STATUS_BLOCK v90; // [rsp+78h] [rbp-170h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v91; // [rsp+80h] [rbp-168h]
  _QWORD *v92; // [rsp+88h] [rbp-160h]
  HANDLE v93; // [rsp+90h] [rbp-158h]
  HANDLE Handle; // [rsp+98h] [rbp-150h]
  PVOID v95; // [rsp+A0h] [rbp-148h] BYREF
  _BYTE v96[240]; // [rsp+B0h] [rbp-138h] BYREF

  Handle = Event;
  v91 = SubordinateObjects;
  v93 = MasterKeyHandle;
  v90 = IoStatusBlock;
  v87 = 0LL;
  v13 = 0LL;
  v92 = 0LL;
  v83 = 1;
  v82 = 0;
  v88 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    return -1073741431;
  }
  v80 = 1;
  if ( Count > 1 )
    goto LABEL_81;
  v18 = Count == 1;
  v84 = Count == 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Asynchronous )
    {
      v20 = 3;
      v83 = 3;
      if ( Count )
        goto LABEL_81;
    }
    else
    {
      v20 = 1;
    }
LABEL_10:
    if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
    {
      v21 = -1073741811;
      goto LABEL_40;
    }
    LOBYTE(v17) = PreviousMode;
    v21 = CmObReferenceObjectByHandle((_DWORD)v93, 16, v16, v17, (__int64)&v89, 0LL);
    if ( v21 < 0 )
    {
LABEL_40:
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
      return v21;
    }
    v22 = 0LL;
    v86 = 0LL;
    if ( Count != 1 )
    {
LABEL_13:
      PostBlock = CmpAllocatePostBlock(v20, 0x10000LL, 0LL, 0LL);
      v24 = PostBlock;
      v91 = (OBJECT_ATTRIBUTES *)PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          ObfDereferenceObject(v22);
        goto LABEL_87;
      }
      if ( Count == 1 )
      {
        v13 = (_QWORD *)CmpAllocatePostBlock(v83, 0LL, v22, PostBlock);
        v92 = v13;
        if ( !v13 )
        {
          ObfDereferenceObject(v22);
          CmpFreePostBlock(v24);
LABEL_87:
          v21 = -1073741670;
          goto LABEL_80;
        }
      }
      v25 = v83;
      if ( v83 != 1 )
      {
        if ( Handle )
        {
          v21 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v95, 0LL);
          v87 = v95;
          if ( v21 < 0 )
            goto LABEL_89;
          KeResetEvent((PRKEVENT)v95);
          v25 = v83;
        }
        if ( v25 == 2 )
        {
          *(_QWORD *)(*(_QWORD *)(v24 + 64) + 104LL) = v90;
          *(_QWORD *)(*(_QWORD *)(v24 + 64) + 8LL) = v87;
          v35 = AccessMode;
          if ( !ApcRoutine )
          {
            ApcRoutine = (PIO_APC_ROUTINE)CmpMarkLockTryAcquired;
            v35 = 0;
          }
          KeInitializeApc(
            *(_QWORD *)(v24 + 64) + 16LL,
            (__int64)KeGetCurrentThread(),
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)ApcRoutine,
            v35,
            (__int64)ApcContext);
          v22 = v86;
        }
        else
        {
          **(_QWORD **)(v24 + 64) = v87;
          if ( v25 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v24 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v24 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      v26 = (char *)v89 + 8;
      v27 = *((_QWORD *)v89 + 1);
      if ( Count == 1 )
        CmpLockTwoKcbsShared(v27, v22[1]);
      else
        CmpLockKcbShared(v27);
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v89, 0LL) )
      {
        if ( Count != 1 )
          goto LABEL_26;
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v22, 0LL) )
        {
          v38 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
          v39 = *(_QWORD *)(v22[1] + 24LL);
          if ( v38 != v39 )
          {
            if ( v38 >= v39 )
            {
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v39 + 2832));
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v26 + 24LL) + 2832LL));
              LODWORD(v86) = 3;
            }
            else
            {
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v38 + 2832));
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v22[1] + 24LL) + 2832LL));
              LODWORD(v86) = 2;
            }
            v88 = *(_QWORD *)(v22[1] + 24LL);
LABEL_27:
            ExAcquireFastMutexUnsafe(&CmpPostLock);
            LOBYTE(v28) = WatchTree;
            v21 = CmpNotifyChangeKey((_DWORD)v89, v24, CompletionFilter, v28, Object, HandleInformation, v24);
            if ( v21 >= 0 )
            {
              if ( Count == 1 )
              {
                ObfReferenceObject(v22);
                if ( v21 )
                {
                  LOBYTE(v40) = WatchTree;
                  v21 = CmpNotifyChangeKey(
                          (_DWORD)v22,
                          (_DWORD)v13,
                          CompletionFilter,
                          v40,
                          Objecta,
                          HandleInformationa,
                          v24);
                  if ( v21 < 0 )
                  {
                    v48 = *(_QWORD *)v24;
                    v49 = *(_QWORD **)(v24 + 8);
                    if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 || *v49 != v24 )
                      __fastfail(3u);
                    *v49 = v48;
                    *(_QWORD *)(v48 + 8) = v49;
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    v51 = *(_QWORD *)(v24 + 16);
                    v52 = *(_QWORD **)(v24 + 24);
                    if ( *(_QWORD *)(v51 + 8) != v24 + 16 || *v52 != v24 + 16 )
                      __fastfail(3u);
                    *v52 = v51;
                    *(_QWORD *)(v51 + 8) = v52;
                    __writecr8(CurrentIrql);
                  }
                }
                else
                {
                  CmpFreePostBlock((__int64)v13);
                  v84 = 0;
                }
              }
              ExReleaseFastMutexUnsafe(&CmpPostLock);
              if ( (_DWORD)v86 != 1 )
              {
                if ( (_DWORD)v86 != 2 )
                {
                  if ( (_DWORD)v86 != 3 )
                    goto LABEL_32;
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v26 + 24LL) + 2832LL));
                  v29 = v88;
LABEL_31:
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v29 + 2832));
LABEL_32:
                  v30 = *(void **)v26;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v30, v22[1]);
                  else
                    CmpUnlockKcb(v30);
                  CmpUnlockRegistry();
                  if ( v22 )
                    ObfDereferenceObject(v22);
                  if ( v21 < 0 )
                  {
                    CmpFreePostBlock(v24);
                    if ( v87 )
                      ObfDereferenceObject(v87);
                    goto LABEL_80;
                  }
                  if ( v83 != 1 )
                  {
                    v31 = 1;
                    goto LABEL_39;
                  }
                  ExReleaseRundownProtection(&CmpShutdownRundown);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v53, v54, v55);
                  v80 = 0;
                  v56 = KeWaitForSingleObject(*(PVOID *)(v24 + 64), Executive, AccessMode, 1u, 0LL);
                  v21 = v56;
                  if ( v56 != 257 && v56 != 192 )
                  {
                    CmpLockRegistry();
                    ExAcquireFastMutexUnsafe(&CmpPostLock);
                    v57 = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    if ( v84 )
                    {
                      v58 = *v13;
                      if ( *v13 )
                      {
                        v59 = (_QWORD *)v13[1];
                        if ( *(_QWORD **)(v58 + 8) != v13 || (_QWORD *)*v59 != v13 )
                          __fastfail(3u);
                        *v59 = v58;
                        *(_QWORD *)(v58 + 8) = v59;
                      }
                      v60 = v13[2];
                      v61 = (_QWORD *)v13[3];
                      if ( *(_QWORD **)(v60 + 8) != v13 + 2 || (_QWORD *)*v61 != v13 + 2 )
                        __fastfail(3u);
                      *v61 = v60;
                      *(_QWORD *)(v60 + 8) = v61;
                    }
                    v62 = *(_QWORD *)v24;
                    if ( *(_QWORD *)v24 )
                    {
                      v63 = *(_QWORD **)(v24 + 8);
                      if ( *(_QWORD *)(v62 + 8) != v24 || *v63 != v24 )
                        __fastfail(3u);
                      *v63 = v62;
                      *(_QWORD *)(v62 + 8) = v63;
                    }
                    v64 = *(_QWORD *)(v24 + 16);
                    v65 = *(_QWORD **)(v24 + 24);
                    if ( *(_QWORD *)(v64 + 8) != v24 + 16 || *v65 != v24 + 16 )
                      __fastfail(3u);
                    *v65 = v64;
                    *(_QWORD *)(v64 + 8) = v65;
                    __writecr8(v57);
                    ExReleaseFastMutexUnsafe(&CmpPostLock);
                    CmpUnlockRegistry();
                    v21 = *(_DWORD *)(*(_QWORD *)(v24 + 64) + 24LL);
                    v66 = v90;
                    v90->Status = v21;
                    if ( v82 )
                      HIDWORD(v66->Pointer) = 0;
                    else
                      v66->Information = 0LL;
                    v31 = 0;
                    if ( v84 )
                      CmpFreePostBlock((__int64)v13);
                    CmpFreePostBlock(v24);
                    goto LABEL_39;
                  }
                  CmpLockRegistry();
                  ExAcquireFastMutexUnsafe(&CmpPostLock);
                  v67 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  v18 = v84;
                  if ( v84 )
                  {
                    v68 = *v13;
                    if ( *v13 )
                    {
                      v69 = (_QWORD *)v13[1];
                      if ( *(_QWORD **)(v68 + 8) != v13 || (_QWORD *)*v69 != v13 )
                        __fastfail(3u);
                      *v69 = v68;
                      *(_QWORD *)(v68 + 8) = v69;
                    }
                    v70 = v13[2];
                    v71 = (_QWORD *)v13[3];
                    if ( *(_QWORD **)(v70 + 8) != v13 + 2 || (_QWORD *)*v71 != v13 + 2 )
                      __fastfail(3u);
                    *v71 = v70;
                    *(_QWORD *)(v70 + 8) = v71;
                  }
                  v72 = *(_QWORD *)v24;
                  if ( *(_QWORD *)v24 )
                  {
                    v73 = *(_QWORD **)(v24 + 8);
                    if ( *(_QWORD *)(v72 + 8) != v24 || *v73 != v24 )
                      __fastfail(3u);
                    *v73 = v72;
                    *(_QWORD *)(v72 + 8) = v73;
                  }
                  v74 = *(_QWORD *)(v24 + 16);
                  v75 = *(_QWORD **)(v24 + 24);
                  if ( *(_QWORD *)(v74 + 8) != v24 + 16 || *v75 != v24 + 16 )
                    __fastfail(3u);
                  *v75 = v74;
                  *(_QWORD *)(v74 + 8) = v75;
                  __writecr8(v67);
                  ExReleaseFastMutexUnsafe(&CmpPostLock);
                  CmpUnlockRegistry();
LABEL_89:
                  if ( v18 )
                    CmpFreePostBlock((__int64)v13);
                  CmpFreePostBlock(v24);
                  goto LABEL_80;
                }
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v88 + 2832));
              }
              v29 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
              goto LABEL_31;
            }
            ExReleaseFastMutexUnsafe(&CmpPostLock);
            if ( (_DWORD)v86 != 1 )
            {
              if ( (_DWORD)v86 != 2 )
              {
                if ( (_DWORD)v86 != 3 )
                {
LABEL_99:
                  v47 = *(void **)v26;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v47, v22[1]);
                  else
                    CmpUnlockKcb(v47);
                  CmpUnlockRegistry();
                  if ( v87 )
                    ObfDereferenceObject(v87);
                  if ( Count == 1 )
                    CmpFreePostBlock((__int64)v13);
                  v31 = 1;
LABEL_39:
                  ObfDereferenceObject(v89);
                  if ( !v31 )
                    return v21;
                  goto LABEL_40;
                }
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v26 + 24LL) + 2832LL));
                v46 = v88;
LABEL_98:
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v46 + 2832));
                goto LABEL_99;
              }
              ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v88 + 2832));
            }
            v46 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
            goto LABEL_98;
          }
LABEL_26:
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v26 + 24LL) + 2832LL));
          LODWORD(v86) = 1;
          goto LABEL_27;
        }
      }
      v41 = *(void **)v26;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v41, v22[1]);
      else
        CmpUnlockKcb(v41);
      CmpUnlockRegistry();
      if ( v87 )
        ObfDereferenceObject(v87);
      if ( Count == 1 )
        CmpFreePostBlock((__int64)v13);
      CmpFreePostBlock(v24);
      v21 = -1073741444;
      goto LABEL_80;
    }
    memset(v96, 0, 0xE8uLL);
    v21 = CmObReferenceObjectByName((_DWORD)v91, v36, 16, v37, AccessMode, (__int64)v96, (__int64)&v86);
    CmpCleanupParseContext(v96, 0LL);
    if ( v21 >= 0 )
    {
      v22 = v86;
      if ( *(_QWORD *)(*((_QWORD *)v89 + 1) + 24LL) != *(_QWORD *)(*((_QWORD *)v86 + 1) + 24LL) )
        goto LABEL_13;
      ObfDereferenceObject(v86);
      v21 = -1073741811;
    }
LABEL_80:
    v31 = v80;
    goto LABEL_39;
  }
  if ( (CompletionFilter & 0x10000000) == 0 )
  {
    v82 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] != 0;
    ProbeForWrite(IoStatusBlock, (-(__int64)v82 & 0xFFFFFFFFFFFFFFF8uLL) + 16, 4u);
    ProbeForWrite(Buffer, BufferSize, 4u);
    if ( v82 )
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
      v20 = 2;
      v83 = 2;
    }
    else
    {
      v20 = 1;
    }
    goto LABEL_10;
  }
  if ( Asynchronous && !ApcRoutine && Event )
  {
    v20 = 4;
    v83 = 4;
    goto LABEL_10;
  }
LABEL_81:
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v43, v44, v45);
  return -1073741811;
}
