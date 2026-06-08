/*
 * XREFs of CpcReinitializeHandler @ 0x1C0002C70
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0004AB4 (WriteGenAddr.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReinitializeHandler(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 80) )
    result = WriteGenAddr(*(_QWORD *)(a1 + 96) + 176LL, 1LL);
  if ( *(_BYTE *)(a1 + 89) )
    return ((__int64 (*)(void))qword_1C0009528)();
  return result;
}
