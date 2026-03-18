/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C011D620
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C011CF30 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     LongAdd @ 0x1C0265408 (LongAdd.c)
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTFX *a8,
        struct _PATHRECORD **a9)
{
  LONG v9; // esi
  int v10; // r11d
  LONG v11; // edi
  unsigned int *v12; // rdx
  int v14; // ebx
  LONG v15; // r15d
  LONG v16; // r12d
  struct _PATHRECORD *v18; // r8
  LONG x; // eax
  LONG y; // eax
  unsigned int v21; // r10d
  __int64 v23; // r9
  unsigned int v24; // r11d
  __int64 v25; // r9
  __int64 v26; // r9

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
        if ( (int)LongAdd(a6, (unsigned int)v9, a8) < 0
          || (int)LongAdd(a6, (unsigned int)v11, v23 + 8) < 0
          || (int)LongAdd(a7, (unsigned int)v15, v25 + 4) < 0
          || (int)LongAdd(a7, (unsigned int)v16, v26 + 12) < 0 )
        {
          v21 = v24;
        }
        if ( v14 )
          return v24;
        return v21;
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
