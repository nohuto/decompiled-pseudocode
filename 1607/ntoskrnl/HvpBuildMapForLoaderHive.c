/*
 * XREFs of HvpBuildMapForLoaderHive @ 0x140564290
 * Callers:
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvpInitMap @ 0x1404C5FEC (HvpInitMap.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpEnlistFreeCells @ 0x1404F7490 (HvpEnlistFreeCells.c)
 *     HvpCleanMap @ 0x140610824 (HvpCleanMap.c)
 */

__int64 __fastcall HvpBuildMapForLoaderHive(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // r15
  int inited; // ebp
  unsigned int v6; // r14d
  _DWORD *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 CellMap; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r8
  int v14; // eax

  v2 = *(_QWORD *)(BugCheckParameter2 + 56);
  inited = HvpInitMap(BugCheckParameter2, a2);
  if ( inited >= 0 )
  {
    v6 = 0;
    v7 = (_DWORD *)a2;
    v8 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( a2 >= a2 + v8 )
      return 0LL;
    while ( v7[2] <= (unsigned int)v8 - v6 && *v7 == 1852400232 && v7[1] == v6 )
    {
      v9 = a2 + v6;
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v6);
        v13 = CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x9BuLL);
        *(_QWORD *)(CellMap + 16) = 0LL;
        *(_QWORD *)CellMap = v12 + v11;
        *(_QWORD *)(CellMap + 8) = v9;
        if ( v11 == v9 )
        {
          *(_QWORD *)(CellMap + 8) = v9 | 1;
          v14 = 0;
          if ( v11 == a2 )
            v14 = v8;
          *(_DWORD *)(v13 + 32) = v14;
        }
        else
        {
          *(_DWORD *)(CellMap + 32) = 0;
        }
        *(_QWORD *)(v13 + 24) = 1LL;
        v6 += 4096;
      }
      while ( v11 + 4096 < v9 + (unsigned __int64)*(unsigned int *)(v9 + 8) );
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 2) == 0
        && !(unsigned __int8)HvpEnlistFreeCells(BugCheckParameter2, v9, *(_DWORD *)(v9 + 4)) )
      {
        inited = -1073741492;
        SetFailureLocation(v2, 0, 4, -1073741492, 16);
        *(_DWORD *)(v2 + 296) = *(_DWORD *)(v9 + 8);
        *(_DWORD *)(v2 + 300) = *(_DWORD *)(v9 + 4);
        *(_QWORD *)(v2 + 304) = v9;
        goto LABEL_22;
      }
      v7 = (_DWORD *)((char *)v7 + (unsigned int)v7[2]);
      if ( (unsigned __int64)v7 >= a2 + v8 )
        return 0LL;
    }
    inited = -1073741492;
    SetFailureLocation(v2, 0, 4, -1073741492, 0);
    *(_DWORD *)(v2 + 296) = v8;
    *(_DWORD *)(v2 + 300) = v6;
    *(_QWORD *)(v2 + 304) = v7;
LABEL_22:
    HvpCleanMap(BugCheckParameter2);
  }
  return (unsigned int)inited;
}
