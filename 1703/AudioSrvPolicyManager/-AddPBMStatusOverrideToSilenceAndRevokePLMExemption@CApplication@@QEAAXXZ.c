/*
 * XREFs of ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000C420
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180012B40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800134DC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180013C80 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x18001E1E0 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(CApplication *this)
{
  if ( *((_DWORD *)this + 131) != 1 )
  {
    *((_DWORD *)this + 133) = 0;
    *((_DWORD *)this + 135) = 0;
    *((_DWORD *)this + 131) = 1;
    *((_DWORD *)this + 132) = 1;
    *((_DWORD *)this + 134) = 1;
    *((_DWORD *)this + 136) = 1;
    *((_DWORD *)this + 137) = 1;
  }
}
