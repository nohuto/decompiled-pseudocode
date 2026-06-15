/*
 * XREFs of ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140011170
 * Callers:
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x1400197E0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x1400110C0 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::Release(int *Block)
{
  unsigned int v2; // edi
  CStreamGroup *(__fastcall *v3)(CStreamGroup *, char); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v3 = *(CStreamGroup *(__fastcall **)(CStreamGroup *, char))(*(_QWORD *)Block + 96LL);
      if ( v3 == ATL::CComObject<CStreamGroup>::`vector deleting destructor' )
        ATL::CComObject<CStreamGroup>::`vector deleting destructor'((CStreamGroup *)Block, v2 + 1);
      else
        v3((CStreamGroup *)Block, v2 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
