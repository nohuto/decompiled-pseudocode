/*
 * XREFs of CpcReinitializeHandler @ 0x1C0004920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0004714 (WriteGenAddrMaybeHidden.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 92) )
    WriteGenAddrMaybeHidden(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 104) + 176LL), 1LL);
  if ( *(_BYTE *)(a1 + 102) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 66LL) )
      ((void (*)(void))qword_1C000EEA0)();
  }
}
