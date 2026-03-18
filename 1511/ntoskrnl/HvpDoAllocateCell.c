/*
 * XREFs of HvpDoAllocateCell @ 0x1403F4630
 * Callers:
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpDelistFreeCell @ 0x1403D963C (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     HvpGetHCell @ 0x140479BEC (HvpGetHCell.c)
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v5; // rsi
  char v8; // r12
  unsigned int FreeCell; // r14d
  unsigned int *HCell; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v18; // eax
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v21; // [rsp+88h] [rbp+20h]

  v21 = a4;
  v5 = a2;
  LODWORD(v20) = -1;
  v8 = 0;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v19, (__int64)&v20);
  if ( FreeCell == -1 )
  {
    v18 = HvpAddBin(BugCheckParameter2, v5, a3);
    if ( v18 == -1
      || (FreeCell = v18 + 32,
          (HCell = (unsigned int *)HvpGetHCell(BugCheckParameter2, (unsigned int)(v18 + 32), &v20)) == 0LL) )
    {
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
      return 0xFFFFFFFFLL;
    }
    v8 = 1;
  }
  else
  {
    HCell = (unsigned int *)v19;
  }
  v11 = *HCell;
  if ( (int)v5 + 8 > *HCell )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell);
    *HCell = -*HCell;
  }
  else
  {
    v12 = v11 - v5;
    *(unsigned int *)((char *)HCell + v5) = v11 - v5;
    *HCell = -(int)v5;
    if ( !v8 )
    {
      v13 = (v11 >> 3) - 1;
      if ( v13 >= 0x10 )
      {
        v14 = v13 >> 4;
        if ( v14 > 0xFF )
        {
          v13 = 23;
        }
        else
        {
          _BitScanReverse(&v14, v14);
          v13 = v14 + 16;
        }
      }
      v15 = (v12 >> 3) - 1;
      if ( v15 >= 0x10 )
      {
        v16 = v15 >> 4;
        if ( v16 > 0xFF )
        {
          v15 = 23;
        }
        else
        {
          _BitScanReverse(&v16, v16);
          v15 = v16 + 16;
        }
      }
      if ( v13 == v15 )
        goto LABEL_12;
      HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell);
    }
    HvpEnlistFreeCell(BugCheckParameter2, FreeCell + (unsigned int)v5, v12, a3, 1);
  }
LABEL_12:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  if ( v21 )
  {
    *v21 = HCell + 1;
    *a5 = v20;
  }
  else
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  }
  return FreeCell;
}
