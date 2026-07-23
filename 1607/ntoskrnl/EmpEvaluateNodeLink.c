/*
 * XREFs of EmpEvaluateNodeLink @ 0x140008ACC
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140008910 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140008ACC (EmpEvaluateNodeLink.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140008ACC (EmpEvaluateNodeLink.c)
 *     EmpEvaluateParseNodeMapping @ 0x140008F14 (EmpEvaluateParseNodeMapping.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rdi
  int v17; // esi
  unsigned int v19; // r8d
  unsigned int v20; // edx
  PVOID v21; // rax
  bool v22; // zf
  void *v23; // rbp
  void *v24; // rdi
  int v25; // eax
  unsigned int v27; // [rsp+70h] [rbp-58h]
  unsigned int v28; // [rsp+74h] [rbp-54h]
  int v29; // [rsp+78h] [rbp-50h]
  PVOID v30; // [rsp+80h] [rbp-48h]
  PVOID PoolWithTag; // [rsp+88h] [rbp-40h]
  PVOID P; // [rsp+90h] [rbp-38h]
  __int64 v33; // [rsp+98h] [rbp-30h]
  unsigned int v34; // [rsp+D0h] [rbp+8h]

  v11 = 0LL;
  P = 0LL;
  v30 = 0LL;
  v12 = 0LL;
  v13 = *a1;
  v14 = 0LL;
  PoolWithTag = 0LL;
  v15 = 1;
  if ( !*a1 )
  {
    v14 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v14 + 16) )
      return v15;
    v19 = *(_DWORD *)(v14 + 60);
    v34 = *(_DWORD *)(v14 + 64);
    v20 = *(_DWORD *)(v14 + 56);
    goto LABEL_11;
  }
  if ( v13 == 1 )
  {
    v11 = *((_QWORD *)a1 + 1);
    if ( !*(_BYTE *)(v11 + 20) )
      return v15;
    v20 = *(_DWORD *)(v11 + 40);
    v34 = *(_DWORD *)(v11 + 48);
    v19 = *(_DWORD *)(v11 + 44);
LABEL_11:
    v27 = v19;
    v28 = v20;
    v29 = a1[4];
    if ( !v29 || (v33 = *((_QWORD *)a1 + 3)) == 0 )
    {
      v29 = a9;
      LODWORD(v33) = a8;
      if ( !a8 )
      {
        if ( v13 )
          return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v11 + 96), a2, a3, a4, a5, a6, a7, 0LL, 0);
        else
          return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v14 + 16))(
                                 a6,
                                 a7,
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 *(_QWORD *)(v14 + 32));
      }
    }
    if ( v20 )
    {
      if ( !is_mul_ok(v20, 8uLL) )
        return v15;
      P = ExAllocatePoolWithTag(PagedPool, 8LL * v20, 0x76654D45u);
      if ( !P )
        return v15;
      v12 = 0LL;
    }
    if ( v27 )
    {
      if ( !is_mul_ok(v27, 4uLL) )
      {
        v24 = 0LL;
        v23 = 0LL;
        goto LABEL_28;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v27, 0x76654D45u);
      v12 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v23 = 0LL;
        goto LABEL_27;
      }
    }
    if ( v34 )
    {
      if ( !is_mul_ok(v34, 8uLL) )
        goto LABEL_57;
      v21 = ExAllocatePoolWithTag(PagedPool, 8LL * v34, 0x76654D45u);
      v30 = v21;
      if ( !v21 )
      {
        v23 = PoolWithTag;
        v24 = 0LL;
        goto LABEL_28;
      }
      v12 = (__int64)PoolWithTag;
    }
    else
    {
      v21 = 0LL;
    }
    if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                            v33,
                            v29,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            (__int64)P,
                            v28,
                            v12,
                            v27,
                            (__int64)v21,
                            v34) )
    {
      v22 = *a1 == 0;
      v23 = PoolWithTag;
      if ( !v22 )
      {
        v24 = v30;
        v15 = EmpEvaluateNodeLink(
                *(_QWORD *)(v11 + 96),
                (_DWORD)P,
                v28,
                (_DWORD)PoolWithTag,
                v27,
                (__int64)v30,
                v34,
                0LL,
                0);
        goto LABEL_28;
      }
      v15 = (*(__int64 (__fastcall **)(PVOID, _QWORD, PVOID, _QWORD, PVOID, unsigned int, _QWORD))(v14 + 16))(
              v30,
              v34,
              P,
              v28,
              PoolWithTag,
              v27,
              *(_QWORD *)(v14 + 32));
LABEL_27:
      v24 = v30;
LABEL_28:
      if ( P )
        ExFreePoolWithTag(P, 0x76654D45u);
      if ( v23 )
        ExFreePoolWithTag(v23, 0x76654D45u);
      if ( v24 )
        ExFreePoolWithTag(v24, 0x76654D45u);
      return v15;
    }
LABEL_57:
    v23 = PoolWithTag;
    goto LABEL_27;
  }
  if ( v13 == 2 )
  {
    v16 = *((_QWORD *)a1 + 1);
    v17 = EmpEvaluateNodeLink(
            *(_QWORD *)(v16 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v16 + 24),
            *(_DWORD *)(v16 + 16));
    if ( v17 != 1 )
    {
      if ( *(_BYTE *)v16 == 38 && !v17 )
        return 0;
      if ( v17 == 2 && *(_BYTE *)v16 == 124 )
        return 2;
      v25 = EmpEvaluateNodeLink(
              *(_QWORD *)(v16 + 32),
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              *(_QWORD *)(v16 + 48),
              *(_DWORD *)(v16 + 40));
      if ( v25 != 1 )
      {
        if ( *(_BYTE *)v16 == 38 )
        {
          if ( v17 && v25 )
            v15 = 2;
          else
            v15 = 0;
        }
        if ( *(_BYTE *)v16 == 124 )
        {
          if ( !v17 && !v25 )
            return 0;
          return 2;
        }
      }
    }
  }
  return v15;
}
