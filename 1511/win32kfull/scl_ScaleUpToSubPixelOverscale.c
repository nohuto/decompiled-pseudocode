/*
 * XREFs of scl_ScaleUpToSubPixelOverscale @ 0x1C00C5F80
 * Callers:
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ScaleUpToSubPixelOverscale(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 i; // r11
  __int64 v8; // rax
  __int64 v9; // rax
  BOOL v10; // r9d
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rax
  bool v16; // sf
  __int64 v17; // rax
  BOOL v18; // r8d
  unsigned __int64 v19; // rdx
  int v20; // eax
  BOOL v21; // ecx

  result = *(_QWORD *)(a1 + 64);
  v5 = a3;
  v6 = 0;
  if ( *(_WORD *)(result + 2LL * *(__int16 *)(a1 + 80) - 2) != 0xFFF7 )
  {
    for ( i = 0LL; ; i += 4LL )
    {
      v8 = *(int *)(*(_QWORD *)a1 + i);
      if ( (_DWORD)v8 )
      {
        v21 = (int)v8 < 0;
        v9 = 393216 * v8;
        v10 = (v9 & 0x8000) != 0 && (!v21 || (v9 & 0x7FFF) != 0);
        v11 = HIDWORD(v9);
        v12 = v10 + (v9 >> 16);
        if ( (v11 & 0xFFFF0000) != 0 )
        {
          if ( (v11 & 0xFFFF0000) == 0xFFFF0000 )
          {
            if ( v12 > 0 )
              v12 = 0x80000000;
          }
          else
          {
            v12 = 0x80000000;
            if ( (v11 & 0x80000000) != 0 )
              v12 = 0x7FFFFFFF;
          }
        }
        else if ( v12 < 0 )
        {
          v12 = 0x7FFFFFFF;
        }
      }
      else
      {
        v12 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + i) = v12;
      v13 = 0;
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(int *)(v14 + i);
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v5 )
          break;
      }
      v20 = 0;
LABEL_20:
      *(_DWORD *)(v14 + i) = v20;
      ++v6;
      result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 9);
      if ( v6 >= (int)result )
        return result;
    }
    v16 = (int)v15 < 0;
    if ( (int)v15 > 0 )
    {
      if ( (int)v5 < 0 )
      {
LABEL_25:
        v13 = 1;
LABEL_15:
        v17 = v5 * v15;
        v18 = (v17 & 0x8000) != 0 && (!v13 || (v17 & 0x7FFF) != 0);
        v19 = HIDWORD(v17);
        v20 = v18 + (v17 >> 16);
        if ( (v19 & 0xFFFF0000) != 0 )
        {
          if ( (v19 & 0xFFFF0000) == 0xFFFF0000 )
          {
            if ( v20 > 0 )
              v20 = 0x80000000;
          }
          else
          {
            v20 = 0x80000000;
            if ( (v19 & 0x80000000) != 0 )
              v20 = 0x7FFFFFFF;
          }
        }
        else if ( v20 < 0 )
        {
          v20 = 0x7FFFFFFF;
        }
        goto LABEL_20;
      }
      v16 = (int)v15 < 0;
    }
    if ( !v16 || (int)v5 <= 0 )
      goto LABEL_15;
    goto LABEL_25;
  }
  return result;
}
