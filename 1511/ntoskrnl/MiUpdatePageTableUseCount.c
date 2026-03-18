/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14001EC38
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  unsigned int i; // r8d
  __int64 v5; // rax

  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= (unsigned __int64)MmHighestUserAddress )
    {
      v5 = MI_GET_USED_PTES_HANDLE(a1);
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v5, a2);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
