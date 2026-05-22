/*
 * XREFs of ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIInputTarget@@@Z @ 0x18002CC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetLastHitTestedTarget(MPCInputProviderBase *this, struct IInputTarget *a2)
{
  __int64 v4; // rcx

  if ( *((struct IInputTarget **)this + 17) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
