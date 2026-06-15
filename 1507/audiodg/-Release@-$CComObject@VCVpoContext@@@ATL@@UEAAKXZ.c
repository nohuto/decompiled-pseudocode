/*
 * XREFs of ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400167B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140016750 (--_E-$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::Release(int *Block)
{
  unsigned int v2; // ebp
  CVpoContext *(__fastcall *v3)(CVpoContext *, char); // rbx

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v3 = *(CVpoContext *(__fastcall **)(CVpoContext *, char))(*(_QWORD *)Block + 40LL);
      if ( v3 == ATL::CComObject<CVpoContext>::`vector deleting destructor' )
        ATL::CComObject<CVpoContext>::`vector deleting destructor'((CVpoContext *)Block, v2 + 1);
      else
        v3((CVpoContext *)Block, 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
