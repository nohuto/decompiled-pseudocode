/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1405C63C8
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1405C61D8 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 */

__int64 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ecx

  v4 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_1403D00D8 & 2) != 0 )
    return 1LL;
  v5 = MiChargeResident(MiSystemPartition, v4, 1024LL, a4);
  v6 = 0;
  if ( v5 )
  {
    v6 = 1;
    _InterlockedExchangeAdd64(&qword_14034FA50, v4);
  }
  return v6;
}
