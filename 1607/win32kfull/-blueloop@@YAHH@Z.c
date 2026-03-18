/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C0137200
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C0136CB0 (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // r8d
  int v4; // ecx
  int v5; // edi
  int v6; // r13d
  int v7; // r10d
  unsigned int v8; // ebp
  unsigned int *v9; // rbx
  int v10; // r14d
  _BYTE *v11; // r15
  int v12; // r12d
  int v13; // r9d
  unsigned int v14; // r11d
  int v15; // esi
  char v16; // r13
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r10d
  unsigned int *v20; // r9
  _BYTE *v21; // r11
  char v23; // si
  int v24; // [rsp+30h] [rbp+8h]

  v24 = 2 * dword_1C03295CC;
  if ( a1 )
  {
    v5 = dword_1C03295D0;
    v2 = 0;
    v1 = dword_1C0329568;
    v6 = 0;
    v4 = dword_1C0329580;
    dword_1C0329610 = dword_1C0329568;
    v3 = dword_1C03295D0 - 1;
    dword_1C0329614 = 0;
    dword_1C0329618 = dword_1C03295D0 - 1;
    dword_1C032961C = dword_1C0329580;
    dword_1C0329620 = dword_1C03295D0;
    dword_1C0329624 = 0;
  }
  else
  {
    v1 = dword_1C0329610;
    v2 = dword_1C0329614;
    v3 = dword_1C0329618;
    v4 = dword_1C032961C;
    v5 = dword_1C0329620;
    v6 = dword_1C0329624;
  }
  v7 = dword_1C0329574;
  v8 = 0;
  v9 = (unsigned int *)qword_1C0329590;
  v10 = v2;
  v11 = (_BYTE *)qword_1C03295A8;
  v12 = v3;
  v13 = v1;
  v14 = dword_1C0329574;
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
      qword_1C0329590 = (__int64)v9;
      v4 = v15;
      dword_1C0329610 = v13;
      dword_1C032961C = v15;
      v7 = v14;
      qword_1C03295A8 = (__int64)v11;
      v10 = v13;
      dword_1C0329574 = v14;
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
      v16 = dword_1C03295D4;
      ++v13;
      *v9++ = v14;
      *v11 = v16;
      v14 += v15;
      v6 = dword_1C0329624;
      ++v11;
      v15 += v24;
    }
  }
  v17 = v1 - 1;
  v18 = v4 - v24;
  v19 = v7 - v18;
  v20 = (unsigned int *)(qword_1C0329590 - 4);
  v21 = (_BYTE *)(qword_1C03295A8 - 1);
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
    dword_1C0329610 = v17;
    v12 = v17;
    qword_1C0329590 = (__int64)v20;
    v8 = 1;
    qword_1C03295A8 = (__int64)v21;
    dword_1C0329574 = v19;
    dword_1C032961C = v18;
  }
LABEL_20:
  if ( v17 >= v2 )
  {
    v23 = dword_1C03295D4;
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
    dword_1C0329624 = v12;
    dword_1C0329620 = v10;
    if ( v12 < v6 )
      v3 = v12;
    dword_1C0329618 = v3;
    if ( v10 > v5 )
      v2 = v10;
    dword_1C0329614 = v2;
  }
  return v8;
}
