/*
 * XREFs of ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x140026B7C
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$4 @ 0x14001AB70 (_CStreamGroup--CreateStream_--_1_--dtor$4.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$7 @ 0x14001ABB0 (_CStreamGroup--CreateStream_--_1_--dtor$7.c)
 * Callees:
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400265F4 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 */

CStreamInstance *__fastcall ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(CStreamInstance **a1)
{
  CStreamInstance *v2; // rcx
  CStreamInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CStreamInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
