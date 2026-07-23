/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1400EB670
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x1400EBDA0 (ObpGetWaitObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObpRemoveObjectRoutine @ 0x14041A5F0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404A5760 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  KSPIN_LOCK *v12; // rsi
  int v13; // edi
  PVOID v14; // rbx
  int v15; // r15d
  char *v16; // rdi
  __int16 *WaitObject; // r14
  KIRQL CurrentIrql; // r12
  _QWORD *v19; // r8
  PVOID v20; // rdx
  BOOLEAN v21; // di
  __int64 v22; // rcx
  signed __int64 v23; // rbx
  signed __int64 v24; // rax
  bool v25; // cc
  signed __int64 v26; // rax
  __int64 v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rax
  __int64 v30; // rcx
  char *v31; // rbx
  signed __int64 v32; // rsi
  signed __int64 v33; // rsi
  __int64 v34; // rcx
  PVOID v35; // [rsp+38h] [rbp-60h] BYREF
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  PVOID v37[5]; // [rsp+48h] [rbp-50h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  v12 = (KSPIN_LOCK *)Object;
  v37[1] = Object;
  if ( result >= 0 )
  {
    v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v35, 0LL);
    v14 = v35;
    v37[2] = v35;
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      return v13;
    }
    v15 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, v37, 0LL);
    v37[3] = v37[0];
    if ( v15 >= 0 )
    {
      v16 = (char *)v37[0] - 48;
      WaitObject = (__int16 *)ObpGetWaitObject((char *)v37[0] - 48);
      if ( WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock(v12 + 12);
        if ( *((_BYTE *)v12 + 104) )
        {
          KeReleaseSpinLock(v12 + 12, CurrentIrql);
          v15 = -1073741585;
          v14 = v35;
        }
        else
        {
          v19 = Object;
          if ( !*((_BYTE *)Object + 105) )
          {
            *((_BYTE *)v12 + 104) = 1;
            v19[6] = KeyContext;
            v19[7] = ApcContext;
            *((_DWORD *)v19 + 18) = IoStatus;
            v19[8] = IoStatusInformation;
            v19[10] = v37[0];
            v20 = v35;
            v19[11] = v35;
            v21 = KeRegisterObjectNotification(WaitObject, v20, v19);
            KeReleaseSpinLock(v12 + 12, CurrentIrql);
            if ( AlreadySignaled )
            {
              if ( PreviousMode )
              {
                v22 = (__int64)AlreadySignaled;
                if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
                  v22 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v22 = *(_BYTE *)v22;
              }
              *AlreadySignaled = v21;
            }
            return v15;
          }
          KeReleaseSpinLock(v12 + 12, CurrentIrql);
          v15 = -1073700861;
          v14 = v35;
        }
      }
      else
      {
        v15 = -1073741583;
      }
      v23 = (signed __int64)v14 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v23);
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL);
      v25 = v24 <= 1;
      v26 = v24 - 1;
      if ( v25 )
      {
        if ( *(_QWORD *)(v23 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned __int64)BYTE1(v23)],
            (ULONG_PTR)v35,
            1uLL,
            *(_QWORD *)(v23 + 8));
        if ( v26 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v35, 2uLL, v26);
        if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion(v23);
        }
        else
        {
          if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
          {
            v27 = *(_QWORD *)(v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F]);
            if ( *(_BYTE *)(v27 + 24) )
              ObpHandleRevocationBlockRemoveObject(v27);
          }
          if ( ObpTraceFlags )
            ObpDeregisterObject(v23);
          ObpRemoveObjectRoutine(v23, 0LL);
        }
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v16);
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL);
      v25 = v28 <= 1;
      v29 = v28 - 1;
      if ( v25 )
      {
        if ( *((_QWORD *)v16 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v16[24] ^ (unsigned __int64)BYTE1(v16)],
            (ULONG_PTR)v37[0],
            1uLL,
            *((_QWORD *)v16 + 1));
        if ( v29 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v37[0], 2uLL, v29);
        if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion((signed __int64)v16);
        }
        else
        {
          if ( (v16[26] & 0x40) != 0 )
          {
            v30 = *(_QWORD *)&v16[-ObpInfoMaskToOffset[v16[26] & 0x7F]];
            if ( *(_BYTE *)(v30 + 24) )
              ObpHandleRevocationBlockRemoveObject(v30);
          }
          if ( ObpTraceFlags )
            ObpDeregisterObject(v16);
          ObpRemoveObjectRoutine(v16, 0LL);
        }
      }
      v31 = (char *)Object - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)Object - 48);
      v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL);
      v25 = v32 <= 1;
      v33 = v32 - 1;
      if ( v25 )
      {
        if ( *((_QWORD *)v31 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v31[24] ^ (unsigned __int64)BYTE1(v31)],
            (ULONG_PTR)Object,
            1uLL,
            *((_QWORD *)v31 + 1));
        if ( v33 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v33);
        if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion((signed __int64)v31);
        }
        else
        {
          if ( (v31[26] & 0x40) != 0 )
          {
            v34 = *(_QWORD *)&v31[-ObpInfoMaskToOffset[v31[26] & 0x7F]];
            if ( *(_BYTE *)(v34 + 24) )
              ObpHandleRevocationBlockRemoveObject(v34);
          }
          if ( ObpTraceFlags )
            ObpDeregisterObject(v31);
          ObpRemoveObjectRoutine(v31, 0LL);
        }
      }
    }
    else
    {
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    }
    return v15;
  }
  return result;
}
