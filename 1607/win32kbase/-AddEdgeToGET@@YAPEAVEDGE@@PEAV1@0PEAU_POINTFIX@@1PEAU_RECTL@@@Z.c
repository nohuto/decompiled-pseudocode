/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C00764E8
 * Callers:
 *     bConstructGET @ 0x1C00763F0 (bConstructGET.c)
 * Callees:
 *     <none>
 */

struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  FIX y; // edi
  FIX v6; // r14d
  FIX v7; // ebx
  int v8; // r11d
  FIX v11; // r8d
  FIX v12; // eax
  FIX x; // edx
  int v14; // ebp
  int v15; // ecx
  int v16; // eax
  struct EDGE *result; // rax
  int v18; // edx
  unsigned int v19; // r9d
  int v20; // ecx
  bool v21; // zf
  int v22; // eax
  int v23; // r8d
  __int64 v24; // rax
  int v25; // edx
  LONG top; // ecx
  LONG bottom; // r9d
  int v28; // edx
  int v29; // kr00_4
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx

  y = a4->y;
  v6 = 0;
  v7 = a3->y;
  v8 = y - v7;
  if ( y - v7 < 0 )
  {
    x = a3->x;
    v8 = v7 - a4->y;
    v11 = a4->x;
    v12 = v7;
    *((_DWORD *)a2 + 10) = -1;
    v7 = y;
  }
  else
  {
    v11 = a3->x;
    v12 = a4->y;
    x = a4->x;
    *((_DWORD *)a2 + 10) = 1;
  }
  v14 = 0;
  if ( a5 )
  {
    top = a5->top;
    if ( v12 < top )
      return a2;
    bottom = a5->bottom;
    if ( v7 > bottom )
      return a2;
    if ( v7 < top )
    {
      v6 = v7;
      v14 = 1;
      v7 = a5->top;
    }
    if ( v12 > bottom )
      v12 = a5->bottom;
  }
  v15 = (v7 + 15) >> 4;
  v16 = ((v12 + 15) >> 4) - v15;
  *((_DWORD *)a2 + 4) = v15;
  *((_DWORD *)a2 + 2) = v16;
  if ( v16 <= 0 )
    return a2;
  v18 = x - v11;
  if ( v18 < 0 )
  {
    *((_DWORD *)a2 + 9) = -1;
    v18 = -v18;
    *((_DWORD *)a2 + 5) = -v8;
  }
  else
  {
    *((_DWORD *)a2 + 5) = -1;
    *((_DWORD *)a2 + 9) = 1;
  }
  if ( v18 >= v8 )
  {
    v29 = v18;
    v28 = v18 >> 31;
    v30 = __SPAIR64__(v28, v29) / v8;
    v18 = __SPAIR64__(v28, v29) % v8;
    v21 = *((_DWORD *)a2 + 9) == -1;
    *((_DWORD *)a2 + 8) = v30;
    if ( v21 )
      *((_DWORD *)a2 + 8) = -v30;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
  }
  *((_DWORD *)a2 + 6) = v18;
  *((_DWORD *)a2 + 7) = v8;
  if ( v14 )
  {
    v19 = a5->top;
    v7 = v6;
  }
  else
  {
    v19 = (v7 + 15) & 0xFFFFFFF0;
  }
  if ( v7 != v19 )
  {
    v31 = *((_DWORD *)a2 + 5);
    v32 = v19 - v7;
    do
    {
      v11 += *((_DWORD *)a2 + 8);
      v31 += *((_DWORD *)a2 + 6);
      if ( v31 >= 0 )
      {
        v31 -= v8;
        v11 += *((_DWORD *)a2 + 9);
      }
      --v32;
    }
    while ( v32 );
    *((_DWORD *)a2 + 5) = v31;
  }
  v20 = (v11 + 15) >> 4;
  v21 = *((_DWORD *)a2 + 9) == 1;
  *((_DWORD *)a2 + 3) = v20;
  if ( v21 )
    v22 = ((v11 + 15) & 0xFFFFFFF0) - v11;
  else
    v22 = ((_BYTE)v11 - 1) & 0xF;
  *((_DWORD *)a2 + 6) *= 16;
  v23 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 5) -= v8 * v22;
  *((_DWORD *)a2 + 7) = 16 * v8;
  while ( 1 )
  {
    v24 = *(_QWORD *)a1;
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v23 <= v25 && (v23 != v25 || v20 <= *(_DWORD *)(v24 + 12)) )
      break;
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v24;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}
