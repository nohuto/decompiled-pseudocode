/*
 * XREFs of ?get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x18002CD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_IsForegroundActivation(RTL_SRWLOCK *this, unsigned __int8 *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 9;
  AcquireSRWLockShared(this + 9);
  *a2 = BYTE1(this[7].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
