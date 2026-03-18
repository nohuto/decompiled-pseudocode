/*
 * XREFs of HvpDoAllocateCell @ 0x14049ECFC
 * Callers:
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvpGetHCell @ 0x14049FC30 (HvpGetHCell.c)
 *     HvpDelistFreeCell @ 0x14049FF74 (HvpDelistFreeCell.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rsi
  ULONG_PTR v7; // r15
  struct _KTHREAD *CurrentThread; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int FreeCell; // r14d
  unsigned int *v12; // rbx
  char v13; // cl
  unsigned int v14; // r8d
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  ULONG_PTR v22; // rbx
  signed __int32 v23; // eax
  int v25; // eax
  ULONG_PTR v26; // rbx
  signed __int32 v27; // eax
  __int64 HCell; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  char v30; // [rsp+98h] [rbp+48h]
  _QWORD *v31; // [rsp+A8h] [rbp+58h]

  v31 = (_QWORD *)a4;
  LODWORD(v29) = -1;
  v5 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(BugCheckParameter2 + 2840);
  v30 = 0;
  v9 = KeAbPreAcquire(v7, 0LL, 0LL, a4);
  v10 = v9;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v7, 0) )
    ExpAcquireFastMutexContended(v7, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v7 + 8) = CurrentThread;
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&HCell, (__int64)&v29);
  if ( FreeCell != -1 )
  {
    v12 = (unsigned int *)HCell;
    v13 = v30;
LABEL_7:
    v14 = *v12;
    if ( (int)v5 + 8 > *v12 )
    {
      HvpDelistFreeCell(BugCheckParameter2, FreeCell);
      *v12 = -*v12;
    }
    else
    {
      v15 = FreeCell + v5;
      v16 = v14 - v5;
      *(unsigned int *)((char *)v12 + v5) = v14 - v5;
      *v12 = -(int)v5;
      if ( v13 )
      {
        HvpEnlistFreeCell(BugCheckParameter2, v15, 1);
      }
      else
      {
        v17 = (v14 >> 3) - 1;
        if ( v17 >= 0x10 )
        {
          v18 = v17 >> 4;
          if ( v18 > 0xFF )
          {
            v17 = 23;
          }
          else
          {
            _BitScanReverse(&v19, v18);
            v17 = v19 + 16;
          }
        }
        v20 = (v16 >> 3) - 1;
        if ( v20 >= 0x10 )
        {
          v21 = v20 >> 4;
          if ( v21 > 0xFF )
          {
            v20 = 23;
          }
          else
          {
            _BitScanReverse(&v21, v21);
            v20 = v21 + 16;
          }
        }
        if ( v17 != v20 )
        {
          HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell);
          HvpEnlistFreeCell(BugCheckParameter2, v15, 1);
        }
      }
    }
    v22 = *(_QWORD *)(BugCheckParameter2 + 2840);
    *(_QWORD *)(v22 + 8) = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)v22, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v22, v23);
    KeAbPostRelease(v22);
    if ( v31 )
    {
      *v31 = HCell + 4;
      *a5 = v29;
    }
    else
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    }
    return FreeCell;
  }
  v25 = HvpAddBin(BugCheckParameter2);
  if ( v25 != -1 )
  {
    FreeCell = v25 + 32;
    HCell = HvpGetHCell(BugCheckParameter2, (unsigned int)(v25 + 32), &v29);
    v12 = (unsigned int *)HCell;
    if ( HCell )
    {
      v13 = 1;
      goto LABEL_7;
    }
  }
  v26 = *(_QWORD *)(BugCheckParameter2 + 2840);
  *(_QWORD *)(v26 + 8) = 0LL;
  v27 = _InterlockedCompareExchange((volatile signed __int32 *)v26, 1, 0);
  if ( v27 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v26, v27);
  KeAbPostRelease(v26);
  return 0xFFFFFFFFLL;
}
