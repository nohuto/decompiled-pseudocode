/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x1406C4FA4
 * Callers:
 *     ViCreateProcessCallback @ 0x1400EEDE0 (ViCreateProcessCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1404D6CF0 (PsGetAllocatedFullProcessImageName.c)
 *     ViFaultsGetBaseImageName @ 0x1406C53E8 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x1406C54D0 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  PEPROCESS v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // bl
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && PsLookupProcessByProcessId(a1, &Process) >= 0 )
  {
    v2 = Process;
    if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
    {
      ViFaultsGetBaseImageName(P, &SourceString);
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      ViFaultLockOwner = (__int64)KeGetCurrentThread();
      v4 = v3;
      if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
        _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x10000u);
      ViFaultLockOwner = 0LL;
      KeReleaseSpinLock(&ViFaultInjectionLock, v4);
      ExFreePoolWithTag(P, 0);
      v2 = Process;
    }
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
}
