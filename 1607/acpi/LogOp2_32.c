/*
 * XREFs of LogOp2_32 @ 0x1C0025478
 * Callers:
 *     LogOp2 @ 0x1C0018490 (LogOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memcmp @ 0x1C002BD60 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // edi
  __int16 v9; // ax
  unsigned int v10; // ebp
  size_t v11; // r8
  unsigned int v12; // r14d
  const void *v13; // rdx
  const void *v14; // rcx
  int v15; // eax
  bool v16; // cc
  __int16 v18; // ax
  unsigned __int8 *v19; // rax
  bool v20; // sf
  unsigned int v21; // ebp
  size_t v22; // r8
  unsigned int v23; // r14d
  int v24; // eax
  bool v25; // cc
  __int16 v26; // ax
  unsigned __int8 *v27; // rax
  bool v28; // zf
  bool v29; // sf
  unsigned int v30; // ebp
  size_t v31; // r8
  unsigned int v32; // r14d
  const void *v33; // rdx
  const void *v34; // rcx
  int v35; // eax
  bool v36; // cc
  bool v37; // zf
  unsigned __int8 *v38; // rax
  __int64 v39; // rax

  v4 = *(_QWORD *)(a2 + 56);
  v5 = 0;
  v6 = a2;
  v7 = a1;
  LOBYTE(a4) = 0;
  v8 = 0;
  if ( *(_DWORD *)(v4 + 8) == 144 )
  {
    v8 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, (__int64)"II");
    if ( v8 < 0 )
      return (unsigned int)v8;
    v39 = *(_QWORD *)(v6 + 80);
    if ( !*(_DWORD *)(v39 + 16) )
      goto LABEL_22;
    goto LABEL_87;
  }
  if ( *(_DWORD *)(v4 + 8) == 145 )
  {
    v8 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, (__int64)"II");
    if ( v8 < 0 )
      return (unsigned int)v8;
    v39 = *(_QWORD *)(v6 + 80);
    if ( *(_DWORD *)(v39 + 16) )
      goto LABEL_14;
LABEL_87:
    if ( *(_DWORD *)(v39 + 56) )
      goto LABEL_14;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v4 + 8) != 147 )
  {
    if ( *(_DWORD *)(v4 + 8) == 148 )
    {
      v8 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, (__int64)"DD");
      if ( v8 < 0 )
        return (unsigned int)v8;
      a1 = *(_QWORD *)(v6 + 80);
      v26 = *(_WORD *)(a1 + 2);
      if ( v26 == 1 && *(_WORD *)(a1 + 42) == 1 )
      {
        LOBYTE(a4) = *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 56);
        goto LABEL_15;
      }
      if ( v26 == 2 && *(_WORD *)(a1 + 42) == 2 )
      {
        v27 = *(unsigned __int8 **)(a1 + 32);
        v4 = *(_QWORD *)(a1 + 72) - (_QWORD)v27;
        do
        {
          a2 = v27[v4];
          a1 = *v27 - (unsigned int)a2;
          if ( (_DWORD)a1 )
            break;
          ++v27;
        }
        while ( (_DWORD)a2 );
        v28 = (_DWORD)a1 == 0;
        v29 = (int)a1 < 0;
      }
      else
      {
        if ( v26 != 3 || *(_WORD *)(a1 + 42) != 3 )
          goto LABEL_19;
        v30 = *(_DWORD *)(a1 + 24);
        v31 = v30;
        v32 = *(_DWORD *)(a1 + 64);
        v33 = *(const void **)(a1 + 72);
        v34 = *(const void **)(a1 + 32);
        if ( v30 > v32 )
          v31 = v32;
        v35 = memcmp(v34, v33, v31);
        v36 = v30 <= v32;
        if ( v30 < v32 )
        {
          a1 = 0xFFFFFFFFLL;
          if ( !v35 )
            v35 = -1;
          v36 = v30 <= v32;
        }
        if ( !v36 && !v35 )
          v35 = 1;
        v28 = v35 == 0;
        v29 = v35 < 0;
      }
      LOBYTE(a4) = !v29 && !v28;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v4 + 8) != 149 )
      goto LABEL_15;
    v8 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, (__int64)"DD");
    if ( v8 < 0 )
      return (unsigned int)v8;
    a4 = *(_QWORD *)(v6 + 80);
    v18 = *(_WORD *)(a4 + 2);
    if ( v18 == 1 && *(_WORD *)(a4 + 42) == 1 )
    {
      a1 = *(unsigned int *)(a4 + 56);
      LOBYTE(a4) = *(_DWORD *)(a4 + 16) < (unsigned int)a1;
      goto LABEL_15;
    }
    if ( v18 == 2 && *(_WORD *)(a4 + 42) == 2 )
    {
      v19 = *(unsigned __int8 **)(a4 + 32);
      v4 = *(_QWORD *)(a4 + 72) - (_QWORD)v19;
      do
      {
        a2 = v19[v4];
        a1 = *v19 - (unsigned int)a2;
        if ( (_DWORD)a1 )
          break;
        ++v19;
      }
      while ( (_DWORD)a2 );
      v20 = (int)a1 < 0;
    }
    else
    {
      if ( v18 != 3 || *(_WORD *)(a4 + 42) != 3 )
        goto LABEL_19;
      v21 = *(_DWORD *)(a4 + 24);
      v22 = v21;
      v23 = *(_DWORD *)(a4 + 64);
      if ( v21 > v23 )
        v22 = v23;
      v24 = memcmp(*(const void **)(a4 + 32), *(const void **)(a4 + 72), v22);
      v25 = v21 <= v23;
      if ( v21 < v23 )
      {
        a1 = 0xFFFFFFFFLL;
        if ( !v24 )
          v24 = -1;
        v25 = v21 <= v23;
      }
      if ( !v25 && !v24 )
        v24 = 1;
      v20 = v24 < 0;
    }
    LOBYTE(a4) = v20;
    goto LABEL_15;
  }
  v8 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, (__int64)"DD");
  if ( v8 < 0 )
    return (unsigned int)v8;
  a1 = *(_QWORD *)(v6 + 80);
  v9 = *(_WORD *)(a1 + 2);
  if ( v9 == 1 && *(_WORD *)(a1 + 42) == 1 )
  {
    v37 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(a1 + 56);
LABEL_76:
    LOBYTE(a4) = v37;
    goto LABEL_15;
  }
  if ( v9 == 2 && *(_WORD *)(a1 + 42) == 2 )
  {
    v38 = *(unsigned __int8 **)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 72) - (_QWORD)v38;
    do
    {
      a2 = v38[v4];
      a1 = *v38 - (unsigned int)a2;
      if ( (_DWORD)a1 )
        break;
      ++v38;
    }
    while ( (_DWORD)a2 );
    v37 = (_DWORD)a1 == 0;
    goto LABEL_76;
  }
  if ( v9 != 3 || *(_WORD *)(a1 + 42) != 3 )
  {
LABEL_19:
    v8 = -1073741811;
    LogError(3221225485LL);
    AcpiDiagTraceAmlError(v7, 3221225485LL);
    PrintDebugMessage(238, 0, 0, 0, 0LL);
    return (unsigned int)v8;
  }
  v10 = *(_DWORD *)(a1 + 24);
  v11 = v10;
  v12 = *(_DWORD *)(a1 + 64);
  v13 = *(const void **)(a1 + 72);
  v14 = *(const void **)(a1 + 32);
  if ( v10 > v12 )
    v11 = v12;
  v15 = memcmp(v14, v13, v11);
  v16 = v10 <= v12;
  if ( v10 < v12 )
  {
    a1 = 0xFFFFFFFFLL;
    if ( !v15 )
      v15 = -1;
    v16 = v10 <= v12;
  }
  if ( !v16 )
  {
    if ( v15 )
      goto LABEL_22;
    v15 = 1;
  }
  if ( v15 )
  {
LABEL_22:
    LOBYTE(a4) = 0;
    goto LABEL_15;
  }
LABEL_14:
  LOBYTE(a4) = 1;
LABEL_15:
  *(_WORD *)(*(_QWORD *)(v6 + 88) + 2LL) = 1;
  if ( (_BYTE)a4 )
  {
    IsCompatableDSDTRevision(a1, a2, v4, a4);
    v5 = -1;
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 88) + 16LL) = v5;
  return (unsigned int)v8;
}
