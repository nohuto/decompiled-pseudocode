/*
 * XREFs of ??1?$CComPtr@UIAudioVirtualProtectedOutput@@@ATL@@QEAA@XZ @ 0x140026650
 * Callers:
 *     _CStreamInstance::GetOta_::_1_::dtor$0 @ 0x14001AAFD (_CStreamInstance--GetOta_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioVirtualProtectedOutput>::~CComPtr<IAudioVirtualProtectedOutput>(
        CVirtualProtectedOutput **a1)
{
  __int64 (__fastcall *v1)(CVirtualProtectedOutput *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CVirtualProtectedOutput::Release )
      return CVirtualProtectedOutput::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
