/*
 * XREFs of DoTouchpadAccel @ 0x1C01D2B2C
 * Callers:
 *     ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738 (-GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 */

__int64 __fastcall DoTouchpadAccel(int *a1, int *a2)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // sf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  bool v16; // sf
  __int64 v17; // r11
  __int64 *v18; // rcx
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8

  v4 = 0;
  result = MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x21u);
  v6 = result;
  if ( result )
  {
    v7 = (__int64)*a1 << 16;
    v8 = (__int64)*a2 << 16;
    v9 = v7;
    if ( (*a1 & 0x800000000000LL) != 0 )
      v9 = -65536LL * *a1;
    v10 = (__int64)*a2 << 16;
    if ( (*a2 & 0x800000000000LL) != 0 )
      v10 = -65536LL * *a2;
    if ( v9 <= v10 )
    {
      v11 = (__int64)*a2 << 16;
      v12 = (*a2 & 0x800000000000LL) != 0;
    }
    else
    {
      v11 = (__int64)*a1 << 16;
      v12 = (*a1 & 0x800000000000LL) != 0;
    }
    if ( v12 )
      v11 = -v11;
    v13 = (__int64)*a1 << 16;
    if ( (*a1 & 0x800000000000LL) != 0 )
      v13 = -65536LL * *a1;
    v14 = (__int64)*a2 << 16;
    if ( (*a2 & 0x800000000000LL) != 0 )
      v14 = -65536LL * *a2;
    if ( v13 >= v14 )
    {
      v15 = (__int64)*a2 << 16;
      v16 = (*a2 & 0x800000000000LL) != 0;
    }
    else
    {
      v15 = (__int64)*a1 << 16;
      v16 = (*a1 & 0x800000000000LL) != 0;
    }
    if ( v16 )
      v15 = -v15;
    result = v15 / 2;
    v17 = v11 + result;
    if ( v11 + result )
    {
      v18 = (__int64 *)(v6 + 320);
      do
      {
        if ( v17 <= *v18 )
          break;
        ++v4;
        ++v18;
      }
      while ( (unsigned __int64)v4 < 4 );
      v19 = v4 - 1;
      v20 = *(_QWORD *)(v6 + 8LL * v19 + 400) + (*(_QWORD *)(v6 + 8LL * v19 + 432) << 16) / v17;
      if ( dword_1C032F198 != v19 && v19 > dword_1C032F198 )
        v20 = (*(_QWORD *)(v6 + 8LL * dword_1C032F198 + 400)
             + (*(_QWORD *)(v6 + 8LL * dword_1C032F198 + 432) << 16) / v17
             + v20) >> 1;
      dword_1C032F198 = v19;
      v21 = v7 * v20;
      v22 = qword_1C032F188 + ((v8 * v20) >> 16);
      v23 = qword_1C032F190 + (v21 >> 16);
      if ( v23 < 0 )
        v24 = -(__int64)(-v23 & 0xFFFFFFFFFFFF0000uLL);
      else
        v24 = v23 & 0x7FFFFFFFFFFF0000LL;
      qword_1C032F190 = v23 - v24;
      if ( v23 < 0 )
        v25 = -(__int64)(-v23 & 0xFFFFFFFFFFFF0000uLL);
      else
        v25 = v23 & 0x7FFFFFFFFFFF0000LL;
      *a1 = v25 >> 16;
      if ( v22 < 0 )
        v26 = -(__int64)(-v22 & 0xFFFFFFFFFFFF0000uLL);
      else
        v26 = v22 & 0x7FFFFFFFFFFF0000LL;
      result = v22 - v26;
      qword_1C032F188 = v22 - v26;
      if ( v22 < 0 )
        v27 = -(__int64)(-v22 & 0xFFFFFFFFFFFF0000uLL);
      else
        v27 = v22 & 0x7FFFFFFFFFFF0000LL;
      *a2 = v27 >> 16;
    }
  }
  return result;
}
