/*
 * XREFs of LogOp2_32 @ 0x1C00206BC
 * Callers:
 *     LogOp2 @ 0x1C0012D80 (LogOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 *     memcmp @ 0x1C0023710 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  bool v4; // r8
  int v5; // edi
  __int64 v6; // rcx
  __int16 v7; // ax
  unsigned int v9; // ebp
  size_t v10; // r8
  unsigned int v11; // r14d
  const void *v12; // rdx
  const void *v13; // rcx
  int v14; // eax
  bool v15; // cc
  __int64 v16; // r9
  __int16 v17; // ax
  unsigned __int8 *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  bool v22; // sf
  unsigned int v23; // ebp
  size_t v24; // r8
  unsigned int v25; // r14d
  int v26; // eax
  bool v27; // cc
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned __int8 *v30; // rax
  __int64 v31; // r8
  int v32; // edx
  int v33; // ecx
  bool v34; // zf
  bool v35; // sf
  unsigned int v36; // ebp
  size_t v37; // r8
  unsigned int v38; // r14d
  const void *v39; // rdx
  const void *v40; // rcx
  int v41; // eax
  bool v42; // cc
  bool v43; // zf
  unsigned __int8 *v44; // rax
  __int64 v45; // r8
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a2[7] + 8LL) == 144 )
  {
    v5 = ValidateArgTypes(a2[10], 1, (__int64)"II");
    if ( v5 < 0 )
      return (unsigned int)v5;
    v48 = a2[10];
    if ( !*(_DWORD *)(v48 + 16) )
      goto LABEL_21;
    goto LABEL_87;
  }
  if ( *(_DWORD *)(a2[7] + 8LL) == 145 )
  {
    v5 = ValidateArgTypes(a2[10], 1, (__int64)"II");
    if ( v5 < 0 )
      return (unsigned int)v5;
    v48 = a2[10];
    if ( *(_DWORD *)(v48 + 16) )
      goto LABEL_17;
LABEL_87:
    if ( *(_DWORD *)(v48 + 56) )
      goto LABEL_17;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(a2[7] + 8LL) != 147 )
  {
    if ( *(_DWORD *)(a2[7] + 8LL) == 148 )
    {
      v5 = ValidateArgTypes(a2[10], 1, (__int64)"DD");
      if ( v5 < 0 )
        return (unsigned int)v5;
      v28 = a2[10];
      v29 = *(_WORD *)(v28 + 2);
      if ( v29 == 1 && *(_WORD *)(v28 + 42) == 1 )
      {
        v4 = *(_DWORD *)(v28 + 16) > *(_DWORD *)(v28 + 56);
        goto LABEL_18;
      }
      if ( v29 == 2 && *(_WORD *)(v28 + 42) == 2 )
      {
        v30 = *(unsigned __int8 **)(v28 + 32);
        v31 = *(_QWORD *)(v28 + 72) - (_QWORD)v30;
        do
        {
          v32 = v30[v31];
          v33 = *v30 - v32;
          if ( v33 )
            break;
          ++v30;
        }
        while ( v32 );
        v34 = v33 == 0;
        v35 = v33 < 0;
      }
      else
      {
        if ( v29 != 3 || *(_WORD *)(v28 + 42) != 3 )
          return (unsigned int)-1073741811;
        v36 = *(_DWORD *)(v28 + 24);
        v37 = v36;
        v38 = *(_DWORD *)(v28 + 64);
        v39 = *(const void **)(v28 + 72);
        v40 = *(const void **)(v28 + 32);
        if ( v36 > v38 )
          v37 = v38;
        v41 = memcmp(v40, v39, v37);
        v42 = v36 <= v38;
        if ( v36 < v38 )
        {
          if ( !v41 )
            v41 = -1;
          v42 = v36 <= v38;
        }
        if ( !v42 && !v41 )
          v41 = 1;
        v34 = v41 == 0;
        v35 = v41 < 0;
      }
      v4 = !v35 && !v34;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(a2[7] + 8LL) != 149 )
      goto LABEL_18;
    v5 = ValidateArgTypes(a2[10], 1, (__int64)"DD");
    if ( v5 < 0 )
      return (unsigned int)v5;
    v16 = a2[10];
    v17 = *(_WORD *)(v16 + 2);
    if ( v17 == 1 && *(_WORD *)(v16 + 42) == 1 )
    {
      v4 = *(_DWORD *)(v16 + 16) < *(_DWORD *)(v16 + 56);
      goto LABEL_18;
    }
    if ( v17 == 2 && *(_WORD *)(v16 + 42) == 2 )
    {
      v18 = *(unsigned __int8 **)(v16 + 32);
      v19 = *(_QWORD *)(v16 + 72) - (_QWORD)v18;
      do
      {
        v20 = v18[v19];
        v21 = *v18 - v20;
        if ( v21 )
          break;
        ++v18;
      }
      while ( v20 );
      v22 = v21 < 0;
    }
    else
    {
      if ( v17 != 3 || *(_WORD *)(v16 + 42) != 3 )
        return (unsigned int)-1073741811;
      v23 = *(_DWORD *)(v16 + 24);
      v24 = v23;
      v25 = *(_DWORD *)(v16 + 64);
      if ( v23 > v25 )
        v24 = v25;
      v26 = memcmp(*(const void **)(v16 + 32), *(const void **)(v16 + 72), v24);
      v27 = v23 <= v25;
      if ( v23 < v25 )
      {
        if ( !v26 )
          v26 = -1;
        v27 = v23 <= v25;
      }
      if ( !v27 && !v26 )
        v26 = 1;
      v22 = v26 < 0;
    }
    v4 = v22;
    goto LABEL_18;
  }
  v5 = ValidateArgTypes(a2[10], 1, (__int64)"DD");
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = a2[10];
  v7 = *(_WORD *)(v6 + 2);
  if ( v7 == 1 && *(_WORD *)(v6 + 42) == 1 )
  {
    v43 = *(_DWORD *)(v6 + 16) == *(_DWORD *)(v6 + 56);
LABEL_78:
    v4 = v43;
    goto LABEL_18;
  }
  if ( v7 == 2 && *(_WORD *)(v6 + 42) == 2 )
  {
    v44 = *(unsigned __int8 **)(v6 + 32);
    v45 = *(_QWORD *)(v6 + 72) - (_QWORD)v44;
    do
    {
      v46 = v44[v45];
      v47 = *v44 - v46;
      if ( v47 )
        break;
      ++v44;
    }
    while ( v46 );
    v43 = v47 == 0;
    goto LABEL_78;
  }
  if ( v7 != 3 || *(_WORD *)(v6 + 42) != 3 )
    return (unsigned int)-1073741811;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = v9;
  v11 = *(_DWORD *)(v6 + 64);
  v12 = *(const void **)(v6 + 72);
  v13 = *(const void **)(v6 + 32);
  if ( v9 > v11 )
    v10 = v11;
  v14 = memcmp(v13, v12, v10);
  v15 = v9 <= v11;
  if ( v9 < v11 )
  {
    if ( !v14 )
      v14 = -1;
    v15 = v9 <= v11;
  }
  if ( !v15 )
  {
    if ( v14 )
      goto LABEL_21;
    v14 = 1;
  }
  if ( v14 )
  {
LABEL_21:
    v4 = 0;
    goto LABEL_18;
  }
LABEL_17:
  v4 = 1;
LABEL_18:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( v4 )
  {
    IsCompatableDSDTRevision();
    v2 = -1;
  }
  *(_DWORD *)(a2[11] + 16LL) = v2;
  return (unsigned int)v5;
}
