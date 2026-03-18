/*
 * XREFs of HvFreeHive @ 0x1403D8128
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1405DEC98 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x1405E6A0C (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CmpFreeBootRegistry @ 0x1401AB670 (CmpFreeBootRegistry.c)
 *     HvpFreeMap @ 0x1403D4688 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x1403D82E0 (HvpFreeBin.c)
 *     CmpFree @ 0x1403D8324 (CmpFree.c)
 *     CmpReleaseGlobalQuota @ 0x1403D8344 (CmpReleaseGlobalQuota.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvViewMapCleanup @ 0x1404C3A78 (HvViewMapCleanup.c)
 */

__int64 __fastcall HvFreeHive(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  __int64 *v3; // rsi
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 CellMap; // rbp
  __int64 FreeBin; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v18; // eax
  unsigned int v19; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+80h] [rbp+18h]

  v3 = (__int64 *)(BugCheckParameter2 + 1408);
  v5 = 0;
  v6 = a2 != 0;
  v7 = 0;
  *(_DWORD *)(BugCheckParameter2 + 144) &= ~1u;
  v8 = *(_DWORD *)(BugCheckParameter2 + 144) & 0x10;
  v19 = (unsigned __int8)v6;
  do
  {
    v9 = v7;
    v21 = v7 + *((_DWORD *)v3 - 2);
    if ( *v3 && v7 + *((_DWORD *)v3 - 2) > v7 )
    {
      do
      {
        if ( v8 )
          break;
        CellMap = HvpGetCellMap(BugCheckParameter2, v9);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0xA0uLL);
        FreeBin = HvpMapEntryGetFreeBin();
        v13 = FreeBin;
        if ( FreeBin )
        {
          v18 = *(_DWORD *)(FreeBin + 16);
          v9 += v18;
          if ( (*(_DWORD *)(v13 + 24) & 1) != 0 )
            HvpFreeBin(
              BugCheckParameter2,
              v18,
              v5,
              *(_QWORD *)(CellMap + 8) & 0xFFFFFFF0,
              *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          else
            CmpReleaseGlobalQuota(v18);
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v13, 32LL);
        }
        else
        {
          HvpFreeBin(
            BugCheckParameter2,
            *(_DWORD *)(v12 + 32),
            v5,
            *(_DWORD *)(v12 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          v9 += *(_DWORD *)(CellMap + 32);
        }
      }
      while ( v9 < v21 );
      v14 = (unsigned int)((*((_DWORD *)v3 - 2) >> 12) - 1) >> 9;
      HvpFreeMap(BugCheckParameter2, *v3, 0, v14);
      if ( v14 )
      {
        CmpFree(*v3, 0x2000LL);
        *v3 = 0LL;
      }
      v6 = v19;
    }
    *((_DWORD *)v3 - 2) = 0;
    ++v5;
    v3 += 79;
    v7 += 0x80000000;
  }
  while ( v5 <= v6 );
  *(_BYTE *)(BugCheckParameter2 + 124) &= ~4u;
  LOBYTE(a3) = 1;
  HvViewMapCleanup(BugCheckParameter2 + 200, BugCheckParameter2, a3);
  if ( v8 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
    *(_QWORD *)(BugCheckParameter2 + 64),
    *(unsigned int *)(BugCheckParameter2 + 116));
  v15 = *(_QWORD *)(BugCheckParameter2 + 80);
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  if ( v15 )
  {
    CmpFree(v15, *(unsigned int *)(BugCheckParameter2 + 92));
    *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  }
  v16 = *(_QWORD *)(BugCheckParameter2 + 104);
  if ( v16 )
  {
    CmpFree(v16, *(unsigned int *)(BugCheckParameter2 + 92));
    *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
  }
  return HvpFreeHiveFreeDisplay(BugCheckParameter2, a2);
}
