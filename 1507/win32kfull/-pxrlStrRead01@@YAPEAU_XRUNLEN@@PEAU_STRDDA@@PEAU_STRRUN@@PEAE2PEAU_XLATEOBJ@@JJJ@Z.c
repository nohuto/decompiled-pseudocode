/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00D4470
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
  unsigned __int8 *v11; // r15
  unsigned __int8 *v14; // r14
  __int64 v15; // rsi
  int v16; // ecx
  unsigned int *v17; // r8
  __int64 v18; // rbp
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int *v23; // rdi
  __int64 j; // rcx
  ULONG *pulXlate; // rax
  int v27; // r8d
  int v28; // ebp
  char v29; // r9
  int *v30; // r13
  unsigned int *v31; // r15
  int v32; // edi
  __int64 v33; // rcx
  __int64 v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  int *v38; // rdi
  __int64 i; // rcx
  __int64 v40; // rax
  ULONG v41; // [rsp+48h] [rbp+10h]
  char *v42; // [rsp+50h] [rbp+18h]
  int v43; // [rsp+50h] [rbp+18h]
  __int64 v44; // [rsp+58h] [rbp+20h]
  int v45; // [rsp+60h] [rbp+28h]
  int v46; // [rsp+68h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v42 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v11 = a4;
  v14 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v45 = pulXlate[1];
    v41 = *pulXlate;
  }
  else
  {
    v41 = 0;
    v45 = 1;
  }
  v15 = a6 & 0x1F;
  if ( a4 )
  {
    v27 = 0;
    v28 = *(_DWORD *)a1;
    v29 = a8 & 0x1F;
    v30 = (int *)&v11[4 * ((__int64)a8 >> 5)];
    v46 = *v30;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v9;
    v31 = (unsigned int *)((char *)a1 + 32);
    v32 = *v30;
    v33 = 0LL;
    v43 = *(_DWORD *)v14;
    v44 = 0LL;
    v34 = a8 & 0x1F;
    while ( (v32 & dword_1C02E8060[v34]) == 0 )
    {
      if ( v27 > 0 )
      {
        *v9 = v28;
        v28 += v27;
        v9[1] = v27;
        v40 = v27;
        v27 = 0;
        v9 += v40 + 2;
        v33 = 0LL;
        v44 = 0LL;
      }
      v28 += *v31;
LABEL_33:
      ++v8;
      ++v10;
      ++v15;
      ++v29;
      ++v34;
      ++v31;
      if ( v8 >= a7 )
      {
        if ( v27 > 0 )
        {
          *v9 = v28;
          v9[1] = v27;
          v9 += v27 + 2;
        }
        return (struct _XRUNLEN *)v9;
      }
      if ( (v10 & 0x20) != 0 )
      {
        v14 += 4;
        v10 = 0;
        v15 = 0LL;
        v43 = *(_DWORD *)v14;
      }
      if ( (v29 & 0x20) != 0 )
      {
        ++v30;
        v29 = 0;
        v34 = 0LL;
        v32 = *v30;
        v46 = *v30;
      }
    }
    v35 = *v31;
    if ( (dword_1C02E8060[v15] & v43) != 0 )
    {
      if ( v35 )
      {
        v36 = v35;
        v37 = v45;
        goto LABEL_28;
      }
    }
    else if ( v35 )
    {
      v36 = *v31;
      v37 = v41;
LABEL_28:
      v27 += v36;
      v38 = &v9[v33 + 2];
      for ( i = v36; i; --i )
        *v38++ = v37;
      v33 = v36 + v44;
      v44 += v36;
    }
    v32 = v46;
    goto LABEL_33;
  }
  v16 = *(_DWORD *)a1;
  *v9 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v16;
  if ( a6 >= a7 )
    return (struct _XRUNLEN *)&v9[(int)a4 + 2];
  v17 = (unsigned int *)((char *)a1 + 32);
  v18 = 0LL;
LABEL_6:
  v19 = *(_DWORD *)v14;
  while ( 1 )
  {
    v20 = *v17++;
    if ( (v19 & dword_1C02E8060[v15]) != 0 )
    {
      if ( !(_DWORD)v20 )
        goto LABEL_14;
      v21 = v20;
      v22 = v45;
    }
    else
    {
      if ( !(_DWORD)v20 )
        goto LABEL_14;
      v21 = (unsigned int)v20;
      v22 = v41;
    }
    LODWORD(a4) = v21 + (_DWORD)a4;
    v23 = (int *)((char *)a2 + 4 * v18 + 16);
    for ( j = v21; j; --j )
      *v23++ = v22;
    v18 += v21;
LABEL_14:
    ++v8;
    ++v10;
    ++v15;
    if ( v8 >= a7 )
      break;
    if ( (v10 & 0x20) != 0 )
    {
      v14 += 4;
      v10 = 0;
      v15 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = v42;
  return (struct _XRUNLEN *)&v9[(int)a4 + 2];
}
