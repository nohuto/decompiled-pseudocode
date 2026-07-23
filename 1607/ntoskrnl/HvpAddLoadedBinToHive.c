/*
 * XREFs of HvpAddLoadedBinToHive @ 0x1406125E4
 * Callers:
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 */

__int64 __fastcall HvpAddLoadedBinToHive(ULONG_PTR BugCheckParameter2, unsigned int *Src, int a3, int **a4)
{
  int Bin; // ebx
  void *v9; // rbx
  int *v10; // rdi
  unsigned __int64 v11; // r9
  void *v12; // rax
  void *v14; // [rsp+40h] [rbp-28h] BYREF
  int *v15; // [rsp+78h] [rbp+10h] BYREF

  Bin = HvpAllocateBin(BugCheckParameter2, Src[2], 0, a3, 0x31334D43u, (__int64 *)&v15, (__int64 *)&v14);
  if ( Bin < 0 )
  {
    v12 = v14;
    v11 = (unsigned __int64)v15;
  }
  else
  {
    v9 = v14;
    v10 = v15;
    if ( v14 )
      v10 = (int *)v14;
    memmove(v10, Src, Src[2]);
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v15, (__int64)v9, v10[2], a3, 0LL);
    v11 = 0LL;
    *a4 = v10;
    v12 = 0LL;
    Bin = 0;
  }
  if ( v11 || v12 )
    HvpFreeBin(BugCheckParameter2, Src[2], 0, v11, (unsigned __int64)v12);
  return (unsigned int)Bin;
}
