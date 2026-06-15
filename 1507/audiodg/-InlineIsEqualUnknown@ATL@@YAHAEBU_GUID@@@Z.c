/*
 * XREFs of ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1400271A4
 * Callers:
 *     ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1400130F0 (-CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140027240 (-QueryInterface@-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A450 (-QueryInterface@-$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002B670 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D150 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002E310 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002EC80 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034830 (-QueryInterface@-$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140037E90 (-QueryInterface@-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140037F10 (-QueryInterface@-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140037F90 (-QueryInterface@-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140038010 (-QueryInterface@-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ATL::InlineIsEqualUnknown(const struct _GUID *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && *(_DWORD *)a1->Data4 == 192 )
    return *(_DWORD *)&a1->Data4[4] == 1174405120;
  return result;
}
