/*
 * XREFs of CpcReinitializeHandler @ 0x1C0003CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     WriteGenAddr @ 0x1C00035CC (WriteGenAddr.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    WriteGenAddr((_BYTE *)(*(_QWORD *)(a1 + 96) + 176LL), 1LL);
  if ( *(_BYTE *)(a1 + 89) )
    ((void (*)(void))qword_1C000DB58)();
}
