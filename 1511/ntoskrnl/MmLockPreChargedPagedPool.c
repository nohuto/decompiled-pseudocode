/*
 * XREFs of MmLockPreChargedPagedPool @ 0x1404F5710
 * Callers:
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v4; // bx
  unsigned __int64 PteAddress; // rax

  result = (unsigned int)dword_1403810E8;
  v4 = a1;
  if ( (dword_1403810E8 & 2) == 0 )
  {
    PteAddress = MiGetPteAddress(a1);
    return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v4 & 0xFFF) + a2 + 4095) >> 12) - 1), 1);
  }
  return result;
}
