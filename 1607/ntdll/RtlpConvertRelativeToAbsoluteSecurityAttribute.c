/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E1F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x18007053C (RtlStringCbLengthW.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r15
  unsigned int *v6; // r12
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r11d
  unsigned int *v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // r12d
  __int64 v21; // rcx
  unsigned int v22; // r8d
  _DWORD *v23; // rcx
  unsigned int v24; // ebx
  int v25; // eax
  char *v26; // rcx
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  unsigned int v29; // ebp
  unsigned int v30; // eax
  char *v31; // r15
  __int64 v32; // r12
  unsigned int *v33; // rcx
  unsigned int v34; // r13d
  unsigned int v35; // eax
  __int64 v36; // r12
  unsigned int v37; // edx
  unsigned __int64 v38; // rax
  unsigned int v39; // ebp
  char *v40; // r12
  unsigned int v41; // r13d
  unsigned __int64 v42; // rax
  __int64 v43; // r15
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // edx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 i; // [rsp+20h] [rbp-48h]
  __int64 v51; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v52; // [rsp+88h] [rbp+20h]

  v52 = a4;
  v4 = 0;
  v5 = a2;
  v51 = 0LL;
  v6 = a4;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v10 = a2 - *a1;
  if ( v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v10, &v51);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  v11 = v51 + 2;
  if ( (int)v51 + 2 < (unsigned int)v51 )
    return (unsigned int)-1073741675;
  if ( (int)v51 + 5 < (unsigned int)(v51 + 2) )
    return (unsigned int)-1073741675;
  v12 = ((v51 + 5) & 0xFFFFFFFC) + 32;
  if ( v12 < 0x20 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  v14 = *((unsigned __int16 *)a1 + 2);
  if ( !*((_WORD *)a1 + 2) )
    goto LABEL_42;
  if ( *((unsigned __int16 *)a1 + 2) <= 2u )
    goto LABEL_45;
  switch ( v14 )
  {
    case 3:
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + 8 * (_DWORD)v13 < v12 )
        return (unsigned int)-1073741675;
      v12 += 8 * v13;
      v20 = 0;
      if ( (_DWORD)v13 )
      {
        do
        {
          v21 = a1[v20 + 4];
          if ( (unsigned int)v5 < (unsigned int)v21 || (unsigned int)(v5 - v21) < 2 )
            return (unsigned int)-1073741705;
          v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v21), (unsigned int)(v5 - v21), &v51);
          if ( (v9 & 0x80000000) != 0 )
            return v9;
          if ( (int)v51 + 2 < (unsigned int)v51
            || (int)v51 + 5 < (unsigned int)(v51 + 2)
            || (((_DWORD)v51 + 5) & 0xFFFFFFFC) + v12 < v12 )
          {
            return (unsigned int)-1073741675;
          }
          ++v20;
          v12 += (v51 + 5) & 0xFFFFFFFC;
        }
        while ( v20 < a1[3] );
      }
      v6 = v52;
      goto LABEL_42;
    case 5:
      goto LABEL_19;
    case 6:
LABEL_45:
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + 8 * (_DWORD)v13 < v12 )
        return (unsigned int)-1073741675;
      v12 += 8 * v13;
      v22 = 0;
      if ( (_DWORD)v13 )
      {
        v23 = a1 + 4;
        while ( (unsigned int)v5 >= *v23 && (unsigned int)(v5 - *v23) >= 8 )
        {
          ++v22;
          ++v23;
          if ( v22 >= (unsigned int)v13 )
            goto LABEL_42;
        }
        return (unsigned int)-1073741705;
      }
      goto LABEL_42;
  }
  if ( v14 != 16 )
    goto LABEL_42;
LABEL_19:
  v15 = 16 * v13;
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF || v15 + v12 < v12 )
    return (unsigned int)-1073741675;
  v12 += v15;
  v16 = 0;
  if ( (_DWORD)v13 )
  {
    v17 = a1 + 4;
    while ( 1 )
    {
      v18 = *v17;
      if ( (unsigned int)v5 < (unsigned int)v18 || (unsigned int)(v5 - v18) < 4 )
        break;
      v19 = *(unsigned int *)((char *)a1 + v18);
      if ( (int)v18 + 4 < (unsigned int)v18 )
        return (unsigned int)-1073741675;
      if ( (int)v5 - ((int)v18 + 4) < v19 )
        break;
      if ( v19 + 3 < v19 || ((v19 + 3) & 0xFFFFFFFC) + v12 < v12 )
        return (unsigned int)-1073741675;
      ++v16;
      ++v17;
      v12 += (v19 + 3) & 0xFFFFFFFC;
      if ( v16 >= (unsigned int)v13 )
        goto LABEL_42;
    }
    return (unsigned int)-1073741705;
  }
