/*
 * XREFs of ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0019C44
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001AB08 (--1CTokenManager@@AEAA@XZ.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00F4608 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00F4704 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteOutstandingAnalogTokenInternal(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 27);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 27) = 0LL;
  }
}
