/*
 * XREFs of ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x14002592C
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$5 @ 0x14001A50C (_CStreamGroup--CreateStream_--_1_--dtor$5.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$6 @ 0x14001A54F (_CStreamGroup--CreateStream_--_1_--dtor$6.c)
 * Callees:
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400253F8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
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
