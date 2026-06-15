/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14002CC10
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x140019C50 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x140019C60 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ @ 0x140019C70 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ @ 0x140019C80 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ @ 0x140019C90 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 74);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v2 + 1);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
