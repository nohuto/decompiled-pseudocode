/*
 * XREFs of NtAlpcDeleteSectionView @ 0x1404ABD1C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpEnumerateResourcesPort @ 0x14047BF9C (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x14047CE3C (AlpcpDeleteView.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v5; // ebx
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  PVOID v13; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

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
      v6 = (unsigned __int64 *)((char *)Object + 352);
      BugCheckParameter2 = 0LL;
      v13 = ViewBase;
      do
      {
        v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v6, v8, (ULONG_PTR)v6);
        if ( v8 )
          *(_BYTE *)(v8 + 26) |= 1u;
        v10 = AlpcpEnumerateResourcesPort((__int64)Object, v7, v9, (__int64)&v13);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v6);
        KeAbPostRelease((ULONG_PTR)v6);
      }
      while ( v10 == -1073741267 );
      v11 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
        v5 = AlpcpDeleteView(BugCheckParameter2) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v11, 1);
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return v5;
}
