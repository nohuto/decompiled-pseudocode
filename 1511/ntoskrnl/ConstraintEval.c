/*
 * XREFs of ConstraintEval @ 0x14045F6D0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FilterEval @ 0x140441C20 (FilterEval.c)
 *     SimplifyFilter @ 0x140460A24 (SimplifyFilter.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  int *v17; // rdi
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // r15d
  int *v23; // rbx
  __int64 v25; // rcx
  const wchar_t *v26; // rcx
  const wchar_t *v27; // rdx
  int v28; // r14d
  unsigned int v29; // eax
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
  v32 = 0;
  v31 = 0;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741823;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 56LL * a1, 0x52544C46u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter((unsigned int)v6, a2, &v32, PoolWithTag);
    LODWORD(v6) = v32;
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
    v12 = 14LL * v11;
    if ( v10[v12 + 6] == *(_DWORD *)(a3 + 16) )
    {
      v14 = *(_QWORD *)&v10[v12 + 2] - *(_QWORD *)a3;
      if ( !v14 )
        v14 = *(_QWORD *)&v10[v12 + 4] - *(_QWORD *)(a3 + 8);
      if ( !v14 && v10[v12 + 7] == *(_DWORD *)(a3 + 20) )
      {
        v15 = *(const wchar_t **)&v10[v12 + 8];
        v16 = *(const wchar_t **)(a3 + 24);
        if ( (v15 == v16 || v15 && v16 && !wcsicmp(v15, v16)) && v10[v12] == a4 )
          break;
      }
    }
    if ( ++v11 >= (unsigned int)v6 )
      goto LABEL_9;
  }
  v17 = &v10[14 * v11];
  if ( !v17 )
    goto LABEL_9;
  v35[0] = *(_OWORD *)(v17 + 2);
  v35[1] = *(_OWORD *)(v17 + 6);
  v35[2] = *(_OWORD *)(v17 + 10);
  v18 = a4 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 0x10000;
      if ( v20 )
      {
        if ( v20 != 0x10000 )
          goto LABEL_9;
        v21 = v17[10];
        if ( v21 != 18 && v21 != 25 && v21 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( LODWORD(v35[2]) != 17 )
          goto LABEL_9;
        v30 = &unk_1403352BA;
        if ( **((_BYTE **)&v35[2] + 1) != 0xFF )
          v30 = &unk_1402D47B8;
        *((_QWORD *)&v35[2] + 1) = v30;
      }
    }
  }
  else
  {
    *(_QWORD *)&v35[2] = 0x400000007LL;
    *((_QWORD *)&v35[2] + 1) = &unk_1403352BC;
  }
  v22 = 0;
  do
  {
    v23 = &v10[14 * v22];
    if ( v23 != v17 && v23[6] == v17[6] )
    {
      v25 = *((_QWORD *)v23 + 1) - *((_QWORD *)v17 + 1);
      if ( !v25 )
        v25 = *((_QWORD *)v23 + 2) - *((_QWORD *)v17 + 2);
      if ( !v25 && v23[7] == v17[7] )
      {
        v26 = (const wchar_t *)*((_QWORD *)v23 + 4);
        v27 = (const wchar_t *)*((_QWORD *)v17 + 4);
        if ( v26 == v27 || v26 && v27 && !wcsicmp(v26, v27) )
        {
          v28 = *v23;
          if ( *v23 != *v17 )
            goto LABEL_9;
          if ( v23[10] != v17[10] )
            goto LABEL_9;
          v29 = v23[11];
          if ( v29 != v17[11] || memcmp(*((const void **)v23 + 6), *((const void **)v17 + 6), v29) )
            goto LABEL_9;
          *v23 = v28 ^ 0x10000;
        }
      }
    }
    ++v22;
  }
  while ( v22 < (unsigned int)v6 );
  *v17 ^= 0x10000u;
  v34 = v35;
  v33 = 1;
  v13 = FilterEval(
          (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *))GetPropertyFromPropArray,
          (__int64)&v33,
          v6,
          v10,
          &v31);
  if ( v13 < 0 )
    goto LABEL_29;
  if ( !v31 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v17;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v17 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v17 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v17 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_29;
  }
LABEL_9:
  v13 = -1073741823;
LABEL_29:
  ExFreePoolWithTag(v10, 0x52544C46u);
  return (unsigned int)v13;
}
