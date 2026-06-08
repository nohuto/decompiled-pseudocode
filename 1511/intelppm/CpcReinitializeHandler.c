/*
 * XREFs of CpcReinitializeHandler @ 0x1C0004340
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00013DC (WriteGenAddr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    WriteGenAddr((_BYTE *)(*(_QWORD *)(a1 + 96) + 176LL), 1LL);
  if ( *(_BYTE *)(a1 + 89) )
    ((void (*)(void))qword_1C000DE98)();
}
