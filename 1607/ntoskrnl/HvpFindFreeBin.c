/*
 * XREFs of HvpFindFreeBin @ 0x14047D344
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
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
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // r8d
  __int64 *v22; // rax
  int v23; // r8d
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r11d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r11d
  __int64 v30; // r10
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned int v33; // r8d
  __int64 *v34; // rax
  int v35; // r8d

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
                CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v9 + 20) - 4096));
                if ( !CellMap )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(*(_DWORD *)(v9 + 20) - 4096), 0x627uLL);
                FreeBin = HvpMapEntryGetFreeBin(CellMap);
                v18 = (_DWORD *)FreeBin;
                if ( !FreeBin
                  || (*(_DWORD *)(FreeBin + 24) & 1) != 0
                  || (((*(_DWORD *)(FreeBin + 20) + 4096) ^ (*(_DWORD *)(FreeBin + 20)
                                                           + *(_DWORD *)(FreeBin + 16)
                                                           + 4095
                                                           + *(_DWORD *)(v9 + 16))) & 0xFFFC0000) != 0 )
                {
                  break;
                }
                v19 = *(_QWORD *)FreeBin;
                v20 = *(_QWORD **)(FreeBin + 8);
                if ( *(_DWORD **)(*(_QWORD *)v18 + 8LL) != v18 || (_DWORD *)*v20 != v18 )
                  __fastfail(3u);
                *v20 = v19;
                v21 = 0;
                for ( *(_QWORD *)(v19 + 8) = v20; v21 < v18[4]; *v22 = v9 )
                {
                  v22 = (__int64 *)HvpGetCellMap(BugCheckParameter2, v21 + v18[5]);
                  if ( !v22 )
                    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v23 + v18[5]), 0x64BuLL);
                  v21 = v23 + 4096;
                }
                *(_DWORD *)(v9 + 20) = v18[5];
                *(_DWORD *)(v9 + 16) += v18[4];
                (*(void (__fastcall **)(_DWORD *, __int64))(BugCheckParameter2 + 32))(v18, 32LL);
              }
              while ( *(_DWORD *)(v9 + 20) );
            }
            while ( (unsigned int)(*(_DWORD *)(v9 + 16) + *(_DWORD *)(v9 + 20)) < *(_DWORD *)(BugCheckParameter2
                                                                                            + v4
                                                                                            + 1400) )
            {
              v24 = HvpGetCellMap(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v9 + 16) + *(_DWORD *)(v9 + 20)));
              if ( !v24 )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v25 + v26), 0x65AuLL);
              v27 = HvpMapEntryGetFreeBin(v24);
              v30 = v27;
              if ( !v27
                || (*(_DWORD *)(v27 + 24) & 1) != 0
                || (((v29 + 4096) ^ (v28 + v29 + *(_DWORD *)(v27 + 16) + 4095)) & 0xFFFC0000) != 0 )
              {
                break;
              }
              v31 = *(_QWORD *)v27;
              v32 = *(_QWORD **)(v27 + 8);
              if ( *(_QWORD *)(v31 + 8) != v30 || *v32 != v30 )
                __fastfail(3u);
              *v32 = v31;
              v33 = 0;
              for ( *(_QWORD *)(v31 + 8) = v32; v33 < *(_DWORD *)(v30 + 16); *v34 = v9 )
              {
                v34 = (__int64 *)HvpGetCellMap(BugCheckParameter2, v33 + *(_DWORD *)(v30 + 20));
                if ( !v34 )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v35 + *(_DWORD *)(v30 + 20)), 0x678uLL);
                v33 = v35 + 4096;
              }
              *(_DWORD *)(v9 + 16) += *(_DWORD *)(v30 + 16);
              (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v30, 32LL);
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
