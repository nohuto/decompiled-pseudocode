/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x14069FA30
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcRevokeSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebx
  int v5; // esi
  __int64 v6; // r9
  PVOID v7; // rbp
  ULONG_PTR v8; // rax
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  unsigned __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  int v15; // eax
  signed __int64 v16; // rdi
  bool v17; // cc
  ULONG_PTR v18; // rdi
  struct _KTHREAD *v19; // rdx
  __int16 v20; // ax
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)ContextHandle;
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = Object;
      v8 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), v4, AlpcSecurityType, v6);
      v10 = v8;
      if ( v8 )
      {
        if ( v7 == *(PVOID *)(v8 + 24) )
        {
          v11 = (unsigned __int64 *)(v8 - 16);
          v12 = KeAbPreAcquire(v8 - 16, 0LL, 0LL, v9);
          v14 = v12;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
            ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11, v13);
          if ( v14 )
            *(_BYTE *)(v14 + 26) |= 1u;
          v15 = *(_DWORD *)(v10 + 104);
          if ( (v15 & 2) != 0 )
          {
            v5 = -1073741823;
          }
          else
          {
            v5 = 0;
            *(_DWORD *)(v10 + 104) = v15 | 1;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
          KeAbPostRelease(v10 - 16);
        }
        else
        {
          v5 = -1073741790;
        }
        v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v17 = v16 <= 1;
        v18 = v16 - 1;
        if ( v17 )
        {
          if ( v18 )
            KeBugCheckEx(0x18u, 0LL, v10, 0x21uLL, v18);
          AlpcpDestroyBlob(v10);
        }
        v7 = Object;
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v7);
    }
  }
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
