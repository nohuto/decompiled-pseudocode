/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x140621C54
 * Callers:
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 * Callees:
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  ULONG_PTR PteAddress; // rax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v4, 0, 32);
  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_1403810E8 & 2) == 0 )
  {
    PteAddress = MiGetPteAddress(a1);
    MiDeleteSystemPagableVm(&dword_1402FF980, 0LL, PteAddress, v2, 8, v4);
    MiReturnResidentAvailable(v2);
    _InterlockedExchangeAdd64(&qword_1402FF5C0, v2);
  }
}
