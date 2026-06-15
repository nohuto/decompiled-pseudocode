/*
 * XREFs of ?Release@CProtectedOutputController@@UEAAKXZ @ 0x140016B90
 * Callers:
 *     AudioDGGetVpoFromVpoContext @ 0x140001640 (AudioDGGetVpoFromVpoContext.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140006460 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProtectedOutputController::Release(CProtectedOutputController *this)
{
  __int64 (__fastcall *v1)(volatile signed __int32 *); // rdi

  v1 = *(__int64 (__fastcall **)(volatile signed __int32 *))(**((_QWORD **)this + 1) + 16LL);
  if ( v1 == ATL::CComObject<CAudioDeviceGraph>::Release )
    return ATL::CComObject<CAudioDeviceGraph>::Release(*((volatile signed __int32 **)this + 1));
  else
    return v1(*((volatile signed __int32 **)this + 1));
}
