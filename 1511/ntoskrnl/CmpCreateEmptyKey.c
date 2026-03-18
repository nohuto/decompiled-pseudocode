/*
 * XREFs of CmpCreateEmptyKey @ 0x1405E1F44
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1405E22EC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpNameSize @ 0x1403F4458 (CmpNameSize.c)
 *     CmpCopyName @ 0x1403F45B4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpCreateEmptyKey(ULONG_PTR BugCheckParameter2, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // r11d
  unsigned int Cell; // r14d
  _DWORD *v10; // rsi
  int v11; // rax^4
  _DWORD *v12; // rbx
  unsigned __int16 v13; // ax
  signed __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // esi
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  int v22; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v24; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v25; // [rsp+40h] [rbp-10h] BYREF

  v23 = -1;
  v22 = -1;
  v6 = CmpNameSize(a2);
  Cell = HvAllocateCell(BugCheckParameter2, (unsigned int)v6 + 76, v7, (__int64)&v25, (__int64)&v23);
  if ( Cell == -1 )
    return 0xFFFFFFFFLL;
  v10 = v25;
  *v25 = 33581934;
  v11 = MEMORY[0xFFFFF78000000018];
  v12 = v25;
  v25[1] = MEMORY[0xFFFFF78000000014];
  v12[2] = v11;
  v12[4] = a3;
  *(_QWORD *)(v12 + 5) = 0LL;
  v12[7] = -1;
  *((_QWORD *)v12 + 4) = 0xFFFFFFFFLL;
  v12[10] = -1;
  v12[11] = -1;
  v12[12] = -1;
  *((_WORD *)v12 + 37) = 0;
  *((_QWORD *)v12 + 7) = 0LL;
  v12[16] = 0;
  *((_WORD *)v12 + 26) = 0;
  v12[13] &= 0xFF00FFFF;
  *((_BYTE *)v12 + 55) = 0;
  v13 = CmpCopyName((_BYTE *)v12 + 76, (const void **)a2);
  *((_WORD *)v12 + 36) = v13;
  if ( v13 < *a2 )
    *((_WORD *)v10 + 1) |= 0x20u;
  if ( a3 == -1 )
    *((_WORD *)v10 + 1) |= 0xCu;
  v14 = (signed __int64 *)(BugCheckParameter2 + 2952);
  v15 = KeAbPreAcquire(BugCheckParameter2 + 2952, 0LL, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 2952), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 2952), v15, BugCheckParameter2 + 2952);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v22);
  if ( v17 && CmpFindSecurityCellCacheIndex(BugCheckParameter2, *(_DWORD *)(v17 + 44), &v24) )
    v18 = CmpAssignSecurityDescriptor(
            BugCheckParameter2,
            Cell,
            (__int64)v25,
            (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v24 + 8) + 32LL));
  else
    v18 = -1073741670;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
  _m_prefetchw(v14);
  v19 = *v14;
  v20 = *v14 - 16;
  if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (v19 & 2) != 0 || (v21 = *v14, v21 != _InterlockedCompareExchange64(v14, v20, v19)) )
    ExfReleasePushLock((_QWORD *)(BugCheckParameter2 + 2952));
  KeAbPostRelease(BugCheckParameter2 + 2952);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
  if ( v18 < 0 )
  {
    HvFreeCell(BugCheckParameter2, Cell);
    return (unsigned int)-1;
  }
  return Cell;
}
