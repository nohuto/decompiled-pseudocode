/*
 * XREFs of NtAlpcDeleteSectionView @ 0x14053BE80
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpEnumerateResourcesPort @ 0x140477330 (AlpcpEnumerateResourcesPort.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  __int64 v6; // r9
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG_PTR v15; // rbx
  signed __int64 v16; // rax
  bool v17; // cc
  ULONG_PTR BugCheckParameter4; // rax
  signed __int64 v19; // rdi
  ULONG_PTR v20; // rdi
  struct _KTHREAD *v21; // rdx
  __int16 v22; // ax
  PVOID v24; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-10h]
  PVOID Object; // [rsp+88h] [rbp+38h] BYREF

  CurrentThread = KeGetCurrentThread();
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
      v24 = ViewBase;
      v7 = (unsigned __int64 *)((char *)Object + 352);
      BugCheckParameter2 = 0LL;
      do
      {
        v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, v6);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7, v11);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        v12 = AlpcpEnumerateResourcesPort((__int64)Object, v8, v10, (__int64)&v24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v7);
        KeAbPostRelease((ULONG_PTR)v7);
      }
      while ( v12 == -1073741267 );
      v15 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
        if ( AlpcpDeleteBlob(BugCheckParameter2, v13, v14, v6) )
        {
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v15 = BugCheckParameter2;
          v17 = v16 <= 1;
          BugCheckParameter4 = v16 - 1;
          if ( v17 )
          {
            if ( BugCheckParameter4 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
          v5 = 0;
        }
        else
        {
          v5 = -1073741738;
        }
        v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v17 = v19 <= 1;
        v20 = v19 - 1;
        if ( v17 )
        {
          if ( v20 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v20);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(Object);
    }
  }
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
