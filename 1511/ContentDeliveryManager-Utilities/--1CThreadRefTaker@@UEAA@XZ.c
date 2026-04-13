/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x180008498
 * Callers:
 *     _Windows::Internal::ComTaskPool::CRemoteReleaseStub::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800289C3 (_Windows--Internal--ComTaskPool--CRemoteReleaseStub--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall CThreadRefTaker::~CThreadRefTaker(CThreadRefTaker *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 1) = 0LL;
  }
}
