/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x180003E1C
 * Callers:
 *     _Windows::Internal::ComTaskPool::CRemoteReleaseStub::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180059B49 (_Windows--Internal--ComTaskPool--CRemoteReleaseStub--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThreadRefTaker::~CThreadRefTaker(CThreadRefTaker *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
