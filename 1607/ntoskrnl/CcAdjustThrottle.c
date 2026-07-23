/*
 * XREFs of CcAdjustThrottle @ 0x14006E2A8
 * Callers:
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcAdjustThrottle(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  unsigned int v6; // r9d
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx

  v2 = 0;
  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16) - CcPagesYetToWrite;
  v7 = *(unsigned int *)(a2 + 24);
  v8 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 16);
  if ( CcPagesSkippedDueToHotSpot )
  {
    if ( (unsigned __int64)CcPagesSkippedDueToHotSpot > 0xFFFFFFFF || v6 <= (unsigned __int64)CcPagesSkippedDueToHotSpot )
      v6 = 0;
    else
      v6 -= CcPagesSkippedDueToHotSpot;
    CcPagesSkippedDueToHotSpot = 0LL;
  }
  if ( v6 < 0x200 )
  {
    v6 = 512;
    v2 = 1;
  }
  v11 = v6 >> 2;
  if ( v11 > v8 )
    v11 = v8;
  if ( v3 >= v7 + ((3 * (v8 - v7)) >> 2) )
  {
    v8 -= v11;
    if ( v8 <= v10 )
      v8 = v10;
  }
  else if ( v9 >= v8 )
  {
    if ( v3 < v8 - v11 && v5 <= v8 )
    {
      v18 = v9 - v8;
      v19 = (v8 - v3) >> 3;
      if ( v19 <= v11 )
      {
        if ( v18 > v11 )
        {
          v8 += v11;
          goto LABEL_12;
        }
      }
      else if ( v18 > v19 )
      {
        v8 += v19;
        goto LABEL_12;
      }
      v8 = v9;
    }
  }
  else
  {
    v12 = v8 - v9;
    if ( v2 )
    {
      if ( v12 >> 2 > 0x5000 )
        v12 >>= 2;
    }
    else if ( v8 - v11 >= v9 )
    {
      v12 = v11;
    }
    v8 -= v12;
  }
LABEL_12:
  v13 = CcAverageDirtyPages;
  v14 = (v8 >> 1) + (v8 >> 2);
  *(_QWORD *)a2 = v8;
  if ( v14 > 0xFFFFFFFF )
    LODWORD(v14) = -1;
  v15 = (unsigned __int64)(CcAverageAvailablePages + v13) >> 1;
  *(_DWORD *)(a2 + 24) = v14;
  v16 = (unsigned __int8)dword_1403A9160;
  result = v15 >> 2;
  *(_QWORD *)(a2 + 8) = v15;
  if ( v15 >> 2 < 0x8000 )
    result = 0x8000LL;
  *(_QWORD *)(a2 + 16) = result;
  if ( v15 < result || !v16 )
    *(_QWORD *)(a2 + 8) = result;
  return result;
}
