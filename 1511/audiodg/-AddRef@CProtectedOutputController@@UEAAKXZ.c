/*
 * XREFs of ?AddRef@CProtectedOutputController@@UEAAKXZ @ 0x140016BD0
 * Callers:
 *     ?AddRef@CVirtualProtectedOutput@@UEAAKXZ @ 0x1400168A0 (-AddRef@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ?QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016C10 (-QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140006580 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProtectedOutputController::AddRef(CProtectedOutputController *this)
{
  __int64 (__fastcall *v1)(__int64); // rdi

  v1 = *(__int64 (__fastcall **)(__int64))(**((_QWORD **)this + 1) + 8LL);
  if ( v1 == ATL::CComObject<CAudioDeviceGraph>::AddRef )
    return ATL::CComObject<CAudioDeviceGraph>::AddRef(*((_QWORD *)this + 1));
  else
    return v1(*((_QWORD *)this + 1));
}
