/*
 * XREFs of ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140010F20
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x140019FB0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x140019FC0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140010E80 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::Release(CAPOWrapperSrv *this)
{
  unsigned int v2; // edi
  CAPOWrapperSrv *(__fastcall *v3)(CAPOWrapperSrv *, char); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference((int *)this + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( this )
    {
      v3 = *(CAPOWrapperSrv *(__fastcall **)(CAPOWrapperSrv *, char))(*(_QWORD *)this + 56LL);
      if ( v3 == ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor' )
        ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(this, v2 + 1);
      else
        v3(this, v2 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
