/*
 * XREFs of ?Uninitialize3DComponents@MPCProcessor@@UEAAXXZ @ 0x180048470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCProcessor::Uninitialize3DComponents(MPCProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
