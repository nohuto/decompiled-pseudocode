/*
 * XREFs of PopSetHiberFileMcb @ 0x1405483F4
 * Callers:
 *     PopResizeHiberFile @ 0x14052EEAC (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, SIZE_T NumberOfBytes)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_1403035A0) = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72626968u);
    qword_140303598 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, P, (unsigned int)dword_1403035A0);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
