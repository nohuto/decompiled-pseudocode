/*
 * XREFs of RIMTransformCoordinates @ 0x1C00CE3BC
 * Callers:
 *     RIMApplyTransforms @ 0x1C00CD848 (RIMApplyTransforms.c)
 * Callees:
 *     ApiSetAdjustLinearity @ 0x1C00CD398 (ApiSetAdjustLinearity.c)
 */

__int64 __fastcall RIMTransformCoordinates(int *a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  signed int *v4; // r15
  int v6; // edx
  int v7; // r13d
  int *v8; // rsi
  signed int v9; // ecx
  _QWORD *v10; // r8
  signed int v11; // r10d
  int v12; // r12d
  int v13; // ebx
  signed int v14; // r14d
  signed int v15; // ecx
  signed int v16; // r8d
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  signed int v22; // eax
  signed int v23; // eax
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // ecx
  int v29; // [rsp+20h] [rbp-18h]
  int v30; // [rsp+24h] [rbp-14h]
  int v31; // [rsp+80h] [rbp+48h]
  signed int v32; // [rsp+80h] [rbp+48h]
  signed int v33; // [rsp+88h] [rbp+50h]
  signed int v34; // [rsp+88h] [rbp+50h]
  int v36; // [rsp+98h] [rbp+60h]

  v3 = *a1;
  v4 = a1 + 1;
  v36 = 0;
  v6 = *(_DWORD *)(a2 + 748);
  v7 = 0;
  v8 = a1;
  v30 = v6;
  v9 = a1[1];
  v10 = *(_QWORD **)(a2 + 304);
  v11 = *(_DWORD *)(a2 + 192);
  v12 = *(_DWORD *)(a2 + 188);
  v13 = *(_DWORD *)(a2 + 196);
  v14 = *(_DWORD *)(a2 + 200);
  v31 = v3;
  v33 = v9;
  v29 = v11;
  if ( v10 && *v10 )
  {
    v36 = 1;
    ApiSetAdjustLinearity();
    v3 = v31;
    v9 = v33;
    v6 = v30;
    v11 = v29;
    *v8 = v31;
    *v4 = v33;
  }
  if ( v3 <= v13 )
  {
    if ( v3 < v12 )
      *v8 = v12;
  }
  else
  {
    *v8 = v13;
  }
  if ( v9 <= v14 )
  {
    if ( v9 < v11 )
      *v4 = v11;
  }
  else
  {
    *v4 = v14;
  }
  v15 = *v8;
  v16 = *v4;
  v32 = *v8;
  v34 = *v4;
  switch ( v6 )
  {
    case 2:
      v34 = *v8;
      v15 = v11 + v14 - v16;
      *v4 = *v8;
      v32 = v15;
      v16 = v34;
      *v8 = v15;
LABEL_18:
      v17 = v14 ^ v13;
      v14 ^= v17;
      v13 = v14 ^ v17;
      break;
    case 3:
      v15 = v12 + v13 - v15;
      v32 = v15;
      *v8 = v15;
      v16 = v11 + v14 - v16;
      v34 = v16;
      *v4 = v16;
      break;
    case 4:
      v32 = *v4;
      v16 = v12 + v13 - v15;
      *v8 = *v4;
      v34 = v16;
      v15 = v32;
      *v4 = v16;
      goto LABEL_18;
  }
  v18 = *(_DWORD *)(a2 + 840);
  v19 = *(_DWORD *)(a2 + 848);
  v20 = *(_DWORD *)(a2 + 844);
  v21 = *(_DWORD *)(a2 + 852);
  if ( v18 > v19 )
  {
    v22 = *(_DWORD *)(a2 + 856);
    if ( v15 < v22 )
      v7 = 1;
    if ( v15 <= v22 )
    {
      v15 = 0;
      v32 = 0;
    }
    else
    {
      v15 = v18 * (v15 - v22) / v19;
      v32 = v15;
    }
  }
  if ( v20 > v21 )
  {
    v23 = *(_DWORD *)(a2 + 860);
    if ( v16 < v23 )
      v7 = 1;
    if ( v16 <= v23 )
    {
      v16 = 0;
      v34 = 0;
    }
    else
    {
      v16 = v20 * (v16 - v23) / v21;
      v34 = v16;
    }
  }
  *v8 = v15;
  *v4 = v16;
  if ( v15 > v13 || v16 > v14 )
    v7 = 1;
  if ( v36 && *(_QWORD *)(*(_QWORD *)(a2 + 304) + 80LL) )
  {
    ApiSetAdjustLinearity();
    v15 = v32;
    *v8 = v32;
    *v4 = v34;
  }
  if ( v7 )
  {
    v24 = 2400LL * a3;
    *(_DWORD *)(v24 + *(_QWORD *)(a2 + 680) + 2308) = v15;
    *(_DWORD *)(v24 + *(_QWORD *)(a2 + 680) + 2312) = *v4;
    *(_DWORD *)(v24 + *(_QWORD *)(a2 + 680) + 2392) |= 0x80u;
    result = *(_QWORD *)(a2 + 680);
    *(_DWORD *)(v24 + result + 2392) &= ~0x100u;
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 680);
    v27 = 2400LL * a3;
    result = *(unsigned int *)(v27 + v26 + 2392);
    if ( (result & 0x80u) != 0LL )
    {
      *(_DWORD *)(v27 + v26 + 2392) = result | 0x100;
      v28 = *(_DWORD *)(v27 + *(_QWORD *)(a2 + 680) + 2308);
      if ( v28 <= v13 && v28 )
      {
        v12 = v29;
        v13 = v14;
        v8 = v4;
      }
      if ( *v8 - v12 < v13 - *v8 )
        v13 = v12;
      *v8 = v13;
      result = *(_QWORD *)(a2 + 680);
      *(_DWORD *)(v27 + result + 2392) &= ~0x80u;
    }
  }
  return result;
}
