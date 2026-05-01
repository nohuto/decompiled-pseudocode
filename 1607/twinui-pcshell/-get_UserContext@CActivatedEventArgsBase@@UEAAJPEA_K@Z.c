/*
 * XREFs of ?get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z @ 0x18002CE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_UserContext(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 8;
  AcquireSRWLockShared(this + 8);
  *a2 = this[7].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
