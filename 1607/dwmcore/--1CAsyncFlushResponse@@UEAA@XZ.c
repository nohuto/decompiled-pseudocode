/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800AAAF0
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800AAA50 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
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
