/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140711044
 * Callers:
 *     ViCreateProcessCallback @ 0x1400AD558 (ViCreateProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1403E805C (PsGetAllocatedFullProcessImageName.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     ViFaultsGetBaseImageName @ 0x14071145C (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140711544 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  PVOID v3; // rdi
  KIRQL v4; // si
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && PsLookupProcessByProcessId(a1, &Process) >= 0 )
  {
    p_Lock = &Process->Header.Lock;
    if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
    {
      v3 = P;
      ViFaultsGetBaseImageName(P, &SourceString);
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      v4 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
      {
        _InterlockedOr(p_Lock + 192, 0x10000u);
        p_Lock = &Process->Header.Lock;
        v3 = P;
      }
      KeReleaseSpinLock(&ViFaultInjectionLock, v4);
      ExFreePoolWithTag(v3, 0);
    }
    ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x746C6644u);
  }
}
