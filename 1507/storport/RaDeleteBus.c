/*
 * XREFs of RaDeleteBus @ 0x1C00535E4
 * Callers:
 *     RaidAdapterHack @ 0x1C00214D8 (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1C0023B14 (RaidDeleteAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

void *__fastcall RaDeleteBus(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
