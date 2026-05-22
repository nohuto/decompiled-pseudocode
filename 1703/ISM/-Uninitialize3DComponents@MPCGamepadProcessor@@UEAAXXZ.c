/*
 * XREFs of ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x18002EB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::Uninitialize3DComponents(MPCGamepadProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
