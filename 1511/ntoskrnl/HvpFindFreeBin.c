/*
 * XREFs of HvpFindFreeBin @ 0x1403D5908
 * Callers:
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpFindFreeBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int64 *v7; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  int v15; // r8d
  __int64 FreeBin; // rax
  _DWORD *v17; // r10
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // r8d
  __int64 *CellMap; // rax
  int v22; // r8d
  int v23; // r8d
  int v24; // r11d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r11d
  __int64 v28; // r10
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int v31; // r8d
  __int64 *v32; // rax
  int v33; // r8d

  v4 = 632LL * a3;
  v7 = (__int64 *)(v4 + BugCheckParameter2 + 2008);
LABEL_2:
  v9 = *v7;
  v10 = 0;
  v11 = *v7;
  if ( (__int64 *)*v7 == v7 )
  {
LABEL_3:
    if ( v10 >= a2 )
    {
      while ( (__int64 *)v9 != v7 )
      {
        if ( (*(_DWORD *)(v9 + 24) & 1) == 0 )
        {
          v14 = *(_DWORD *)(v9 + 20);
          if ( v14 + *(_DWORD *)(v9 + 16) <= *(_DWORD *)(BugCheckParameter2 + v4 + 1400) )
          {
            if ( !HvpGetCellMap(BugCheckParameter2, v14) )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, *(unsigned int *)(v9 + 20), 0x620uLL);
            if ( v15 )
            {
              do
              {
                if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v9 + 20) - 4096)) )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(*(_DWORD *)(v9 + 20) - 4096), 0x627uLL);
                FreeBin = HvpMapEntryGetFreeBin();
                v17 = (_DWORD *)FreeBin;
                if ( !FreeBin
                  || (*(_DWORD *)(FreeBin + 24) & 1) != 0
                  || (((*(_DWORD *)(FreeBin + 20) + 4096) ^ (*(_DWORD *)(FreeBin + 20)
                                                           + *(_DWORD *)(FreeBin + 16)
                                                           + 4095
                                                           + *(_DWORD *)(v9 + 16))) & 0xFFFC0000) != 0 )
                {
                  break;
                }
                v18 = *(_QWORD *)FreeBin;
                v19 = *(_QWORD **)(FreeBin + 8);
                if ( *(_DWORD **)(*(_QWORD *)v17 + 8LL) != v17 || (_DWORD *)*v19 != v17 )
                  __fastfail(3u);
                *v19 = v18;
                v20 = 0;
                for ( *(_QWORD *)(v18 + 8) = v19; v20 < v17[4]; *CellMap = v9 )
                {
                  CellMap = (__int64 *)HvpGetCellMap(BugCheckParameter2, v20 + v17[5]);
                  if ( !CellMap )
                    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v22 + v17[5]), 0x64BuLL);
                  v20 = v22 + 4096;
                }
                *(_DWORD *)(v9 + 20) = v17[5];
                *(_DWORD *)(v9 + 16) += v17[4];
                (*(void (__fastcall **)(_DWORD *, __int64))(BugCheckParameter2 + 32))(v17, 32LL);
              }
              while ( *(_DWORD *)(v9 + 20) );
            }
            while ( (unsigned int)(*(_DWORD *)(v9 + 20) + *(_DWORD *)(v9 + 16)) < *(_DWORD *)(BugCheckParameter2
                                                                                            + v4
                                                                                            + 1400) )
            {
              if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v9 + 16) + *(_DWORD *)(v9 + 20))) )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v23 + v24), 0x65AuLL);
              v25 = HvpMapEntryGetFreeBin();
              v28 = v25;
              if ( !v25
                || (*(_DWORD *)(v25 + 24) & 1) != 0
                || (((v27 + 4096) ^ (v26 + v27 + *(_DWORD *)(v25 + 16) + 4095)) & 0xFFFC0000) != 0 )
              {
                break;
              }
              v29 = *(_QWORD *)v25;
              v30 = *(_QWORD **)(v25 + 8);
              if ( *(_QWORD *)(v29 + 8) != v28 || *v30 != v28 )
                __fastfail(3u);
              *v30 = v29;
              v31 = 0;
              for ( *(_QWORD *)(v29 + 8) = v30; v31 < *(_DWORD *)(v28 + 16); *v32 = v9 )
              {
                v32 = (__int64 *)HvpGetCellMap(BugCheckParameter2, v31 + *(_DWORD *)(v28 + 20));
                if ( !v32 )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v33 + *(_DWORD *)(v28 + 20)), 0x678uLL);
                v31 = v33 + 4096;
              }
              *(_DWORD *)(v9 + 16) += *(_DWORD *)(v28 + 16);
              (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v28, 32LL);
            }
            if ( *(_DWORD *)(v9 + 16) >= a2 )
              goto LABEL_2;
          }
        }
        v9 = *(_QWORD *)v9;
      }
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v11 + 16);
      v10 += v13;
      if ( v13 >= a2 && *(_DWORD *)(v11 + 20) + v13 <= *(_DWORD *)(BugCheckParameter2 + v4 + 1400) )
        break;
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == v7 )
        goto LABEL_3;
    }
    result = v11;
    *a4 = *(_DWORD *)(v11 + 16);
  }
  return result;
}
