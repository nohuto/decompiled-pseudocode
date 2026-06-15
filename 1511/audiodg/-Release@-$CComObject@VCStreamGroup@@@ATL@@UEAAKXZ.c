/*
 * XREFs of ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140008DD0
 * Callers:
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x140019D60 (-Release@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140008D70 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // ebp
  CStreamGroup *(__fastcall *v4)(CStreamGroup *, char); // rbx
  __int64 (__fastcall *v5)(CAudioDGModule *); // rdi

  v2 = _InterlockedDecrement(Block + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(CStreamGroup *(__fastcall **)(CStreamGroup *, char))(*(_QWORD *)Block + 96LL);
      if ( v4 == ATL::CComObject<CStreamGroup>::`vector deleting destructor' )
        ATL::CComObject<CStreamGroup>::`vector deleting destructor'((CStreamGroup *)Block, 1);
      else
        v4((CStreamGroup *)Block, 1);
    }
    v5 = *(__int64 (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( v5 == CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5(ATL::_pAtlModule);
  }
  return v2;
}
