/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14002F4D0
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x14001A450 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x14001A460 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ @ 0x14001A470 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ @ 0x14001A480 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ @ 0x14001A490 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ @ 0x14001A4A0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ @ 0x14001A4B0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // esi

  v2 = _InterlockedDecrement(a1 + 92);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 168LL))(a1, 1LL);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
