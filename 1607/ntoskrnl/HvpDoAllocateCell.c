/*
 * XREFs of HvpDoAllocateCell @ 0x140400C30
 * Callers:
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     HvpDelistFreeCell @ 0x140400838 (HvpDelistFreeCell.c)
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 *     HvpGetHCell @ 0x1404F85D0 (HvpGetHCell.c)
 */

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v5; // rsi
  char v7; // r12
  unsigned int FreeCell; // r14d
  unsigned int *HCell; // rdi
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v17; // eax
  __int64 v18[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v20; // [rsp+98h] [rbp+20h]

  v20 = a4;
  v5 = a2;
  v19 = 0xFFFFFFFFLL;
  v7 = 0;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)v18, (__int64)&v19);
  if ( FreeCell == -1 )
  {
    v17 = HvpAddBin(BugCheckParameter2);
    if ( v17 == -1
      || (FreeCell = v17 + 32,
          (HCell = (unsigned int *)HvpGetHCell(BugCheckParameter2, (unsigned int)(v17 + 32), &v19)) == 0LL) )
    {
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
      return 0xFFFFFFFFLL;
    }
    v7 = 1;
  }
  else
  {
    HCell = (unsigned int *)v18[0];
  }
  v10 = *HCell;
  if ( (int)v5 + 8 > *HCell )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell);
    *HCell = -*HCell;
  }
  else
  {
    v11 = v10 - v5;
    *(unsigned int *)((char *)HCell + v5) = v10 - v5;
    *HCell = -(int)v5;
    if ( !v7 )
    {
      v12 = (v10 >> 3) - 1;
      if ( v12 >= 0x10 )
      {
        v13 = v12 >> 4;
        if ( v13 > 0xFF )
        {
          v12 = 23;
        }
        else
        {
          _BitScanReverse(&v13, v13);
          v12 = v13 + 16;
        }
      }
      v14 = (v11 >> 3) - 1;
      if ( v14 >= 0x10 )
      {
        v15 = v14 >> 4;
        if ( v15 > 0xFF )
        {
          v14 = 23;
        }
        else
        {
          _BitScanReverse(&v15, v15);
          v14 = v15 + 16;
        }
      }
      if ( v12 == v14 )
        goto LABEL_14;
      HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell);
    }
    HvpEnlistFreeCell(BugCheckParameter2, FreeCell + (unsigned int)v5, 1);
  }
LABEL_14:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  if ( v20 )
  {
    *v20 = HCell + 1;
    *a5 = v19;
  }
  else
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  }
  return FreeCell;
}
