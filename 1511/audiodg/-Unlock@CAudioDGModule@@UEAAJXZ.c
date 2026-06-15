/*
 * XREFs of ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530
 * Callers:
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140001220 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400012D4 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140006460 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140006594 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140008440 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140008DD0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140008E84 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140009000 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x1400090B8 (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140009358 (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGModule::Unlock(CAudioDGModule *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( !(_DWORD)result )
    *((_BYTE *)this + 97) = 1;
  return result;
}
