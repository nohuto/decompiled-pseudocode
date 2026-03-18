/*
 * XREFs of DoTouchpadAccel @ 0x1C01CA6AC
 * Callers:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 */

__int64 __fastcall DoTouchpadAccel(int *a1, int *a2)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r11
  signed __int64 v9; // r8
  signed __int64 v10; // rcx
  signed __int64 v11; // rax
  bool v12; // cc
  __int64 v13; // r10
  __int64 *v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8

  v4 = 0;
  result = MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x21u);
  v6 = result;
  if ( result )
  {
    v7 = (__int64)*a2 << 16;
    v8 = (__int64)*a1 << 16;
    v9 = abs64(v7);
    v10 = v9;
    v11 = abs64(v8);
    v12 = v11 <= v9;
    if ( v11 < v9 )
      v9 = v11;
    if ( !v12 )
      v10 = v11;
    result = v9 / 2;
    v13 = v10 + v9 / 2;
    if ( v13 )
    {
      v14 = (__int64 *)(v6 + 320);
      do
      {
        if ( v13 <= *v14 )
          break;
        ++v4;
        ++v14;
      }
      while ( (unsigned __int64)v4 < 4 );
      v15 = v4 - 1;
      v16 = *(_QWORD *)(v6 + 8LL * v15 + 400) + (*(_QWORD *)(v6 + 8LL * v15 + 432) << 16) / v13;
      if ( dword_1C0334620 != v15 && v15 > dword_1C0334620 )
        v16 = (*(_QWORD *)(v6 + 8LL * dword_1C0334620 + 400)
             + (*(_QWORD *)(v6 + 8LL * dword_1C0334620 + 432) << 16) / v13
             + v16) >> 1;
      v17 = v16;
      dword_1C0334620 = v15;
      v18 = qword_1C0334610 + ((v7 * v16) >> 16);
      v19 = qword_1C0334618 + ((v8 * v17) >> 16);
      if ( v19 < 0 )
        v20 = -(__int64)(-v19 & 0xFFFFFFFFFFFF0000uLL);
      else
        v20 = v19 & 0x7FFFFFFFFFFF0000LL;
      qword_1C0334618 = v19 - v20;
      if ( v19 < 0 )
        v21 = -(__int64)(-v19 & 0xFFFFFFFFFFFF0000uLL);
      else
        v21 = v19 & 0x7FFFFFFFFFFF0000LL;
      *a1 = v21 >> 16;
      if ( v18 < 0 )
        v22 = -(__int64)(-v18 & 0xFFFFFFFFFFFF0000uLL);
      else
        v22 = v18 & 0x7FFFFFFFFFFF0000LL;
      result = v18 - v22;
      qword_1C0334610 = v18 - v22;
      if ( v18 < 0 )
        v23 = -(__int64)(-v18 & 0xFFFFFFFFFFFF0000uLL);
      else
        v23 = v18 & 0x7FFFFFFFFFFF0000LL;
      *a2 = v23 >> 16;
    }
  }
  return result;
}
