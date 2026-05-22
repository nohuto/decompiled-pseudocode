/*
 * XREFs of ?SecureModeChangedEvent@SecureModeListener@Holographic@Shell@Internal@Windows@@QEAAX_N@Z @ 0x180007538
 * Callers:
 *     ?_UpdateSecureModeActive@SecureModeListener@Holographic@Shell@Internal@Windows@@AEAAX_N@Z @ 0x18002F8AC (-_UpdateSecureModeActive@SecureModeListener@Holographic@Shell@Internal@Windows@@AEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Shell::Holographic::SecureModeListener::SecureModeChangedEvent(
        Windows::Internal::Shell::Holographic::SecureModeListener *this,
        __int64 a2)
{
  char v2; // di
  __int64 i; // rbx

  v2 = a2;
  for ( i = *((_QWORD *)this + 8); i; i = *(_QWORD *)(i + 8) )
  {
    LOBYTE(a2) = v2;
    (**(void (__fastcall ***)(__int64, __int64))i)(i, a2);
  }
}
