/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x140024DD0
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x14001A4F4 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$4 @ 0x14001A500 (_CStreamGroup--CreateStream_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::~CHandle(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
