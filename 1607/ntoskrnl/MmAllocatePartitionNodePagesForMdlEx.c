/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x1400A8A24
 * Callers:
 *     MmAllocateNodePagesForMdlEx @ 0x1400A89F4 (MmAllocateNodePagesForMdlEx.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        int **BugCheckParameter2)
{
  int v8; // edi
  int v9; // r11d
  int *v10; // rbx

  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v8 = a5 == -1 || a5 > 2 ? 3 : MiPlatformCacheAttributes[a5];
  v9 = a7;
  if ( (a7 & 0xFFFFFC00) != 0 )
    return 0LL;
  if ( (a7 & 0x20) != 0 )
  {
    v9 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v9 = a7 | 0x14;
    }
  }
  if ( (v9 & 0x100) != 0 && ((v9 & 4) != 0 || KeGetCurrentIrql()) )
    return 0LL;
  if ( BugCheckParameter2 )
  {
    v10 = *BugCheckParameter2;
    if ( (*BugCheckParameter2)[2] != 305535296 || !*((_QWORD *)v10 + 2) || (v10[1] & 1) != 0 )
      KeBugCheckEx(0x1Au, 0x1300uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v10 = MiSystemPartition;
  }
  return MiAllocatePagesForMdl((_DWORD)v10, a1, a2, a3, a4, v8, a6, v9);
}
