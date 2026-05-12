/*
 * XREFs of RaDeleteBus @ 0x1C005AB54
 * Callers:
 *     RaidAdapterHack @ 0x1C0015B44 (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1C0029A30 (RaidDeleteAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AD80 (memset.c)
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
