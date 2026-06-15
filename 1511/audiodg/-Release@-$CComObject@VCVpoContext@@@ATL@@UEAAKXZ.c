/*
 * XREFs of ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140001220
 * Callers:
 *     <none>
 * Callees:
 *     ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x1400011C0 (--_E-$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // ebp
  CVpoContext *(__fastcall *v4)(CVpoContext *, char); // rbx
  __int64 (__fastcall *v5)(CAudioDGModule *__hidden); // rdi

  v2 = _InterlockedDecrement(Block + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(CVpoContext *(__fastcall **)(CVpoContext *, char))(*(_QWORD *)Block + 40LL);
      if ( v4 == ATL::CComObject<CVpoContext>::`vector deleting destructor' )
        ATL::CComObject<CVpoContext>::`vector deleting destructor'((CVpoContext *)Block, 1);
      else
        v4((CVpoContext *)Block, 1);
    }
    v5 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( v5 == CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5(ATL::_pAtlModule);
  }
  return v2;
}
