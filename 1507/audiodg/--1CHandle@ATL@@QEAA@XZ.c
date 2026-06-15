/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x140025DC8
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14001BA2C (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
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
