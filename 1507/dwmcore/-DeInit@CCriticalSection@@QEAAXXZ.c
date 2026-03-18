/*
 * XREFs of ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C
 * Callers:
 *     ??1CMTALock@@UEAA@XZ @ 0x1800526DC (--1CMTALock@@UEAA@XZ.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180060E4C (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DDeviceManager@@QEAA@XZ @ 0x180097618 (--1CD3DDeviceManager@@QEAA@XZ.c)
 *     ??1CDisplayManager@@QEAA@XZ @ 0x180097834 (--1CDisplayManager@@QEAA@XZ.c)
 *     ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180097990 (--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800979B8 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__g_csCompositionEngine__ @ 0x18009C680 (_dynamic_atexit_destructor_for__g_csCompositionEngine__.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1800E0DA4 (--1CConnection@@UEAA@XZ.c)
 *     ??1CChannel@@EEAA@XZ @ 0x1800E1280 (--1CChannel@@EEAA@XZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1800E13F8 (--1CChannelTable@@UEAA@XZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1800E8548 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1800E96C0 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x18014B940 (--1CMILFactory@@MEAA@XZ.c)
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
