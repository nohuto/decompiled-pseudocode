/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180026E9C
 * Callers:
 *     __lambda_013c46c4876e793d779fba5076862f22_::operator()_::_1_::dtor$0 @ 0x180031890 (__lambda_013c46c4876e793d779fba5076862f22_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6175e87fa178b2ae2c0b636abea7d3fd___::Run_::_1_::dtor$0 @ 0x180031914 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6175e87fa178b2ae2c0b636abea7d3fd___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5___::Run_::_1_::dtor$0 @ 0x1800319F2 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5___--Run_-.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(void **this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx

  v2 = (wil::details::ThreadFailureCallbackHolder *)(this + 4);
  if ( *((_DWORD *)v2 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
  if ( *((_BYTE *)this + 24) )
  {
    free(this[2]);
    *((_BYTE *)this + 24) = 0;
  }
  this[2] = 0LL;
}
