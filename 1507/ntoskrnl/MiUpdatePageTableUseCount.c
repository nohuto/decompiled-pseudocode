/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14005DCE0
 * Callers:
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 * Callees:
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int i; // r8d
  __int64 v3; // rax
  unsigned int v4; // r11d

  v1 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v1 <= (unsigned __int64)MmHighestUserAddress )
    {
      v3 = MI_GET_USED_PTES_HANDLE(a1);
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v3, v4);
      return 1LL;
    }
    v1 = (__int64)(v1 << 25) >> 16;
  }
  return 0LL;
}
