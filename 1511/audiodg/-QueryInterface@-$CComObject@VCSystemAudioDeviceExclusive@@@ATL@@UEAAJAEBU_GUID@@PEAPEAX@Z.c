/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002BB40
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E30 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E40 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceExclusive::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
