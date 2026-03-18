/*
 * XREFs of DoNewMouseAccel @ 0x1C00AEB48
 * Callers:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 */

__int64 __fastcall DoNewMouseAccel(int *a1, int *a2, _DWORD *a3)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r11
  signed __int64 v11; // r8
  signed __int64 v12; // rcx
  signed __int64 v13; // rax
  bool v14; // cc
  __int64 v15; // r10
  __int64 *v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8

  v5 = 0;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorFromPoint)(gptCursorAsync, 33LL);
  a3[1] = 0;
  v8 = result;
  *a3 = 0;
  if ( result )
  {
    v9 = (__int64)*a2 << 16;
    v10 = (__int64)*a1 << 16;
    v11 = abs64(v9);
    v12 = v11;
    v13 = abs64(v10);
    v14 = v13 <= v11;
    if ( v13 < v11 )
      v11 = v13;
    if ( !v14 )
      v12 = v13;
    result = v11 / 2;
    v15 = v12 + v11 / 2;
    if ( v15 )
    {
      v16 = (__int64 *)(v8 + 176);
      do
      {
        if ( v15 <= *v16 )
          break;
        ++v5;
        ++v16;
      }
      while ( (unsigned __int64)v5 < 4 );
      v17 = v5 - 1;
      v18 = *(_QWORD *)(v8 + 8LL * v17 + 256) + (*(_QWORD *)(v8 + 8LL * v17 + 288) << 16) / v15;
      if ( dword_1C0328F40 != v17 && v17 > dword_1C0328F40 )
        v18 = (*(_QWORD *)(v8 + 8LL * dword_1C0328F40 + 256)
             + (*(_QWORD *)(v8 + 8LL * dword_1C0328F40 + 288) << 16) / v15
             + v18) >> 1;
      v19 = v18;
      dword_1C0328F40 = v17;
      v20 = qword_1C0328F30 + ((v9 * v18) >> 16);
      v21 = qword_1C0328F38 + ((v10 * v19) >> 16);
      if ( v21 < 0 )
        v22 = -(__int64)(-v21 & 0xFFFFFFFFFFFF0000uLL);
      else
        v22 = v21 & 0x7FFFFFFFFFFF0000LL;
      qword_1C0328F38 = v21 - v22;
      *a3 = v21 - v22;
      if ( v21 < 0 )
        v23 = -(__int64)(-v21 & 0xFFFFFFFFFFFF0000uLL);
      else
        v23 = v21 & 0x7FFFFFFFFFFF0000LL;
      *a1 = v23 >> 16;
      if ( v20 < 0 )
        v24 = -(__int64)(-v20 & 0xFFFFFFFFFFFF0000uLL);
      else
        v24 = v20 & 0x7FFFFFFFFFFF0000LL;
      result = v20 - v24;
      qword_1C0328F30 = v20 - v24;
      a3[1] = v20 - v24;
      if ( v20 < 0 )
        v25 = -(__int64)(-v20 & 0xFFFFFFFFFFFF0000uLL);
      else
        v25 = v20 & 0x7FFFFFFFFFFF0000LL;
      *a2 = v25 >> 16;
    }
  }
  return result;
}
