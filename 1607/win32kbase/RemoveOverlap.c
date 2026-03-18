/*
 * XREFs of RemoveOverlap @ 0x1C00E2E5C
 * Callers:
 *     RemoveOverlaps @ 0x1C00E3030 (RemoveOverlaps.c)
 * Callees:
 *     PtInRect @ 0x1C00E29A0 (PtInRect.c)
 */

_DWORD *__fastcall RemoveOverlap(_DWORD *a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // r14
  int v5; // r9d
  int v6; // ebp
  int v7; // edi
  int v8; // r11d
  int v9; // r12d
  int v10; // esi
  int v11; // r13d
  bool v12; // zf
  int v13; // r10d
  BOOL v14; // edx
  BOOL v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _DWORD *v18; // rcx
  int v19; // r10d
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  _DWORD *v24; // rcx
  int v25; // edx
  int v26; // edx
  int v27; // r8d
  int v28; // r8d
  _DWORD *result; // rax
  unsigned __int64 v30; // [rsp+20h] [rbp-58h]
  int v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+90h] [rbp+18h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v5 = a1[1];
  v6 = a3[2];
  v7 = *a1 + (a1[2] - *a1) / 2;
  LODWORD(v34) = v7;
  v8 = a1[3];
  v9 = v5 + (v8 - v5) / 2;
  HIDWORD(v34) = v9;
  v10 = *a2 + (a2[2] - *a2) / 2;
  LODWORD(v30) = v10;
  v11 = a2[1] + (a2[3] - a2[1]) / 2;
  v12 = *a3 == *a1;
  v33 = *a3;
  v13 = a3[3];
  v32 = a3[1];
  HIDWORD(v30) = v11;
  v14 = v32 == v5;
  v15 = v6 == a1[2];
  v16 = 1;
  v17 = ((v14 | (2 * v12)) ^ ((v13 == v8) | (2 * v15))) - 1;
  if ( ((((unsigned __int8)(v14 | (2 * v12)) ^ (unsigned __int8)((v13 == v8) | (2 * v15))) - 1) & 2) == 0 )
    goto LABEL_13;
  if ( PtInRect(a3, v34) || PtInRect(v18, v30) )
  {
    v20 = v7 - v10;
    if ( v7 - v10 < 0 )
      v20 = v10 - v7;
    v21 = v9 - v11;
    if ( v9 - v11 < 0 )
      v21 = v11 - v9;
    if ( v20 >= v21 )
      goto LABEL_5;
    v17 = 0;
LABEL_13:
    if ( v17 == v16 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( v6 - v33 <= v19 - v32 )
  {
LABEL_5:
    v17 = v16;
    goto LABEL_15;
  }
  v17 = 0;
LABEL_14:
  v7 = v9;
  v10 = v11;
LABEL_15:
  if ( v7 >= 0 )
  {
    v22 = 0;
  }
  else
  {
    v22 = v16;
    v7 = -v7;
  }
  if ( v10 >= 0 )
  {
    v23 = 0;
  }
  else
  {
    v23 = v16;
    v10 = -v10;
  }
  if ( v10 >= v7 )
  {
    v24 = v3;
    v22 = v23;
    v3 = a1;
  }
  else
  {
    v24 = a1;
  }
  if ( v17 == v16 )
  {
    if ( v22 )
      v25 = *v24 + *v3 - v24[2];
    else
      v25 = v3[2];
    v26 = v25 - *v24;
    v27 = 0;
  }
  else
  {
    if ( v22 )
      v28 = v24[1] + v3[1] - v24[3];
    else
      v28 = v3[3];
    v27 = v28 - v24[1];
    v26 = 0;
  }
  *v24 += v26;
  result = v24;
  v24[2] += v26;
  v24[3] += v27;
  v24[1] += v27;
  return result;
}
