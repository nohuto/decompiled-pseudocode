/*
 * XREFs of NtAlpcDeleteSectionView @ 0x1404B4EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpEnumerateResourcesPort @ 0x14040AA10 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x14040AC3C (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
      v13 = ViewBase;
      BugCheckParameter2 = 0LL;
      v6 = (unsigned __int64 *)((char *)Object + 352);
      do
      {
        v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
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
