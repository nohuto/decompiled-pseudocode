/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x1406A1364
 * Callers:
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_1403D00D8 & 2) == 0 )
  {
    MiDeleteSystemPagableVm(
      (__int64)dword_14034FE40,
      0LL,
      (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      ((a1 & 0xFFF) + a2 + 4095) >> 12,
      8,
      v3);
    MiReturnResidentAvailable(v2);
    _InterlockedExchangeAdd64(&qword_14034FA60, v2);
  }
}
