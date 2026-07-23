/*
 * XREFs of HvpReviveDiscardedBin @ 0x140610950
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpProtectBin @ 0x1404F71D0 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 */

__int64 __fastcall HvpReviveDiscardedBin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r15d
  size_t v7; // rbp
  void *v8; // rdi
  unsigned __int64 PoolWithTag; // rbx
  int v10; // esi
  int Bin; // eax
  _DWORD *v12; // r14
  char v13; // al
  unsigned int v14; // r10d
  __int64 CellMap; // rax
  unsigned int v16; // r10d
  void *v18; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v6 = *(_DWORD *)(a2 + 20) + (a4 << 31);
  v7 = a3;
  if ( a4 == 1 )
  {
    v8 = 0LL;
    PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, a3, 0x62484D43u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    goto LABEL_7;
  }
  Bin = HvpAllocateBin(BugCheckParameter2, a3, a4, v6, 0x35314D43u, (__int64 *)&v19, (__int64 *)&v18);
  v8 = v18;
  v10 = Bin;
  PoolWithTag = v19;
  if ( Bin >= 0 )
  {
    if ( v18 )
    {
      v12 = v18;
      goto LABEL_8;
    }
LABEL_7:
    v12 = (_DWORD *)PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = 0;
LABEL_10:
      v10 = HvpProtectBin(BugCheckParameter2, v7, a4, v6, (unsigned __int64)v12, v13);
      if ( v10 >= 0 )
      {
        memset(v12, 0, v7);
        v12[7] = 0;
        *v12 = 1852400232;
        v12[1] = v6 & 0x7FFFFFFF;
        v14 = 0;
        v12[2] = v7;
        for ( v12[8] = v7 - 32; v14 < (unsigned int)v7; *(_QWORD *)(CellMap + 24) = v8 == 0LL )
        {
          CellMap = HvpGetCellMap(BugCheckParameter2, v14 + v6);
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v16 + v6, 0x282uLL);
          *(_QWORD *)CellMap = v16;
          *(_QWORD *)(CellMap + 8) = PoolWithTag;
          *(_QWORD *)(CellMap + 16) = v8;
          if ( v16 )
          {
            *(_DWORD *)(CellMap + 32) = 0;
          }
          else
          {
            *(_DWORD *)(CellMap + 32) = v7;
            *(_QWORD *)(CellMap + 8) = PoolWithTag | 1;
          }
          v14 = v16 + 4096;
        }
        PoolWithTag = 0LL;
        v8 = 0LL;
        v10 = 0;
      }
      goto LABEL_18;
    }
LABEL_8:
    v13 = 1;
    goto LABEL_10;
  }
LABEL_18:
  if ( PoolWithTag || v8 )
    HvpFreeBin(BugCheckParameter2, v7, a4, PoolWithTag, (unsigned __int64)v8);
  return (unsigned int)v10;
}
