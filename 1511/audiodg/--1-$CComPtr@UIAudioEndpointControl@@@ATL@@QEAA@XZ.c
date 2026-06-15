/*
 * XREFs of ??1?$CComPtr@UIAudioEndpointControl@@@ATL@@QEAA@XZ @ 0x140017C30
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x14000C850 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     _CPipeInstance::Stop_::_1_::dtor$0 @ 0x14001B720 (_CPipeInstance--Stop_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioEndpointControl>::~CComPtr<IAudioEndpointControl>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
