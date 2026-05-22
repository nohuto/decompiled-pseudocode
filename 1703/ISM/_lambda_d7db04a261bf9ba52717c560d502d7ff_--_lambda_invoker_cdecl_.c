/*
 * XREFs of _lambda_d7db04a261bf9ba52717c560d502d7ff_::_lambda_invoker_cdecl_ @ 0x18006D340
 * Callers:
 *     <none>
 * Callees:
 *     ?TryToConnectToNavServer@ViewHeirarchy@@AEAA_NXZ @ 0x18006E148 (-TryToConnectToNavServer@ViewHeirarchy@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d7db04a261bf9ba52717c560d502d7ff_::_lambda_invoker_cdecl_(ViewHeirarchy *a1)
{
  __int64 v2; // rcx

  if ( ViewHeirarchy::TryToConnectToNavServer(a1) )
  {
    v2 = *((_QWORD *)a1 + 6);
    if ( v2 )
    {
      *((_QWORD *)a1 + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return 0LL;
}
