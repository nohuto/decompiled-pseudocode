/*
 * XREFs of ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x18000894C
 * Callers:
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x18002193C (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023E60 (-Destroy@-$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::StoredFailureInfo::~StoredFailureInfo(wil::StoredFailureInfo *this)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free(*((void **)this + 18));
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
}
