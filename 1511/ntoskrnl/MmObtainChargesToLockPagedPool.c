/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14054E540
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14054E350 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ecx

  v2 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_1403810E8 & 2) != 0 )
    return 1LL;
  v3 = MiChargeResident(MiSystemPartition, v2, 1024LL);
  v4 = 0;
  if ( v3 )
  {
    v4 = 1;
    _InterlockedExchangeAdd64(&qword_1402FF5B0, v2);
  }
  return v4;
}
