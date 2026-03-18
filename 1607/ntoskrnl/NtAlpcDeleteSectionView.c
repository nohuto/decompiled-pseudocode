/*
 * XREFs of NtAlpcDeleteSectionView @ 0x1404D1410
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     AlpcpEnumerateResourcesPort @ 0x14040BB50 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x14040BD7C (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDeleteSectionView(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v13 = a3;
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
  return (unsigned int)v5;
}
