/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14056D428
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14056D238 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (dword_1403A9134 & 2) != 0
      || (unsigned int)MiChargeResident(MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
