/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0010BFC
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C0010D50 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     LongLongToLong @ 0x1C0125324 (LongLongToLong.c)
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        LONG *plResult,
        struct _PATHRECORD **a9)
{
  LONG v9; // esi
  int v10; // r11d
  LONG v11; // edi
  unsigned int *v12; // rdx
  int v14; // ebx
  LONG v15; // r14d
  LONG v16; // ebp
  struct _PATHRECORD *v18; // r8
  LONG x; // eax
  LONG y; // eax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  unsigned int v24; // r10d

  *((_QWORD *)a1 + 1) = 0LL;
  v9 = 0x7FFFFFFF;
  v10 = *a2;
  v11 = 0x80000000;
  v12 = a2 + 1;
  v14 = a3 - v10;
  v15 = 0x7FFFFFFF;
  v16 = 0x80000000;
  if ( a3 - v10 >= 0 )
  {
    while ( v10 >= 2 )
    {
      *((_DWORD *)a1 + 5) = v10;
      v18 = a1;
      *((_DWORD *)a1 + 4) = 3;
      do
      {
        x = a4->x;
        if ( a4->x < v9 )
          v9 = a4->x;
        if ( x > v11 )
          v11 = a4->x;
        *((_DWORD *)a1 + 6) = a6 + x;
        y = a4->y;
        if ( y < v15 )
          v15 = a4->y;
        if ( y > v16 )
          v16 = a4->y;
        *((_DWORD *)a1 + 7) = a7 + y;
        ++a4;
        a1 = (struct _PATHRECORD *)((char *)a1 + 8);
        --v10;
      }
      while ( v10 );
      if ( !--a5 )
      {
        *(_QWORD *)v18 = 0LL;
        *a9 = v18;
        if ( LongLongToLong(a6 + (__int64)v9, plResult) < 0
          || LongLongToLong(a6 + (__int64)v11, (LONG *)(v21 + 8)) < 0
          || LongLongToLong(a7 + (__int64)v15, (LONG *)(v22 + 4)) < 0
          || LongLongToLong(a7 + (__int64)v16, (LONG *)(v23 + 12)) < 0 )
        {
          v24 = 0;
        }
        if ( v14 )
          return 0;
        return v24;
      }
      a1 = (struct _PATHRECORD *)((char *)a1 + 24);
      *((_QWORD *)a1 + 1) = v18;
      *(_QWORD *)v18 = a1;
      v10 = *v12++;
      v14 -= v10;
      if ( v14 < 0 )
        return 0;
    }
  }
  return 0;
}
