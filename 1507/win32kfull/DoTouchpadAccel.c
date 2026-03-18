/*
 * XREFs of DoTouchpadAccel @ 0x1C01D0ED0
 * Callers:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 */

__int64 __fastcall DoTouchpadAccel(int *a1, int *a2, __int64 a3)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // sf
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  bool v17; // sf
  __int64 v18; // r11
  __int64 *v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8

  v5 = 0;
  result = MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 33LL, a3);
  v7 = result;
  if ( result )
  {
    v8 = (__int64)*a1 << 16;
    v9 = (__int64)*a2 << 16;
    v10 = v8;
    if ( (*a1 & 0x800000000000LL) != 0 )
      v10 = -65536LL * *a1;
    v11 = (__int64)*a2 << 16;
    if ( (*a2 & 0x800000000000LL) != 0 )
      v11 = -65536LL * *a2;
    if ( v10 <= v11 )
    {
      v12 = (__int64)*a2 << 16;
      v13 = (*a2 & 0x800000000000LL) != 0;
    }
    else
    {
      v12 = (__int64)*a1 << 16;
      v13 = (*a1 & 0x800000000000LL) != 0;
    }
    if ( v13 )
      v12 = -v12;
    v14 = (__int64)*a1 << 16;
    if ( (*a1 & 0x800000000000LL) != 0 )
      v14 = -65536LL * *a1;
    v15 = (__int64)*a2 << 16;
    if ( (*a2 & 0x800000000000LL) != 0 )
      v15 = -65536LL * *a2;
    if ( v14 >= v15 )
    {
      v16 = (__int64)*a2 << 16;
      v17 = (*a2 & 0x800000000000LL) != 0;
    }
    else
    {
      v16 = (__int64)*a1 << 16;
      v17 = (*a1 & 0x800000000000LL) != 0;
    }
    if ( v17 )
      v16 = -v16;
    result = v16 / 2;
    v18 = v12 + result;
    if ( v12 + result )
    {
      v19 = (__int64 *)(v7 + 320);
      do
      {
        if ( v18 <= *v19 )
          break;
        ++v5;
        ++v19;
      }
      while ( (unsigned __int64)v5 < 4 );
      v20 = v5 - 1;
      v21 = *(_QWORD *)(v7 + 8LL * v20 + 400) + (*(_QWORD *)(v7 + 8LL * v20 + 432) << 16) / v18;
      if ( dword_1C032F148 != v20 && v20 > dword_1C032F148 )
        v21 = (*(_QWORD *)(v7 + 8LL * dword_1C032F148 + 400)
             + (*(_QWORD *)(v7 + 8LL * dword_1C032F148 + 432) << 16) / v18
             + v21) >> 1;
      dword_1C032F148 = v20;
      v22 = v8 * v21;
      v23 = qword_1C032F138 + ((v9 * v21) >> 16);
      v24 = qword_1C032F140 + (v22 >> 16);
      if ( v24 < 0 )
        v25 = -(__int64)(-v24 & 0xFFFFFFFFFFFF0000uLL);
      else
        v25 = v24 & 0x7FFFFFFFFFFF0000LL;
      qword_1C032F140 = v24 - v25;
      if ( v24 < 0 )
        v26 = -(__int64)(-v24 & 0xFFFFFFFFFFFF0000uLL);
      else
        v26 = v24 & 0x7FFFFFFFFFFF0000LL;
      *a1 = v26 >> 16;
      if ( v23 < 0 )
        v27 = -(__int64)(-v23 & 0xFFFFFFFFFFFF0000uLL);
      else
        v27 = v23 & 0x7FFFFFFFFFFF0000LL;
      result = v23 - v27;
      qword_1C032F138 = v23 - v27;
      if ( v23 < 0 )
        v28 = -(__int64)(-v23 & 0xFFFFFFFFFFFF0000uLL);
      else
        v28 = v23 & 0x7FFFFFFFFFFF0000LL;
      *a2 = v28 >> 16;
    }
  }
  return result;
}
