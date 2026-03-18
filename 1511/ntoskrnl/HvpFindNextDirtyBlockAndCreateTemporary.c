/*
 * XREFs of HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401AA964
 * Callers:
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x140022334 (HvpFindNextDirtyRun.c)
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvViewMapCopyToFileOffset @ 0x1401AAB98 (HvViewMapCopyToFileOffset.c)
 *     HvpProtectBin @ 0x1403D8E10 (HvpProtectBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1403F79BC (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpFindNextDirtyBlockAndCreateTemporary(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  int v6; // edi
  unsigned int v7; // r14d
  __int64 FreeBin; // rax
  int v9; // edx
  _QWORD *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rdx
  ULONG_PTR v14; // rbp
  __int64 CellMap; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  _DWORD *v18; // rbx
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  void *v21; // r15
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned int v24; // r12d
  unsigned int v26; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-34h] BYREF
  int v28; // [rsp+48h] [rbp-30h] BYREF

  if ( HvpFindNextDirtyRun(a2, a3, &v27, &v26, &v28) )
  {
    v7 = v27 << 9;
    if ( !HvpGetCellMap(BugCheckParameter2, v27 << 9) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x11E0uLL);
    FreeBin = HvpMapEntryGetFreeBin();
    if ( FreeBin )
      v12 = *(_DWORD *)(FreeBin + 20) >> 9;
    else
      v12 = v9 - (*v10 >> 9);
    if ( v12 < v26 )
    {
      while ( 1 )
      {
        v13 = v12 << 9;
        v14 = (unsigned int)v13;
        CellMap = HvpGetCellMap(BugCheckParameter2, v13);
        v17 = CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v14, 0x11F8uLL);
        v18 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        v19 = *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v19 )
        {
          if ( v7 >= (unsigned int)v14 )
            v23 = v7 - v14;
          else
            v23 = 0;
          if ( v23 < *(_DWORD *)((*(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            v24 = v26 << 9;
            do
            {
              if ( v23 + (unsigned int)v14 >= v24 )
                break;
              v6 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v23 + (_DWORD)v14 + 4096, v19 + v23, 4096LL);
              if ( v6 < 0 )
                return (unsigned int)v6;
              v23 += 4096;
            }
            while ( v23 < *(_DWORD *)(v19 + 8) );
          }
        }
        else
        {
          LOBYTE(v16) = 1;
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                  *(unsigned int *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8),
                  v16,
                  959794499LL);
          v21 = (void *)v20;
          if ( !v20 )
            return (unsigned int)-1073741670;
          v6 = HvpProtectBin(BugCheckParameter2, v18[2], 0, v14, v20, 1);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v21, (unsigned int)v18[2]);
            return (unsigned int)v6;
          }
          memmove(v21, v18, (unsigned int)v18[2]);
          v22 = HvpMapEntryGetFreeBin();
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v14, v22);
        }
        v12 = (unsigned int)(v14 + *(_DWORD *)(v17 + 32)) >> 9;
        if ( v12 >= v26 )
        {
          v11 = v27;
          break;
        }
      }
    }
    *a5 = (v11 + 8) << 9;
    v6 = 0;
    *a4 = v28 << 9;
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return (unsigned int)v6;
}
