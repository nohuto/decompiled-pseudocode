/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800A6270
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800A61C0 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CAsyncFlushResponse *this)
{
  CMILRefCountBase *v2; // rcx

  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILRefCountBase::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
