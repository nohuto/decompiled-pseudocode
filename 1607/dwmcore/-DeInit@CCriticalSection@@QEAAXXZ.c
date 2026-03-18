/*
 * XREFs of ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C
 * Callers:
 *     ??1CMTALock@@UEAA@XZ @ 0x18009E9FC (--1CMTALock@@UEAA@XZ.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9688 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800BD004 (--1CD3DDeviceManager@@QEAA@XZ.c)
 *     ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800BD0D0 (--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
 *     ??1CDisplayManager@@QEAA@XZ @ 0x1800BD13C (--1CDisplayManager@@QEAA@XZ.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800BD228 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__g_csCompositionEngine__ @ 0x1800C2EB0 (_dynamic_atexit_destructor_for__g_csCompositionEngine__.c)
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x180113760 (--_GCConnection@@UEAAPEAXI@Z.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x180113AE4 (--1CChannelTable@@UEAA@XZ.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801145D0 (--1CChannel@@AEAA@XZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18011AAC0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x18011BB10 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x18018C234 (--1CMILFactory@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCriticalSection::DeInit(struct _RTL_CRITICAL_SECTION *this)
{
  if ( LOBYTE(this[1].DebugInfo) )
  {
    DeleteCriticalSection(this);
    LOBYTE(this[1].DebugInfo) = 0;
  }
}
