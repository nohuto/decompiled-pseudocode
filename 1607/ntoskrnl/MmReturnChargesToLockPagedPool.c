/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x14065A2D0
 * Callers:
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v4; // r8
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v5, 0, 32);
  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_1403A9134 & 2) == 0 )
  {
    MiGetPteAddress(a1);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v4, v2, 8, v5);
    MiReturnResidentAvailable(v2);
  }
}
