/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00DAEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  _DWORD *v9; // r10
  char v10; // r11
  unsigned __int8 *v12; // r14
  unsigned __int8 *v14; // r15
  int v15; // edx
  ULONG v16; // r12d
  __int64 v17; // rsi
  int v18; // ecx
  unsigned int *v19; // r8
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  int *v24; // rdi
  __int64 v25; // rcx
  ULONG *pulXlate; // rax
  int v28; // r8d
  int v29; // ebp
  char v30; // r9
  int *v31; // r13
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r12
  unsigned int *v35; // r14
  int v36; // edi
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  int *v40; // rdi
  __int64 i; // rcx
  __int64 v42; // rax
  int v43; // [rsp+48h] [rbp+10h]
  ULONG v44; // [rsp+50h] [rbp+18h]
  char *v45; // [rsp+58h] [rbp+20h]
  __int64 v46; // [rsp+58h] [rbp+20h]
  int v47; // [rsp+60h] [rbp+28h]
  int v48; // [rsp+68h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v45 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v12 = a4;
  v14 = &a3[4 * ((__int64)a6 >> 5)];
  v15 = *(_DWORD *)v14;
  v43 = *(_DWORD *)v14;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v16 = *pulXlate;
    v47 = pulXlate[1];
  }
  else
  {
    v16 = 0;
    v47 = 1;
  }
  v44 = v16;
  v17 = a6 & 0x1F;
  if ( a4 )
  {
    v28 = 0;
    v29 = *(_DWORD *)a1;
    v30 = a8 & 0x1F;
    v31 = (int *)&v12[4 * ((__int64)a8 >> 5)];
    v32 = *v31;
    v48 = *v31;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v9;
    v33 = 0LL;
    v34 = a8 & 0x1F;
    v46 = 0LL;
    v35 = (unsigned int *)((char *)a1 + 32);
LABEL_22:
    v36 = v32;
    while ( 1 )
    {
      if ( (v36 & dword_1C02E8920[v34]) == 0 )
      {
        if ( v28 > 0 )
        {
          *v9 = v29;
          v29 += v28;
          v9[1] = v28;
          v42 = v28;
          v28 = 0;
          v9 += v42 + 2;
          v33 = 0LL;
          v46 = 0LL;
        }
        v29 += *v35;
        goto LABEL_32;
      }
      v37 = *v35;
      if ( (dword_1C02E8920[v17] & v43) != 0 )
      {
        if ( v37 )
        {
          v38 = v37;
          v39 = v47;
          goto LABEL_27;
        }
      }
      else if ( v37 )
      {
        v38 = *v35;
        v39 = v44;
LABEL_27:
        v28 += v38;
        v40 = &v9[v33 + 2];
        for ( i = v38; i; --i )
          *v40++ = v39;
        v33 = v38 + v46;
        v46 += v38;
      }
      v36 = v48;
LABEL_32:
      ++v8;
      ++v10;
      ++v17;
      ++v30;
      ++v34;
      ++v35;
      if ( v8 >= a7 )
      {
        if ( v28 > 0 )
        {
          *v9 = v29;
          v9[1] = v28;
          v9 += v28 + 2;
        }
        return (struct _XRUNLEN *)v9;
      }
      if ( (v10 & 0x20) != 0 )
      {
        v14 += 4;
        v10 = 0;
        v17 = 0LL;
        v43 = *(_DWORD *)v14;
      }
      if ( (v30 & 0x20) != 0 )
      {
        ++v31;
        v30 = 0;
        v34 = 0LL;
        v32 = *v31;
        v48 = *v31;
        goto LABEL_22;
      }
    }
  }
  v18 = *(_DWORD *)a1;
  *v9 = v18;
  v9[1] = *((_DWORD *)a1 + 2) - v18;
  if ( a6 >= a7 )
    return (struct _XRUNLEN *)&v9[(int)a4 + 2];
  v19 = (unsigned int *)((char *)a1 + 32);
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *v19++;
    if ( (v15 & dword_1C02E8920[v17]) != 0 )
    {
      if ( !(_DWORD)v21 )
        goto LABEL_12;
      v22 = v21;
      v23 = v47;
    }
    else
    {
      if ( !(_DWORD)v21 )
        goto LABEL_12;
      v22 = (unsigned int)v21;
      v23 = v16;
    }
    LODWORD(a4) = v22 + (_DWORD)a4;
    v24 = (int *)((char *)a2 + 4 * v20 + 16);
    v25 = v22;
    v20 += v22;
    v15 = v43;
    while ( v25 )
    {
      *v24++ = v23;
      --v25;
    }
LABEL_12:
    ++v8;
    ++v10;
    ++v17;
    if ( v8 >= a7 )
      break;
    if ( (v10 & 0x20) != 0 )
    {
      v14 += 4;
      v10 = 0;
      v17 = 0LL;
      v15 = *(_DWORD *)v14;
      v43 = *(_DWORD *)v14;
    }
  }
  v9 = v45;
  return (struct _XRUNLEN *)&v9[(int)a4 + 2];
}
