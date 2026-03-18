/*
 * XREFs of RawCleanupVcb @ 0x1403EE474
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400072F8 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1402104BC (RawCheckForDeleteVolume.c)
 *     RawMountVolume @ 0x1403EE6BC (RawMountVolume.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140007928 (ExFreeCacheAwareRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EE4E8 (FsRtlTeardownPerStreamContexts.c)
 */

void __fastcall RawCleanupVcb(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void *Oplock; // rcx
  _ERESOURCE *Resource; // rcx

  Oplock = AdvancedHeader[1].Oplock;
  if ( Oplock )
  {
    ExFreePoolWithTag(Oplock, 0);
    AdvancedHeader[1].Oplock = 0LL;
  }
  else if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 8) != 0 )
  {
    ExFreePoolWithTag(AdvancedHeader[1].FileContextSupportPointer, 0);
    AdvancedHeader[1].FileContextSupportPointer = 0LL;
  }
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 0x10) != 0 )
    FsRtlTeardownPerStreamContexts(AdvancedHeader);
  Resource = AdvancedHeader[2].Resource;
  if ( Resource )
    ExFreeCacheAwareRundownProtection((PEX_RUNDOWN_REF_CACHE_AWARE)Resource);
  AdvancedHeader[2].Resource = 0LL;
}
