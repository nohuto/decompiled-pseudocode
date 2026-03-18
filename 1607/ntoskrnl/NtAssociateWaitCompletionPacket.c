/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1400ED7E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeRegisterObjectNotification @ 0x1400EDDA0 (KeRegisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x1400EDF20 (ObpGetWaitObject.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 *     ObpRemoveObjectRoutine @ 0x14041B730 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404B9A30 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x140667748 (ObpDeregisterObject.c)
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
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  KSPIN_LOCK *v12; // rsi
  NTSTATUS v13; // edi
  PVOID v14; // rbx
  NTSTATUS v15; // r15d
  char *v16; // rdi
  __int16 *WaitObject; // r14
  KIRQL CurrentIrql; // r12
  int v19; // eax
  _QWORD *v20; // r8
  PVOID v21; // rdx
  char v22; // di
  __int64 v23; // rcx
  signed __int64 v24; // rbx
  signed __int64 v25; // rax
  bool v26; // cc
  signed __int64 v27; // rax
  __int64 v28; // rcx
  signed __int64 v29; // rax
  signed __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // rbx
  signed __int64 v33; // rsi
  signed __int64 v34; // rsi
  __int64 v35; // rcx
  PVOID v36; // [rsp+38h] [rbp-60h] BYREF
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  PVOID v38[5]; // [rsp+48h] [rbp-50h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  v12 = (KSPIN_LOCK *)Object;
  v38[1] = Object;
  if ( result >= 0 )
  {
    v13 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v36, 0LL);
    v14 = v36;
    v38[2] = v36;
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      return v13;
    }
    v15 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, v38, 0LL);
    v38[3] = v38[0];
    if ( v15 >= 0 )
    {
      v16 = (char *)v38[0] - 48;
      WaitObject = (__int16 *)ObpGetWaitObject((char *)v38[0] - 48);
      if ( WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock(v12 + 12);
        if ( *((_BYTE *)v12 + 104) )
        {
          KeReleaseSpinLock(v12 + 12, CurrentIrql);
          v15 = -1073741585;
          v14 = v36;
        }
        else
        {
          v19 = EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails);
          v20 = Object;
          if ( !v19 || !*((_BYTE *)Object + 105) )
          {
            *((_BYTE *)v12 + 104) = 1;
            v20[6] = a4;
            v20[7] = a5;
            *((_DWORD *)v20 + 18) = a6;
            v20[8] = a7;
            v20[10] = v38[0];
            v21 = v36;
            v20[11] = v36;
            v22 = KeRegisterObjectNotification(WaitObject, v21, v20);
            KeReleaseSpinLock(v12 + 12, CurrentIrql);
            if ( a8 )
            {
              if ( PreviousMode )
              {
                v23 = (__int64)a8;
                if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
                  v23 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v23 = *(_BYTE *)v23;
              }
              *a8 = v22;
            }
            return v15;
          }
          KeReleaseSpinLock(v12 + 12, CurrentIrql);
          v15 = -1073700861;
          v14 = v36;
        }
      }
      else
      {
        v15 = -1073741583;
      }
      v24 = (signed __int64)v14 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v24);
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL);
      v26 = v25 <= 1;
      v27 = v25 - 1;
      if ( v26 )
      {
        if ( *(_QWORD *)(v24 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v24 + 24) ^ (unsigned __int64)BYTE1(v24)],
            (ULONG_PTR)v36,
            1uLL,
            *(_QWORD *)(v24 + 8));
        if ( v27 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v36, 2uLL, v27);
        if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion(v24);
        }
        else
        {
          if ( (*(_BYTE *)(v24 + 26) & 0x40) != 0 )
          {
            v28 = *(_QWORD *)(v24 - ObpInfoMaskToOffset[*(_BYTE *)(v24 + 26) & 0x7F]);
            if ( *(_BYTE *)(v28 + 24) )
              ObpHandleRevocationBlockRemoveObject(v28);
          }
          if ( ObpTraceFlags )
            ObpDeregisterObject(v24);
          ObpRemoveObjectRoutine(v24, 0LL);
        }
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v16);
      v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL);
      v26 = v29 <= 1;
      v30 = v29 - 1;
      if ( v26 )
      {
        if ( *((_QWORD *)v16 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v16[24] ^ (unsigned __int64)BYTE1(v16)],
            (ULONG_PTR)v38[0],
            1uLL,
            *((_QWORD *)v16 + 1));
        if ( v30 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v38[0], 2uLL, v30);
        if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion((signed __int64)v16);
        }
        else
        {
          if ( (v16[26] & 0x40) != 0 )
          {
            v31 = *(_QWORD *)&v16[-ObpInfoMaskToOffset[v16[26] & 0x7F]];
            if ( *(_BYTE *)(v31 + 24) )
              ObpHandleRevocationBlockRemoveObject(v31);
          }
          if ( ObpTraceFlags )
            ObpDeregisterObject(v16);
          ObpRemoveObjectRoutine(v16, 0LL);
        }
      }
      v32 = (char *)Object - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)Object - 48);
      v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
      v26 = v33 <= 1;
      v34 = v33 - 1;
      if ( v26 )
      {
        if ( *((_QWORD *)v32 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v32[24] ^ (unsigned __int64)BYTE1(v32)],
            (ULONG_PTR)Object,
            1uLL,
            *((_QWORD *)v32 + 1));
        if ( v34 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v34);
        if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion((signed __int64)v32);
        }
        else
        {
          if ( (v32[26] & 0x40) != 0 )
          {
            v35 = *(_QWORD *)&v32[-ObpInfoMaskToOffset[v32[26] & 0x7F]];
            if ( *(_BYTE *)(v35 + 24) )
              ObpHandleRevocationBlockRemoveObject(v35);
          }
          if ( ObpTraceFlags )
            ObpDeregisterObject(v32);
          ObpRemoveObjectRoutine(v32, 0LL);
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
