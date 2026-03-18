/*
 * XREFs of NtSetInformationObject @ 0x140492930
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObpUnlockDirectory @ 0x1400428A0 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x140098180 (PsGetCurrentProcessSessionId.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
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
  void *SessionObjectById; // rsi
  _QWORD *v11; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  _DWORD *v13; // rbx
  char v15; // cl
  char v16; // r15
  ULONG_PTR v17; // r14
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v20; // rbx
  signed __int64 v21; // r8
  int v22; // ecx
  __int16 v23; // ax
  signed __int32 v24[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int16 v25; // [rsp+34h] [rbp-C4h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID v27; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+48h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+66h] [rbp-92h]
  int v30; // [rsp+68h] [rbp-90h]
  __int128 v31; // [rsp+70h] [rbp-88h] BYREF
  __int16 v32; // [rsp+8Eh] [rbp-6Ah]
  int v33; // [rsp+90h] [rbp-68h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v35; // [rsp+A0h] [rbp-58h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v36; // [rsp+A8h] [rbp-50h] BYREF

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
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, PreviousMode, &v27, &v35);
        if ( v5 >= 0 )
        {
          v28 = 0LL;
          v29 = 0;
          v30 = -60876;
          v13 = v27;
          ObpLockDirectoryExclusive((__int64)&v28, (__int64)v27);
          v13[80] = PsGetCurrentProcessSessionId();
          ObpUnlockDirectory((__int64)v13, (__int64)&v28);
          ObfDereferenceObject(v13);
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
          v11 = Object;
          if ( SessionObjectById )
          {
            v31 = 0LL;
            v32 = 0;
            v33 = -60876;
            ObpLockDirectoryExclusive((__int64)&v31, (__int64)Object);
            if ( v11[42] )
            {
              v5 = -1073741790;
              ObfDereferenceObject(SessionObjectById);
            }
            else
            {
              v11[42] = SessionObjectById;
            }
            ObpUnlockDirectory((__int64)v11, (__int64)&v31);
          }
          else
          {
            v5 = -1073740715;
          }
          ObfDereferenceObject(v11);
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
    v15 = KeGetCurrentThread()->PreviousMode;
    if ( v15
      && ((unsigned __int64)ObjectInformation + 2 > MmUserProbeAddress
       || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v25 = *(_WORD *)ObjectInformation;
    v16 = 0;
    if ( v15
      || ((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
      || (unsigned __int64)ObjectHandle >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v17 = Process[1].ActiveProcessors.Bitmap[5];
    }
    else
    {
      ObjectHandle = (HANDLE)((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL ^ (unsigned __int64)ObjectHandle);
      v17 = ObpKernelHandleTable;
      Process = PsInitialSystemProcess;
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)&v36);
        v16 = 1;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ((unsigned __int16)ObjectHandle & 0x3FC) != 0
      && (v20 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v17, (__int64)ObjectHandle)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v20);
          v21 = *v20;
          if ( (*v20 & 1) != 0 )
            break;
          if ( !v21 )
            goto LABEL_46;
          ExpBlockOnLockedHandleEntry(v17, v20, v21);
        }
        Process = (_KPROCESS *)(v21 - 1);
      }
      while ( v21 != _InterlockedCompareExchange64(v20, v21 - 1, v21) );
      if ( (_BYTE)v25
        && (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                              + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v20) & 0xFFF0) >> 8)]
                      + 72) & 2) != 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 0;
        v22 = 0;
        if ( (_BYTE)v25 )
          v22 = 2;
        if ( HIBYTE(v25) )
          v22 |= 1u;
        *v20 ^= ((unsigned int)*v20 ^ (v22 << 17)) & 0x60000;
      }
      _InterlockedExchangeAdd64(v20, 1uLL);
      Process = (_KPROCESS *)(v17 + 48);
      _InterlockedOr(v24, 0);
      if ( *(_QWORD *)(v17 + 48) )
        ExfUnblockPushLock((volatile __int64 *)&Process->Header.Lock, 0LL);
    }
    else
    {
LABEL_46:
      v5 = -1073741790;
    }
    v23 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v23;
    if ( !v23
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)Process);
    }
    if ( v16 )
      KiUnstackDetachProcess(&v36, 0LL);
  }
  return v5;
}
