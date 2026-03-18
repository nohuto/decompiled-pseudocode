/*
 * XREFs of NtStopProfile @ 0x1406FA30C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     KeStopProfile @ 0x140204E84 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtStopProfile(HANDLE ProfileHandle)
{
  NTSTATUS v1; // ebp
  NTSTATUS result; // eax
  _QWORD *v3; // r14
  void *v4; // rbx
  struct _MDL *v5; // rdi
  void *v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  result = ObReferenceObjectByHandle(
             ProfileHandle,
             1u,
             ExProfileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      KeStopProfile(*((_QWORD *)Object + 5));
      v4 = (void *)v3[6];
      v5 = (struct _MDL *)v3[7];
      v6 = (void *)v3[5];
      --ExpCurrentProfileUsage;
      v3[6] = 0LL;
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnmapLockedPages(v4, v5);
      MmUnlockPages(v5);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      v1 = -1073741641;
    }
    ObfDereferenceObject(v3);
    return v1;
  }
  return result;
}
