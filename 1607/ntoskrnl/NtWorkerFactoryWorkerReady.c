/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x1400A7148
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtWorkerFactoryWorkerReady(void *a1)
{
  NTSTATUS v1; // edi
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v1 = ObReferenceObjectByHandle(
         a1,
         0x10u,
         ExpWorkerFactoryObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v3 = v2[36];
    if ( v3 )
    {
      v2[36] = v3 - 1;
      v4 = v2[34];
      if ( v4 )
      {
        ++v2[32];
        ++v2[33];
        v2[34] = v4 - 1;
      }
      else
      {
        v1 = -1073741558;
      }
    }
    else
    {
      v1 = -1073741823;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return (unsigned int)v1;
}
