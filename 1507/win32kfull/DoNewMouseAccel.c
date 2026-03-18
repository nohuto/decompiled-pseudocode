/*
 * XREFs of DoNewMouseAccel @ 0x1C00F75FC
 * Callers:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 */

__int64 __fastcall DoNewMouseAccel(int *a1, int *a2, _DWORD *a3)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // sf
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // sf
  __int64 v19; // r11
  __int64 *v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8

  v5 = 0;
  result = MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 33LL, (__int64)a3);
  a3[1] = 0;
  v8 = result;
  *a3 = 0;
  if ( result )
  {
    v9 = (__int64)*a1 << 16;
    v10 = (__int64)*a2 << 16;
    v11 = v9;
    if ( (*a1 & 0x800000000000LL) != 0 )
      v11 = -65536LL * *a1;
    v12 = (__int64)*a2 << 16;
    if ( (*a2 & 0x800000000000LL) != 0 )
      v12 = -65536LL * *a2;
    if ( v11 <= v12 )
    {
      v13 = (__int64)*a2 << 16;
      v14 = (*a2 & 0x800000000000LL) != 0;
    }
    else
    {
      v13 = (__int64)*a1 << 16;
      v14 = (*a1 & 0x800000000000LL) != 0;
    }
    if ( v14 )
      v13 = -v13;
    v15 = (__int64)*a1 << 16;
    if ( (*a1 & 0x800000000000LL) != 0 )
      v15 = -65536LL * *a1;
    v16 = (__int64)*a2 << 16;
    if ( (*a2 & 0x800000000000LL) != 0 )
      v16 = -65536LL * *a2;
    if ( v15 < v16 )
    {
      v17 = (__int64)*a1 << 16;
      v18 = (*a1 & 0x800000000000LL) != 0;
    }
    else
    {
      v17 = (__int64)*a2 << 16;
      v18 = (*a2 & 0x800000000000LL) != 0;
    }
    if ( v18 )
      v17 = -v17;
    result = v17 / 2;
    v19 = v13 + result;
    if ( v13 + result )
    {
      v20 = (__int64 *)(v8 + 176);
      do
      {
        if ( v19 <= *v20 )
          break;
        ++v5;
        ++v20;
      }
      while ( (unsigned __int64)v5 < 4 );
      v21 = v5 - 1;
      v22 = *(_QWORD *)(v8 + 8LL * v21 + 256) + (*(_QWORD *)(v8 + 8LL * v21 + 288) << 16) / v19;
      if ( dword_1C0322D40 != v21 && v21 > dword_1C0322D40 )
        v22 = (*(_QWORD *)(v8 + 8LL * dword_1C0322D40 + 256)
             + (*(_QWORD *)(v8 + 8LL * dword_1C0322D40 + 288) << 16) / v19
             + v22) >> 1;
      v23 = v22;
      dword_1C0322D40 = v21;
      v24 = qword_1C0322D30 + ((v10 * v22) >> 16);
      v25 = qword_1C0322D38 + ((v9 * v23) >> 16);
      if ( v25 < 0 )
        v26 = -(__int64)(-v25 & 0xFFFFFFFFFFFF0000uLL);
      else
        v26 = v25 & 0x7FFFFFFFFFFF0000LL;
      qword_1C0322D38 = v25 - v26;
      *a3 = v25 - v26;
      if ( v25 < 0 )
        v27 = -(__int64)(-v25 & 0xFFFFFFFFFFFF0000uLL);
      else
        v27 = v25 & 0x7FFFFFFFFFFF0000LL;
      *a1 = v27 >> 16;
      if ( v24 < 0 )
        v28 = -(__int64)(-v24 & 0xFFFFFFFFFFFF0000uLL);
      else
        v28 = v24 & 0x7FFFFFFFFFFF0000LL;
      result = v24 - v28;
      qword_1C0322D30 = v24 - v28;
      a3[1] = v24 - v28;
      if ( v24 < 0 )
        v29 = -(__int64)(-v24 & 0xFFFFFFFFFFFF0000uLL);
      else
        v29 = v24 & 0x7FFFFFFFFFFF0000LL;
      *a2 = v29 >> 16;
    }
  }
  return result;
}
