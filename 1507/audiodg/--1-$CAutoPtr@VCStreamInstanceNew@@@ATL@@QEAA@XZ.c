/*
 * XREFs of ??1?$CAutoPtr@VCStreamInstanceNew@@@ATL@@QEAA@XZ @ 0x140026A50
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$4 @ 0x14001BA50 (_CStreamGroup--CreateStream_--_1_--dtor$4.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$7 @ 0x14001BA90 (_CStreamGroup--CreateStream_--_1_--dtor$7.c)
 * Callees:
 *     ??_GCStreamInstanceNew@@QEAAPEAXI@Z @ 0x14002681C (--_GCStreamInstanceNew@@QEAAPEAXI@Z.c)
 */

CStreamInstanceNew *__fastcall ATL::CAutoPtr<CStreamInstanceNew>::~CAutoPtr<CStreamInstanceNew>(
        CStreamInstanceNew **a1)
{
  CStreamInstanceNew *v2; // rcx
  CStreamInstanceNew *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CStreamInstanceNew::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
