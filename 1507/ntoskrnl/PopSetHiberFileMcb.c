/*
 * XREFs of PopSetHiberFileMcb @ 0x14056C280
 * Callers:
 *     PopResizeHiberFile @ 0x140564F6C (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, SIZE_T NumberOfBytes)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_14032E8C0) = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72626968u);
    qword_14032E8B8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, P, (unsigned int)dword_14032E8C0);
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
