/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C0102A00
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C01024E0 (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // r8d
  int v4; // ecx
  int v5; // r12d
  int v6; // r13d
  int v7; // r10d
  unsigned int v8; // esi
  unsigned int *v9; // rbx
  int v10; // ebp
  _BYTE *v11; // r14
  int v12; // r15d
  int v13; // r9d
  unsigned int v14; // r11d
  int v15; // edi
  char v16; // r12
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r10d
  unsigned int *v20; // r9
  _BYTE *v21; // r11
  char v23; // di
  int v24; // [rsp+30h] [rbp+8h]

  v24 = 2 * dword_1C032324C;
  if ( a1 )
  {
    v1 = dword_1C03231E8;
    v2 = 0;
    v4 = dword_1C0323200;
    v6 = 0;
    dword_1C0323290 = dword_1C03231E8;
    dword_1C0323294 = 0;
    v3 = 31;
    dword_1C032329C = dword_1C0323200;
    v5 = 32;
    dword_1C0323298 = 31;
    dword_1C03232A0 = 32;
    dword_1C03232A4 = 0;
  }
  else
  {
    v1 = dword_1C0323290;
    v2 = dword_1C0323294;
    v3 = dword_1C0323298;
    v4 = dword_1C032329C;
    v5 = dword_1C03232A0;
    v6 = dword_1C03232A4;
  }
  v7 = dword_1C03231F4;
  v8 = 0;
  v9 = (unsigned int *)qword_1C0323210;
  v10 = v2;
  v11 = (_BYTE *)qword_1C0323228;
  v12 = v3;
  v13 = v1;
  v14 = dword_1C03231F4;
  v15 = v4;
  if ( v1 <= v3 )
  {
    while ( *v9 <= v14 )
    {
      v14 += v15;
      ++v13;
      v15 += v24;
      ++v9;
      ++v11;
      if ( v13 > v3 )
        goto LABEL_10;
    }
    if ( v13 > v1 )
    {
      v1 = v13;
      qword_1C0323210 = (__int64)v9;
      v4 = v15;
      dword_1C0323290 = v13;
      dword_1C032329C = v15;
      v7 = v14;
      qword_1C0323228 = (__int64)v11;
      v10 = v13;
      dword_1C03231F4 = v14;
    }
    v8 = 1;
LABEL_10:
    while ( v13 <= v3 )
    {
      if ( *v9 <= v14 )
      {
        v12 = v13 - 1;
        break;
      }
      v16 = dword_1C0323254;
      ++v13;
      *v9++ = v14;
      *v11 = v16;
      v14 += v15;
      v5 = dword_1C03232A0;
      ++v11;
      v15 += v24;
    }
  }
  v17 = v1 - 1;
  v18 = v4 - v24;
  v19 = v7 - v18;
  v20 = (unsigned int *)(qword_1C0323210 - 4);
  v21 = (_BYTE *)(qword_1C0323228 - 1);
  if ( !v8 )
  {
    if ( v17 < v2 )
      return v8;
    while ( *v20 <= v19 )
    {
      v18 -= v24;
      --v17;
      v19 -= v18;
      --v20;
      --v21;
      if ( v17 < v2 )
        goto LABEL_20;
    }
    dword_1C0323290 = v17;
    v12 = v17;
    qword_1C0323210 = (__int64)v20;
    v8 = 1;
    qword_1C0323228 = (__int64)v21;
    dword_1C03231F4 = v19;
    dword_1C032329C = v18;
  }
LABEL_20:
  if ( v17 >= v2 )
  {
    v23 = dword_1C0323254;
    while ( *v20 > v19 )
    {
      *v20 = v19;
      v18 -= v24;
      *v21 = v23;
      v19 -= v18;
      --v21;
      --v17;
      --v20;
      if ( v17 < v2 )
        goto LABEL_21;
    }
    v10 = v17 + 1;
  }
LABEL_21:
  if ( v8 )
  {
    dword_1C03232A4 = v12;
    dword_1C03232A0 = v10;
    if ( v12 < v6 )
      v3 = v12;
    dword_1C0323298 = v3;
    if ( v10 > v5 )
      v2 = v10;
    dword_1C0323294 = v2;
  }
  return v8;
}
