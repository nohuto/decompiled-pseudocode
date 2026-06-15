/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14002DC80
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140019ED0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140019EE0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ @ 0x140019EF0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ @ 0x140019F00 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ @ 0x140019F10 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ @ 0x140019F20 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ @ 0x140019F30 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 92);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v2 + 1);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
