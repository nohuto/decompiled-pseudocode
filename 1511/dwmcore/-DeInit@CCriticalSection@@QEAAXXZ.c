/*
 * XREFs of ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C
 * Callers:
 *     ??1CMTALock@@UEAA@XZ @ 0x1800A251C (--1CMTALock@@UEAA@XZ.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AE6EC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800BA304 (--1CD3DDeviceManager@@QEAA@XZ.c)
 *     ??1CDisplayManager@@QEAA@XZ @ 0x1800BA48C (--1CDisplayManager@@QEAA@XZ.c)
 *     ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800BA560 (--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800BA588 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__g_csCompositionEngine__ @ 0x1800BFA90 (_dynamic_atexit_destructor_for__g_csCompositionEngine__.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1800FF4C4 (--1CConnection@@UEAA@XZ.c)
 *     ??1CChannel@@EEAA@XZ @ 0x1800FF988 (--1CChannel@@EEAA@XZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1800FFB08 (--1CChannelTable@@UEAA@XZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1801045A0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180105640 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x18015A144 (--1CMILFactory@@MEAA@XZ.c)
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
