/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCInputTarget@@@Z @ 0x18002CBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCInputTarget *a2)
{
  __int64 v4; // rcx

  if ( *((struct IMPCInputTarget **)this + 16) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
