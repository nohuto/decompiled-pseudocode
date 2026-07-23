/*
 * XREFs of AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140233A2C
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  size_t v5; // r15
  unsigned int *v6; // r12
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r11d
  unsigned int *v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rcx
  unsigned int v23; // r8d
  _DWORD *v24; // rcx
  bool v25; // cf
  unsigned int v26; // ebx
  char *v27; // rdx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned int v31; // ebp
  unsigned int v32; // eax
  char *v33; // r15
  __int64 v34; // r12
  unsigned int *v35; // rcx
  unsigned int v36; // r13d
  unsigned int v37; // eax
  __int64 v38; // r12
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  unsigned int v41; // ebp
  unsigned int v42; // eax
  char *v43; // r12
  size_t v44; // rdx
  __int64 v45; // r13
  unsigned int v46; // r15d
  unsigned int v47; // eax
  __int64 v48; // r13
  unsigned int v49; // ecx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  size_t pcbLength; // [rsp+20h] [rbp-48h] BYREF
  size_t i; // [rsp+28h] [rbp-40h]
  unsigned int v55; // [rsp+70h] [rbp+8h]
  unsigned int v56; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  pcbLength = 0LL;
  v6 = a4;
  if ( !a1 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( !a1[3] )
    return (unsigned int)-1073741705;
  v10 = *a1;
  if ( a2 < (unsigned int)v10 || a2 - (unsigned int)v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v10), a2 - (unsigned int)v10, &pcbLength);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  v11 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
    return (unsigned int)-1073741675;
  if ( (int)pcbLength + 5 < (unsigned int)(pcbLength + 2) )
    return (unsigned int)-1073741675;
  v12 = ((pcbLength + 5) & 0xFFFFFFFC) + 40;
  if ( v12 < 0x28 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  v14 = *((unsigned __int16 *)a1 + 2);
  if ( *((_WORD *)a1 + 2) )
  {
    if ( *((unsigned __int16 *)a1 + 2) > 2u )
    {
      if ( v14 == 3 )
      {
        v20 = 16 * v13;
        if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF || v20 + v12 < v12 )
          return (unsigned int)-1073741675;
        v12 += v20;
        v21 = 0;
        if ( (_DWORD)v13 )
        {
          do
          {
            v22 = a1[v21 + 4];
            if ( (unsigned int)v5 < (unsigned int)v22 || (unsigned int)(v5 - v22) < 2 )
              return (unsigned int)-1073741705;
            v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v22), (unsigned int)(v5 - v22), &pcbLength);
            if ( (v9 & 0x80000000) != 0 )
              return v9;
            if ( (int)pcbLength + 2 < (unsigned int)pcbLength
              || (int)pcbLength + 5 < (unsigned int)(pcbLength + 2)
              || (((_DWORD)pcbLength + 5) & 0xFFFFFFFC) + v12 < v12 )
            {
              return (unsigned int)-1073741675;
            }
            ++v21;
            v12 += (pcbLength + 5) & 0xFFFFFFFC;
          }
          while ( v21 < a1[3] );
        }
        v6 = a4;
        goto LABEL_53;
      }
      if ( v14 == 5 )
        goto LABEL_21;
      if ( v14 != 6 )
      {
        if ( v14 != 16 )
          goto LABEL_53;
LABEL_21:
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
              goto LABEL_53;
          }
          return (unsigned int)-1073741705;
        }
        goto LABEL_53;
      }
    }
    if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + 8 * (_DWORD)v13 < v12 )
      return (unsigned int)-1073741675;
    v12 += 8 * v13;
    v23 = 0;
    if ( (_DWORD)v13 )
    {
      v24 = a1 + 4;
      while ( (unsigned int)v5 >= *v24 && (unsigned int)(v5 - *v24) >= 8 )
      {
        ++v23;
        ++v24;
        if ( v23 >= (unsigned int)v13 )
          goto LABEL_53;
      }
      return (unsigned int)-1073741705;
    }
  }
LABEL_53:
  v25 = *v6 < v12;
  *v6 = v12;
  if ( v25 )
    return (unsigned int)-1073741789;
  memset(a3, 0, v12);
  *((_WORD *)a3 + 8) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 9) = *((_WORD *)a1 + 3);
  a3[5] = a1[2];
  a3[6] = a1[3];
  if ( v11 >= 0xFFFFFFD8 || v11 + 43 < v11 + 40 )
    return (unsigned int)-1073741675;
  v26 = (v11 + 43) & 0xFFFFFFFC;
  memmove(a3 + 10, (char *)a1 + *a1, v11);
  *((_QWORD *)a3 + 1) = a3 + 10;
  *((_WORD *)a3 + 1) = v11;
  *(_WORD *)a3 = v11 - 2;
  v27 = (char *)a3 + v26;
  v28 = *((unsigned __int16 *)a3 + 8);
  if ( !*((_WORD *)a3 + 8) )
    return (unsigned int)-1073741705;
  if ( *((unsigned __int16 *)a3 + 8) > 2u )
  {
    if ( v28 == 3 )
    {
      v39 = a3[6];
      v40 = 16LL * v39;
      if ( v40 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v41 = v40 + v26;
      if ( (unsigned int)v40 + v26 < v26 )
        return (unsigned int)-1073741675;
      v42 = 0;
      v43 = (char *)a3 + v41;
      *((_QWORD *)a3 + 4) = v27;
      v56 = 0;
      v9 = 0;
      if ( v39 )
      {
        v44 = v5;
        for ( i = v5; ; v44 = i )
        {
          v45 = v42;
          v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + a1[v42 + 4]), v44, &pcbLength);
          if ( (v9 & 0x80000000) != 0 )
            break;
          v46 = pcbLength + 2;
          if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
            return (unsigned int)-1073741675;
          v47 = v46 + v41;
          if ( v46 + v41 < v41 || v47 + 3 < v47 )
            return (unsigned int)-1073741675;
          v9 = 0;
          v41 = (v47 + 3) & 0xFFFFFFFC;
          memmove(v43, (char *)a1 + a1[v45 + 4], v46);
          v48 = 2 * v45;
          *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v48 + 8) = v43;
          v43 = (char *)a3 + v41;
          *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v48) = v46 - 2;
          *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v48 + 2) = v46;
          v42 = v56 + 1;
          v56 = v42;
          if ( v42 >= a3[6] )
            return v9;
        }
      }
      return v9;
    }
    if ( v28 == 5 )
    {
LABEL_63:
      v29 = a3[6];
      v30 = 16LL * v29;
      if ( v30 <= 0xFFFFFFFF )
      {
        v31 = v30 + v26;
        if ( (unsigned int)v30 + v26 >= v26 )
        {
          v32 = 0;
          v33 = (char *)a3 + v31;
          *((_QWORD *)a3 + 4) = v27;
          v55 = 0;
          v9 = 0;
          if ( !v29 )
            return v9;
          while ( 1 )
          {
            v34 = v32;
            v35 = &a1[v32];
            v36 = *(unsigned int *)((char *)a1 + v35[4]);
            v37 = v31 + v36;
            if ( v31 + v36 < v31 || v37 + 3 < v37 )
              break;
            v38 = 2 * v34;
            v31 = (v37 + 3) & 0xFFFFFFFC;
            v9 = 0;
            *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v38) = 0LL;
            if ( v36 )
            {
              memmove(v33, (char *)a1 + v35[4] + 4, v36);
              *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v38) = v33;
            }
            v33 = (char *)a3 + v31;
            *(_DWORD *)(*((_QWORD *)a3 + 4) + 8 * v38 + 8) = v36;
            v32 = v55 + 1;
            v55 = v32;
            if ( v32 >= a3[6] )
              return v9;
          }
        }
      }
      return (unsigned int)-1073741675;
    }
    if ( v28 != 6 )
    {
      if ( v28 == 16 )
        goto LABEL_63;
      return (unsigned int)-1073741705;
    }
  }
  v49 = a3[6];
  v50 = 8LL * v49;
  if ( v50 > 0xFFFFFFFF || v26 + (unsigned int)v50 < v26 )
    return (unsigned int)-1073741675;
  *((_QWORD *)a3 + 4) = v27;
  v9 = 0;
  if ( v49 )
  {
    do
    {
      v51 = v4++;
      *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v51) = *(_QWORD *)((char *)a1 + a1[v51 + 4]);
    }
    while ( v4 < a3[6] );
  }
  return v9;
}
