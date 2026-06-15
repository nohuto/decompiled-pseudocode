/*
 * XREFs of ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014630
 * Callers:
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x1400014BC (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14000EC40 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140013990 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ @ 0x140013C50 (--1-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140013ED4 (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140016864 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
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
