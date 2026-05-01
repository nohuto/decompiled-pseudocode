/*
 * XREFs of ?get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x18002D2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_Properties(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::ApplicationModel::Activation::MultiviewActivationProperties *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared((PSRWLOCK)this + 5);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
