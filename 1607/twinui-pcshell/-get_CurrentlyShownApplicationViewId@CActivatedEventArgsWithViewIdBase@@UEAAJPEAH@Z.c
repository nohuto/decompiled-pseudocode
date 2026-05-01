/*
 * XREFs of ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z @ 0x18002D080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_CurrentlyShownApplicationViewId(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 8;
  AcquireSRWLockShared(this + 8);
  *a2 = (int)this[4].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