LABEL_42:
  if ( *v6 < v12 )
  {
    *v6 = v12;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *v6 = v12;
  memset(a3, 0, v12);
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  a3[3] = a1[2];
  a3[4] = a1[3];
  if ( v11 >= 0xFFFFFFE0 || v11 + 35 < v11 + 32 )
    return (unsigned int)-1073741675;
  v24 = (v11 + 35) & 0xFFFFFFFC;
  memmove(a3 + 8, (char *)a1 + *a1, v11);
  v25 = *((unsigned __int16 *)a3 + 4);
  v26 = (char *)a3 + v24;
  *(_QWORD *)a3 = a3 + 8;
  if ( v25 <= 0 )
    return (unsigned int)-1073741705;
  if ( v25 > 2 )
  {
    if ( v25 == 3 )
    {
      v37 = a3[4];
      v38 = 8LL * v37;
      if ( v38 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v39 = v38 + v24;
      if ( (unsigned int)v38 + v24 < v24 )
        return (unsigned int)-1073741675;
      v9 = 0;
      v40 = (char *)a3 + v39;
      *((_QWORD *)a3 + 3) = v26;
      v41 = 0;
      if ( v37 )
      {
        v42 = v5;
        for ( i = v5; ; v42 = i )
        {
          v43 = v41;
          v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[v41 + 4]), v42, &v51);
          if ( (v9 & 0x80000000) != 0 )
            break;
          v44 = v51 + 2;
          if ( (int)v51 + 2 < (unsigned int)v51 )
            return (unsigned int)-1073741675;
          v45 = v44 + v39;
          if ( v44 + v39 < v39 || v45 + 3 < v45 )
            return (unsigned int)-1073741675;
          v9 = 0;
          v39 = (v45 + 3) & 0xFFFFFFFC;
          memmove(v40, (char *)a1 + a1[v41++ + 4], v44);
          *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v43) = v40;
          v40 = (char *)a3 + v39;
          if ( v41 >= a3[4] )
            return v9;
        }
      }
      return v9;
    }
    if ( v25 == 5 )
    {
LABEL_61:
      v27 = a3[4];
      v28 = 16LL * v27;
      if ( v28 <= 0xFFFFFFFF )
      {
        v29 = v28 + v24;
        if ( (unsigned int)v28 + v24 >= v24 )
        {
          v30 = 0;
          v31 = (char *)a3 + v29;
          *((_QWORD *)a3 + 3) = v26;
          LODWORD(v51) = 0;
          v9 = 0;
          if ( !v27 )
            return v9;
          while ( 1 )
          {
            v32 = v30;
            v33 = &a1[v30];
            v34 = *(unsigned int *)((char *)a1 + v33[4]);
            v35 = v29 + v34;
            if ( v29 + v34 < v29 || v35 + 3 < v35 )
              break;
            v36 = 2 * v32;
            v29 = (v35 + 3) & 0xFFFFFFFC;
            v9 = 0;
            *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v36) = 0LL;
            if ( v34 )
            {
              memmove(v31, (char *)a1 + v33[4] + 4, v34);
              *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v36) = v31;
            }
            v31 = (char *)a3 + v29;
            *(_DWORD *)(*((_QWORD *)a3 + 3) + 8 * v36 + 8) = v34;
            v30 = v51 + 1;
            LODWORD(v51) = v30;
            if ( v30 >= a3[4] )
              return v9;
          }
        }
      }
      return (unsigned int)-1073741675;
    }
    if ( v25 != 6 )
    {
      if ( v25 == 16 )
        goto LABEL_61;
      return (unsigned int)-1073741705;
    }
  }
  v46 = a3[4];
  v47 = 8LL * v46;
  if ( v47 > 0xFFFFFFFF || v24 + (unsigned int)v47 < v24 )
    return (unsigned int)-1073741675;
  *((_QWORD *)a3 + 3) = v26;
  v9 = 0;
  if ( v46 )
  {
    do
    {
      v48 = v4++;
      *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v48) = *(_QWORD *)((char *)a1 + a1[v48 + 4]);
    }
    while ( v4 < a3[4] );
  }
  return v9;
}
