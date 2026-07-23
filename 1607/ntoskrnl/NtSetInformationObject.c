/*
 * XREFs of NtSetInformationObject @ 0x14049A550
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObpUnlockDirectory @ 0x14008B190 (ObpUnlockDirectory.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     PsGetCurrentProcessSessionId @ 0x1400F96A0 (PsGetCurrentProcessSessionId.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
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
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  void *SessionObjectById; // rsi
  _QWORD *v13; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  _DWORD *v15; // rbx
  char v17; // cl
  char v18; // r15
  ULONG_PTR v19; // r14
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v22; // rbx
  signed __int64 v23; // r8
  int v24; // ecx
  __int16 v25; // ax
  signed __int32 v26[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int16 v27; // [rsp+34h] [rbp-C4h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID v29; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+48h] [rbp-B0h] BYREF
  __int16 v31; // [rsp+66h] [rbp-92h]
  int v32; // [rsp+68h] [rbp-90h]
  __int128 v33; // [rsp+70h] [rbp-88h] BYREF
  __int16 v34; // [rsp+8Eh] [rbp-6Ah]
  int v35; // [rsp+90h] [rbp-68h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v37; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v38[48]; // [rsp+A8h] [rbp-50h] BYREF

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
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, PreviousMode, &v29, &v37);
        if ( v5 >= 0 )
        {
          v33 = 0LL;
          v34 = 0;
          v35 = -60876;
          v15 = v29;
          ObpLockDirectoryExclusive((__int64)&v33, (__int64)v29);
          v15[80] = PsGetCurrentProcessSessionId();
          ObpUnlockDirectory((__int64)v15, (__int64)&v33);
          ObfDereferenceObject(v15);
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
          SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId, v10, v11);
          v13 = Object;
          if ( SessionObjectById )
          {
            v30 = 0LL;
            v31 = 0;
            v32 = -60876;
            ObpLockDirectoryExclusive((__int64)&v30, (__int64)Object);
            if ( v13[42] )
            {
              v5 = -1073741790;
              ObfDereferenceObject(SessionObjectById);
            }
            else
            {
              v13[42] = SessionObjectById;
            }
            ObpUnlockDirectory((__int64)v13, (__int64)&v30);
          }
          else
          {
            v5 = -1073740715;
          }
          ObfDereferenceObject(v13);
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
    v17 = KeGetCurrentThread()->PreviousMode;
    if ( v17
      && ((unsigned __int64)ObjectInformation + 2 > 0x7FFFFFFF0000LL || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v27 = *(_WORD *)ObjectInformation;
    v18 = 0;
    if ( v17
      || ((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
      || (unsigned __int64)ObjectHandle >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v19 = Process[1].ActiveProcessors.Bitmap[5];
    }
    else
    {
      ObjectHandle = (HANDLE)((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL ^ (unsigned __int64)ObjectHandle);
      v19 = ObpKernelHandleTable;
      Process = PsInitialSystemProcess;
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v38);
        v18 = 1;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ((unsigned __int16)ObjectHandle & 0x3FC) != 0
      && (v22 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v19, (__int64)ObjectHandle)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v22);
          v23 = *v22;
          if ( (*v22 & 1) != 0 )
            break;
          if ( !v23 )
            goto LABEL_46;
          ExpBlockOnLockedHandleEntry(v19, v22, v23);
        }
        Process = (_KPROCESS *)(v23 - 1);
      }
      while ( v23 != _InterlockedCompareExchange64(v22, v23 - 1, v23) );
      if ( (_BYTE)v27
        && (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                              + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v22) & 0xFFF0) >> 8)]
                      + 72) & 2) != 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 0;
        v24 = 0;
        if ( (_BYTE)v27 )
          v24 = 2;
        if ( HIBYTE(v27) )
          v24 |= 1u;
        *v22 ^= ((unsigned int)*v22 ^ (v24 << 17)) & 0x60000;
      }
      _InterlockedExchangeAdd64(v22, 1uLL);
      Process = (_KPROCESS *)(v19 + 48);
      _InterlockedOr(v26, 0);
      if ( *(_QWORD *)(v19 + 48) )
        ExfUnblockPushLock((volatile __int64 *)&Process->Header.Lock, 0LL);
    }
    else
    {
LABEL_46:
      v5 = -1073741790;
    }
    v25 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v25;
    if ( !v25
      && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)Process);
    }
    if ( v18 )
      KiUnstackDetachProcess((struct _KTHREAD *)v38, 0);
  }
  return v5;
}
