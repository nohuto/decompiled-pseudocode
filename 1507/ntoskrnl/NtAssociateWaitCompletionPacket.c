/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x14002DED0
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x14002E0E0 (KeRegisterObjectNotification.c)
 *     ObGetAssociatedWaitObject @ 0x14002E2FC (ObGetAssociatedWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _BYTE *a8)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  volatile signed __int32 *v13; // rdi
  NTSTATUS v14; // ebx
  volatile signed __int32 *v15; // r15
  NTSTATUS v16; // r14d
  PVOID v17; // rbx
  _BYTE *AssociatedWaitObject; // rax
  _BYTE *v19; // rsi
  volatile signed __int32 *v20; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v22; // r8
  char v23; // di
  _BYTE *v24; // rdx
  volatile signed __int32 *v25; // rcx
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v27; // [rsp+40h] [rbp-48h] BYREF
  PVOID v28[5]; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  v13 = (volatile signed __int32 *)Object;
  v28[1] = Object;
  if ( result >= 0 )
  {
    v14 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, v28, 0LL);
    v15 = (volatile signed __int32 *)v28[0];
    v28[2] = v28[0];
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
      return v14;
    }
    v16 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v27, 0LL);
    v17 = v27;
    v28[3] = v27;
    if ( v16 < 0 )
    {
      ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
      v25 = v15;
    }
    else
    {
      AssociatedWaitObject = (_BYTE *)ObGetAssociatedWaitObject(v27);
      v19 = AssociatedWaitObject;
      if ( !AssociatedWaitObject || (*AssociatedWaitObject & 0x7F) == 2 )
      {
        v16 = -1073741583;
      }
      else
      {
        v20 = v13 + 24;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v13 + 24);
        }
        else
        {
          if ( _interlockedbittestandset64(v20, 0LL) )
            KxWaitForSpinLockAndAcquire(v13 + 24);
          v13 = (volatile signed __int32 *)Object;
        }
        if ( !*((_BYTE *)v13 + 104) )
        {
          *((_BYTE *)v13 + 104) = 1;
          v22 = Object;
          *((_QWORD *)Object + 6) = a4;
          v22[7] = a5;
          *((_DWORD *)v22 + 18) = a6;
          v22[8] = a7;
          v22[10] = v27;
          v22[11] = v28[0];
          v23 = KeRegisterObjectNotification(v19);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v20, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
          __writecr8(CurrentIrql);
          if ( a8 )
          {
            if ( PreviousMode )
            {
              v24 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v24 = (_BYTE *)MmUserProbeAddress;
              *v24 = *v24;
            }
            *a8 = v23;
          }
          return v16;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v20, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
        __writecr8(CurrentIrql);
        v16 = -1073741585;
        v13 = (volatile signed __int32 *)Object;
        v15 = (volatile signed __int32 *)v28[0];
        v17 = v27;
      }
      ObfDereferenceObjectWithTag((PVOID)v15, 0x746C6644u);
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      v25 = v13;
    }
    ObfDereferenceObjectWithTag((PVOID)v25, 0x746C6644u);
    return v16;
  }
  return result;
}
