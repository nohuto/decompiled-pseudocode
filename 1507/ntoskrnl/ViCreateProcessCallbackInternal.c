/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x1407467D0
 * Callers:
 *     ViCreateProcessCallback @ 0x14012C490 (ViCreateProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140443A34 (PsGetAllocatedFullProcessImageName.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     ViFaultsGetBaseImageName @ 0x140746CF8 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140746F80 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  PEPROCESS v2; // rbx
  unsigned __int8 CurrentIrql; // bl
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && PsLookupProcessByProcessId(a1, &Process) >= 0 )
  {
    v2 = Process;
    if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
    {
      ViFaultsGetBaseImageName(P, &SourceString);
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ViFaultInjectionLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&ViFaultInjectionLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ViFaultInjectionLock);
      }
      ViFaultLockOwner = (__int64)KeGetCurrentThread();
      if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
        _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x10000u);
      ViFaultLockOwner = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
      else
        _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
      __writecr8(CurrentIrql);
      ExFreePoolWithTag(P, 0);
      v2 = Process;
    }
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
}
