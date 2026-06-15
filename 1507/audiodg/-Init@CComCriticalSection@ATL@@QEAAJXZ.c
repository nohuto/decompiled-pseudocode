/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140013590
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400131F4 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400134A0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014354 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400144DC (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEB.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400166F4 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140017510 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??0CAtlComModule@ATL@@QEAA@XZ @ 0x1400176D4 (--0CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140018214 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x140018498 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
