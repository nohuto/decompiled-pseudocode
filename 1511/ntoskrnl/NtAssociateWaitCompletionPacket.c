/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x14002E570
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x14002E8F8 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  KSPIN_LOCK *v13; // r15
  int v14; // ebx
  KSPIN_LOCK *v15; // r12
  int v16; // edi
  PVOID v17; // r14
  __int16 *WaitObject; // rbx
  KIRQL CurrentIrql; // r12
  _QWORD *v20; // r8
  BOOLEAN v21; // bl
  _BYTE *v22; // rdx
  KSPIN_LOCK *v23; // rcx
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v25; // [rsp+40h] [rbp-48h] BYREF
  PVOID v26[5]; // [rsp+48h] [rbp-40h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  v13 = (KSPIN_LOCK *)Object;
  v26[1] = Object;
  if ( result >= 0 )
  {
    v14 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, v26, 0LL);
    v15 = (KSPIN_LOCK *)v26[0];
    v26[2] = v26[0];
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      return v14;
    }
    v16 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v25, 0LL);
    v17 = v25;
    v26[3] = v25;
    if ( v16 < 0 )
    {
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      v23 = v15;
    }
    else
    {
      WaitObject = (__int16 *)ObpGetWaitObject((char *)v25 - 48);
      if ( WaitObject == &ObpDefaultObject || !WaitObject || (*(_BYTE *)WaitObject & 0x7F) == 2 )
      {
        v16 = -1073741583;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock(v13 + 12);
        if ( !*((_BYTE *)v13 + 104) )
        {
          *((_BYTE *)v13 + 104) = 1;
          v20 = Object;
          *((_QWORD *)Object + 6) = KeyContext;
          v20[7] = ApcContext;
          *((_DWORD *)v20 + 18) = IoStatus;
          v20[8] = IoStatusInformation;
          v20[10] = v25;
          v20[11] = v26[0];
          v21 = KeRegisterObjectNotification(WaitObject);
          KxReleaseSpinLock(v13 + 12);
          __writecr8(CurrentIrql);
          if ( AlreadySignaled )
          {
            if ( PreviousMode )
            {
              v22 = AlreadySignaled;
              if ( (unsigned __int64)AlreadySignaled >= MmUserProbeAddress )
                v22 = (_BYTE *)MmUserProbeAddress;
              *v22 = *v22;
            }
            *AlreadySignaled = v21;
          }
          return v16;
        }
        KeReleaseSpinLock(v13 + 12, CurrentIrql);
        v16 = -1073741585;
        v13 = (KSPIN_LOCK *)Object;
        v15 = (KSPIN_LOCK *)v26[0];
        v17 = v25;
      }
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      v23 = v13;
    }
    ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    return v16;
  }
  return result;
}
