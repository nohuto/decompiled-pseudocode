/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140569BDC
 * Callers:
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)dword_1403D00D8;
  if ( (dword_1403D00D8 & 2) == 0 )
    return MiLockCode(
             0,
             (ULONG_PTR *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
             ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * ((((a1 & 0xFFF) + a2 + 4095) >> 12) - 1),
             1);
  return result;
}
