/*
 * XREFs of TransformCoordinates @ 0x1C01C40F4
 * Callers:
 *     ApplyTransforms @ 0x1C01C3A80 (ApplyTransforms.c)
 * Callees:
 *     AdjustLinearity @ 0x1C01C3610 (AdjustLinearity.c)
 */

__int64 __fastcall TransformCoordinates(signed int *a1, __int64 a2, unsigned int a3)
{
  signed int v3; // eax
  signed int *v4; // r15
  int v6; // edx
  int v7; // r13d
  int *v8; // rsi
  signed int v9; // ecx
  __int64 *v10; // r8
  signed int v11; // r10d
  signed int v12; // r12d
  int v13; // ebx
  signed int v14; // r14d
  __int64 v15; // r8
  signed int v16; // ecx
  signed int v17; // r8d
  signed int v18; // eax
  signed int v19; // eax
  int v20; // ebx
  unsigned int v21; // edx
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  unsigned int v24; // r11d
  signed int v25; // eax
  signed int v26; // eax
  __int64 v27; // rdx
  signed int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  _DWORD *v31; // roff
  __int64 result; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  signed int v36; // [rsp+20h] [rbp-18h]
  int v37; // [rsp+24h] [rbp-14h]
  signed int v38; // [rsp+80h] [rbp+48h] BYREF
  signed int v39; // [rsp+88h] [rbp+50h] BYREF
  unsigned int v40; // [rsp+90h] [rbp+58h]
  int v41; // [rsp+98h] [rbp+60h]

  v40 = a3;
  v3 = *a1;
  v4 = a1 + 1;
  v41 = 0;
  v6 = *(_DWORD *)(a2 + 764);
  v7 = 0;
  v8 = a1;
  v37 = v6;
  v9 = a1[1];
  v10 = *(__int64 **)(a2 + 320);
  v11 = *(_DWORD *)(a2 + 192);
  v12 = *(_DWORD *)(a2 + 188);
  v13 = *(_DWORD *)(a2 + 196);
  v14 = *(_DWORD *)(a2 + 200);
  v38 = v3;
  v39 = v9;
  v36 = v11;
  if ( v10 )
  {
    v15 = *v10;
    if ( v15 )
    {
      v41 = 1;
      AdjustLinearity(v15 + 16, &v38, &v39, (_DWORD *)(a2 + 188));
      v3 = v38;
      v9 = v39;
      v6 = v37;
      v11 = v36;
      *v8 = v38;
      *v4 = v9;
    }
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
  v16 = *v8;
  v17 = *v4;
  v38 = *v8;
  v39 = v17;
  switch ( v6 )
  {
    case 2:
      v18 = v16;
      v39 = v16;
      v16 = v11 + v14 - v17;
      *v4 = v39;
      v38 = v16;
      v17 = v18;
      *v8 = v16;
LABEL_18:
      v20 = v14 ^ v13;
      v14 ^= v20;
      v13 = v14 ^ v20;
      break;
    case 3:
      v16 = v12 + v13 - v16;
      v38 = v16;
      *v8 = v16;
      v17 = v11 + v14 - v17;
      v39 = v17;
      *v4 = v17;
      break;
    case 4:
      v19 = v17;
      v38 = v17;
      v17 = v12 + v13 - v16;
      *v8 = v38;
      v39 = v17;
      v16 = v19;
      *v4 = v17;
      goto LABEL_18;
  }
  v21 = *(_DWORD *)(a2 + 856);
  v22 = *(_DWORD *)(a2 + 864);
  v23 = *(_DWORD *)(a2 + 860);
  v24 = *(_DWORD *)(a2 + 868);
  if ( v21 > v22 )
  {
    v25 = *(_DWORD *)(a2 + 872);
    if ( v16 < v25 )
      v7 = 1;
    if ( v16 <= v25 )
    {
      v16 = 0;
      v38 = 0;
    }
    else
    {
      v16 = v21 * (v16 - v25) / v22;
      v38 = v16;
    }
  }
  if ( v23 > v24 )
  {
    v26 = *(_DWORD *)(a2 + 876);
    if ( v17 < v26 )
      v7 = 1;
    if ( v17 <= v26 )
    {
      v17 = 0;
      v39 = 0;
    }
    else
    {
      v17 = v23 * (v17 - v26) / v24;
      v39 = v17;
    }
  }
  *v8 = v16;
  *v4 = v17;
  if ( v16 > v13 || v17 > v14 )
    v7 = 1;
  if ( v41 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 80LL);
    if ( v27 )
    {
      AdjustLinearity(v27 + 16, &v38, &v39, (_DWORD *)(a2 + 172));
      v16 = v38;
      v28 = v39;
      *v8 = v38;
      *v4 = v28;
    }
  }
  v29 = v40;
  if ( v7 )
  {
    v30 = 2400LL * v40;
    *(_DWORD *)(v30 + *(_QWORD *)(a2 + 696) + 2308) = v16;
    *(_DWORD *)(v30 + *(_QWORD *)(a2 + 696) + 2312) = *v4;
    v31 = (_DWORD *)(2400 * v29 + *(_QWORD *)(a2 + 696) + 2392);
    *v31 |= 0x80u;
    result = *(_QWORD *)(a2 + 696);
    *(_DWORD *)(v30 + result + 2392) &= ~0x100u;
  }
  else
  {
    v33 = *(_QWORD *)(a2 + 696);
    v34 = 2400LL * v40;
    result = *(unsigned int *)(v34 + v33 + 2392);
    if ( (result & 0x80u) != 0LL )
    {
      *(_DWORD *)(v34 + v33 + 2392) = result | 0x100;
      v35 = *(_DWORD *)(v34 + *(_QWORD *)(a2 + 696) + 2308);
      if ( v35 <= v13 && v35 )
      {
        v12 = v36;
        v13 = v14;
        v8 = v4;
      }
      if ( *v8 - v12 < v13 - *v8 )
        v13 = v12;
      *v8 = v13;
      result = *(_QWORD *)(a2 + 696);
      *(_DWORD *)(v34 + result + 2392) &= ~0x80u;
    }
  }
  return result;
}
