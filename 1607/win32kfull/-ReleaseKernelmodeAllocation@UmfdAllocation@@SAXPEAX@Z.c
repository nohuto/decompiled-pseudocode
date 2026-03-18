/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C02D9EE8
 * Callers:
 *     UmfdDrvFree @ 0x1C02D9070 (UmfdDrvFree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C02D99EC (UmfdTrueTypeFreeGlyphset.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D9D0C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02DA484 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C02DAC80 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7F90 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C02D8440 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  PVOID v1; // rbx
  char *v2; // rdi
  unsigned __int64 v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = UmfdAllocation::s_allocationLookupLock;
  v2 = a1 - 28;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive((NSInstrumentation::CPlatformReaderWriterLock *)UmfdAllocation::s_allocationLookupLock);
  if ( (*(_DWORD *)v2)-- == 1 )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v4 = *((_QWORD *)v2 + 2);
      if ( v4 )
      {
        v5 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(UmfdAllocation::s_allocationLookup, v4, &v5);
      }
    }
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    EngFreeMem(v2);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
