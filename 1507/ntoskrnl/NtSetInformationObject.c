/*
 * XREFs of NtSetInformationObject @ 0x140520060
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     PsGetCurrentProcessSessionId @ 0x1400D09F0 (PsGetCurrentProcessSessionId.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     MmGetSessionObjectById @ 0x1402209E8 (MmGetSessionObjectById.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall NtSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  int v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  KPROCESSOR_MODE v8; // di
  int CurrentProcessSessionId; // eax
  __int64 v10; // r9
  void *SessionObjectById; // r14
  struct _KTHREAD *v12; // rcx
  unsigned __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rbx
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v25; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rbx
  _DWORD *v31; // rbx
  __int64 v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rbx
  unsigned __int64 v35; // rtt
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  char v39; // cl
  char v40; // r15
  __int64 v41; // r14
  struct _KTHREAD *v42; // rsi
  __int64 *v43; // rdi
  __int64 v44; // r8
  int v45; // ecx
  __int16 v46; // ax
  signed __int32 v47[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v48; // [rsp+34h] [rbp-74h]
  PVOID v49; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v52; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v53[48]; // [rsp+58h] [rbp-50h] BYREF

  v5 = -1073741821;
  v6 = ObjectInformationClass - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, PreviousMode, &v49, &v52);
        if ( v5 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v27 = (unsigned __int64 *)((char *)v49 + 296);
          v28 = KeAbPreAcquire((ULONG_PTR)v49 + 296, 0LL, 0LL, v25);
          v30 = v28;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
            ExfAcquirePushLockExclusiveEx(v27, v28, (ULONG_PTR)v27, v29);
          if ( v30 )
            *(_BYTE *)(v30 + 26) |= 1u;
          v31 = v49;
          ObfReferenceObject(v49);
          v31[80] = PsGetCurrentProcessSessionId();
          _m_prefetchw(v27);
          v33 = *v27;
          if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v34 = 0LL;
          else
            v34 = v33 - 16;
          if ( (v33 & 2) != 0
            || (v35 = *v27, v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v27, v34, v33)) )
          {
            ExfReleasePushLock(v27, v32);
          }
          KeAbPostRelease((ULONG_PTR)v27);
          ObfDereferenceObject(v49);
          v36 = KeGetCurrentThread();
          v37 = v36->KernelApcDisable + 1;
          v36->KernelApcDisable = v37;
          if ( !v37
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
            && !v36->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObfDereferenceObject(v49);
        }
        return v5;
      }
      return -1073741727;
    }
    if ( v7 == 1 )
    {
      v8 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, v8, &Object, &HandleInformation);
        if ( v5 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId);
          if ( SessionObjectById )
          {
            v12 = KeGetCurrentThread();
            --v12->KernelApcDisable;
            v13 = (unsigned __int64 *)((char *)Object + 296);
            v14 = KeAbPreAcquire((ULONG_PTR)Object + 296, 0LL, 0LL, v10);
            v16 = v14;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
              ExfAcquirePushLockExclusiveEx(v13, v14, (ULONG_PTR)v13, v15);
            if ( v16 )
              *(_BYTE *)(v16 + 26) |= 1u;
            v17 = Object;
            ObfReferenceObject(Object);
            if ( v17[42] )
            {
              v5 = -1073741790;
              ObfDereferenceObject(SessionObjectById);
            }
            else
            {
              v17[42] = SessionObjectById;
            }
            _m_prefetchw(v13);
            v19 = *v13;
            if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v20 = 0LL;
            else
              v20 = v19 - 16;
            if ( (v19 & 2) != 0
              || (v21 = *v13, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v20, v19)) )
            {
              ExfReleasePushLock(v13, v18);
            }
            KeAbPostRelease((ULONG_PTR)v13);
            ObfDereferenceObject(Object);
            v22 = KeGetCurrentThread();
            v23 = v22->KernelApcDisable + 1;
            v22->KernelApcDisable = v23;
            if ( !v23
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
              && !v22->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          else
          {
            v5 = -1073740715;
          }
          ObfDereferenceObject(Object);
        }
        return v5;
      }
      return -1073741727;
    }
  }
  else
  {
    if ( Length != 2 )
      return -1073741820;
    v39 = KeGetCurrentThread()->PreviousMode;
    if ( v39
      && ((unsigned __int64)ObjectInformation + 2 > MmUserProbeAddress
       || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v48 = *(_WORD *)ObjectInformation;
    v40 = 0;
    if ( v39
      || ((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
      || (unsigned __int64)ObjectHandle >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v41 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    }
    else
    {
      ObjectHandle = (HANDLE)((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL ^ (unsigned __int64)ObjectHandle);
      v41 = ObpKernelHandleTable;
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v53);
        v40 = 1;
      }
    }
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    if ( ((unsigned __int16)ObjectHandle & 0x3FC) != 0
      && (v43 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v41, (__int64)ObjectHandle)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v43);
          v44 = *v43;
          if ( (*v43 & 1) != 0 )
            break;
          if ( !v44 )
            goto LABEL_73;
          ExpBlockOnLockedHandleEntry(v41, v43, v44);
        }
      }
      while ( v44 != _InterlockedCompareExchange64(v43, v44 - 1, v44) );
      if ( !(_BYTE)v48
        || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v43 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                              + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v43) & 0xFFF0) >> 8)]
                      + 72) & 2) == 0 )
      {
        v45 = 0;
        if ( (_BYTE)v48 )
          v45 = 2;
        if ( HIBYTE(v48) )
          v45 |= 1u;
        *v43 ^= ((unsigned int)*v43 ^ (v45 << 17)) & 0x60000;
      }
      _InterlockedExchangeAdd64(v43, 1uLL);
      _InterlockedOr(v47, 0);
      if ( *(_QWORD *)(v41 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v41 + 48), 0LL);
      v5 = 0;
    }
    else
    {
LABEL_73:
      v5 = -1073741790;
    }
    v46 = v42->KernelApcDisable + 1;
    v42->KernelApcDisable = v46;
    if ( !v46
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
      && !v42->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v40 )
      KiUnstackDetachProcess((struct _KTHREAD *)v53, 0);
  }
  return v5;
}
