/*
 * XREFs of ConstraintEval @ 0x140489ED0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SimplifyFilter @ 0x1404896D0 (SimplifyFilter.c)
 *     FilterEval @ 0x1404E5754 (FilterEval.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  char *PoolWithTag; // rax
  char *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  char *v18; // rdi
  int v19; // ebx
  int v20; // ebx
  unsigned int v21; // r15d
  char *v22; // rbx
  __int64 v23; // rcx
  const wchar_t *v24; // rcx
  const wchar_t *v25; // rdx
  int v26; // r14d
  unsigned int v27; // eax
  int v28; // ebx
  int v29; // eax
  void *v30; // rcx
  int v31; // [rsp+30h] [rbp-50h] BYREF
  int v32; // [rsp+34h] [rbp-4Ch] BYREF
  int v33; // [rsp+38h] [rbp-48h] BYREF
  _OWORD *v34; // [rsp+40h] [rbp-40h]
  _OWORD v35[3]; // [rsp+48h] [rbp-38h] BYREF

  v6 = a1;
  memset(v35, 0, sizeof(v35));
  v33 = 0;
  v34 = 0LL;
  v31 = 0;
  v32 = 0;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_DWORD)v6 )
    return (unsigned int)-1073741823;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 56 * v6, 0x52544C46u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter(v6, (__int64)a2, &v31, (__int64)PoolWithTag);
    LODWORD(v6) = v31;
  }
  else
  {
    memmove(PoolWithTag, a2, 56 * v6);
  }
  v11 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_9;
  while ( 1 )
  {
    v12 = 56LL * v11;
    if ( *(_DWORD *)&v10[v12 + 24] == *(_DWORD *)(a3 + 16) )
    {
      v15 = *(_QWORD *)&v10[v12 + 8] - *(_QWORD *)a3;
      if ( !v15 )
        v15 = *(_QWORD *)&v10[v12 + 16] - *(_QWORD *)(a3 + 8);
      if ( !v15 && *(_DWORD *)&v10[v12 + 28] == *(_DWORD *)(a3 + 20) )
      {
        v16 = *(const wchar_t **)&v10[v12 + 32];
        v17 = *(const wchar_t **)(a3 + 24);
        if ( (v16 == v17 || v16 && v17 && !wcsicmp(v16, v17)) && *(_DWORD *)&v10[v12] == a4 )
          break;
      }
    }
    if ( ++v11 >= (unsigned int)v6 )
      goto LABEL_9;
  }
  v18 = &v10[56 * v11];
  if ( !v18 )
    goto LABEL_9;
  v35[0] = *(_OWORD *)(v18 + 8);
  v35[1] = *(_OWORD *)(v18 + 24);
  v35[2] = *(_OWORD *)(v18 + 40);
  v19 = a4 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v28 = v20 - 0x10000;
      if ( v28 )
      {
        if ( v28 != 0x10000 )
          goto LABEL_9;
        v29 = *((_DWORD *)v18 + 10);
        if ( v29 != 18 && v29 != 25 && v29 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( LODWORD(v35[2]) != 17 )
          goto LABEL_9;
        v30 = &unk_1403582C8;
        if ( **((_BYTE **)&v35[2] + 1) != 0xFF )
          v30 = &unk_1402F9B40;
        *((_QWORD *)&v35[2] + 1) = v30;
      }
    }
  }
  else
  {
    *(_QWORD *)&v35[2] = 0x400000007LL;
    *((_QWORD *)&v35[2] + 1) = &unk_1403582C4;
  }
  v21 = 0;
  do
  {
    v22 = &v10[56 * v21];
    if ( v22 != v18 && *((_DWORD *)v22 + 6) == *((_DWORD *)v18 + 6) )
    {
      v23 = *((_QWORD *)v22 + 1) - *((_QWORD *)v18 + 1);
      if ( !v23 )
        v23 = *((_QWORD *)v22 + 2) - *((_QWORD *)v18 + 2);
      if ( !v23 && *((_DWORD *)v22 + 7) == *((_DWORD *)v18 + 7) )
      {
        v24 = (const wchar_t *)*((_QWORD *)v22 + 4);
        v25 = (const wchar_t *)*((_QWORD *)v18 + 4);
        if ( v24 == v25 || v24 && v25 && !wcsicmp(v24, v25) )
        {
          v26 = *(_DWORD *)v22;
          if ( *(_DWORD *)v22 != *(_DWORD *)v18 )
            goto LABEL_9;
          if ( *((_DWORD *)v22 + 10) != *((_DWORD *)v18 + 10) )
            goto LABEL_9;
          v27 = *((_DWORD *)v22 + 11);
          if ( v27 != *((_DWORD *)v18 + 11) || memcmp(*((const void **)v22 + 6), *((const void **)v18 + 6), v27) )
            goto LABEL_9;
          *(_DWORD *)v22 = v26 ^ 0x10000;
        }
      }
    }
    ++v21;
  }
  while ( v21 < (unsigned int)v6 );
  *(_DWORD *)v18 ^= 0x10000u;
  v34 = v35;
  v33 = 1;
  v13 = FilterEval((unsigned int)GetPropertyFromPropArray, (unsigned int)&v33, v6, (_DWORD)v10, (__int64)&v32);
  if ( v13 < 0 )
    goto LABEL_10;
  if ( !v32 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v18;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v18 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v18 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v18 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_10;
  }
LABEL_9:
  v13 = -1073741823;
LABEL_10:
  ExFreePoolWithTag(v10, 0x52544C46u);
  return (unsigned int)v13;
}
