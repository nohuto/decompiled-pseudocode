/*
 * XREFs of PiDevCfgResolveVariableFormatString @ 0x14068B800
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // eax
  PVOID v6; // rbx
  int v7; // edi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 *v10; // r15
  NTSTATUS v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // edx
  _WORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  _WORD *v17; // r14
  _WORD *v18; // rcx
  __int64 v19; // rax
  SIZE_T v20; // r15
  PVOID PoolWithTag; // rax
  unsigned int v22; // r15d
  int v23; // eax
  __int64 v24; // rax
  int v25; // r13d
  unsigned __int16 *v26; // r14
  _QWORD *v27; // rdi
  unsigned __int16 v28; // dx
  unsigned int v29; // ecx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // r13d
  PVOID v34; // rax
  void *v35; // r12
  unsigned __int16 *v36; // r8
  unsigned __int16 *v37; // r15
  unsigned int v38; // r14d
  unsigned __int16 v39; // dx
  unsigned int v40; // ecx
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  wchar_t *v44; // rdx
  __int64 v45; // rsi
  unsigned int v46; // esi
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned int v50; // [rsp+20h] [rbp-50h]
  NTSTATUS v51; // [rsp+24h] [rbp-4Ch]
  PVOID v52; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int16 *v53; // [rsp+30h] [rbp-40h]
  PVOID v54; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h]
  __int64 v56; // [rsp+48h] [rbp-28h]
  wchar_t pszDest[12]; // [rsp+50h] [rbp-20h] BYREF

  v56 = a3;
  v52 = 0LL;
  v54 = 0LL;
  v50 = 0;
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Format", 0, &v52);
  v6 = v52;
  v7 = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_114;
  if ( *((_DWORD *)v52 + 1) != 1
    || (v8 = *((unsigned int *)v52 + 3), (unsigned int)v8 < 2)
    || (v9 = *((unsigned int *)v52 + 2), *(_WORD *)((char *)v52 + 2 * (v8 >> 1) + v9 - 2)) )
  {
    v7 = -1073741823;
    goto LABEL_114;
  }
  v10 = (unsigned __int16 *)((char *)v52 + v9);
  v53 = (unsigned __int16 *)((char *)v52 + v9);
  v11 = IopGetRegistryValue(a2, L"Variables", 0, &v54);
  v12 = v54;
  v51 = v11;
  v7 = v11;
  if ( v11 >= 0 )
  {
    if ( *((_DWORD *)v54 + 1) != 7
      || ((v13 = *((_DWORD *)v54 + 3), v14 = (char *)v54 + *((unsigned int *)v54 + 2), v13 < 4)
       || (v15 = (unsigned __int64)v13 >> 1, v14[v15 - 1])
       || v14[v15 - 2])
      && (v13 != 2 || *v14) )
    {
      v7 = -1073741823;
      goto LABEL_111;
    }
  }
  else
  {
    if ( v11 != -1073741772 )
      goto LABEL_111;
    v7 = 0;
    v51 = 0;
  }
  v16 = 0;
  if ( v54 )
  {
    v17 = (char *)v54 + *((unsigned int *)v54 + 2);
    v18 = v17;
    if ( *v17 )
    {
      do
      {
        ++v16;
        v19 = -1LL;
        do
          ++v19;
        while ( v18[v19] );
        v18 += v19 + 1;
      }
      while ( *v18 );
      v50 = v16;
      if ( v16 )
      {
        v20 = 8LL * v16;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x63647050u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          v7 = -1073741670;
          goto LABEL_111;
        }
        memset(PoolWithTag, 0, v20);
        v22 = 0;
        while ( *v17 )
        {
          v16 = v50;
          if ( v22 >= v50 )
            goto LABEL_34;
          v23 = PiDevCfgResolveVariable(a1, (__int64)v17, (UNICODE_STRING **)P + v22);
          v51 = v23;
          v7 = v23;
          if ( v23 < 0 )
          {
            if ( v23 == -1073741772 )
              v7 = -1073741823;
            v51 = v7;
            break;
          }
          v24 = -1LL;
          do
            ++v24;
          while ( v17[v24] );
          v17 += v24 + 1;
          ++v22;
        }
        v16 = v50;
LABEL_34:
        if ( v7 < 0 )
          goto LABEL_108;
        v10 = v53;
      }
    }
  }
  v25 = 0;
  v26 = v10;
  if ( !*v10 )
    goto LABEL_62;
  v27 = P;
  do
  {
    if ( *v26 != 37 || (++v26, v28 = *v26, *v26 == 37) )
    {
      ++v26;
      v25 += 2;
      goto LABEL_60;
    }
    if ( (unsigned __int16)(v28 - 48) <= 9u )
    {
      v29 = 0;
      while ( v28 && (unsigned __int16)(v28 - 48) <= 9u )
      {
        ++v26;
        v29 = v28 + 2 * (5 * v29 - 24);
        v28 = *v26;
      }
      if ( v29 < v16 )
      {
        _mm_lfence();
        v30 = v27[v29];
        if ( v30 )
        {
          v31 = *(_DWORD *)(v30 + 32);
          if ( v31 )
          {
            if ( v31 <= 2 )
            {
              v25 += *(_DWORD *)(v30 + 36) - 2;
            }
            else
            {
              if ( v31 != 4 )
              {
                if ( v31 != 7 )
                  goto LABEL_60;
                v32 = -1LL;
                do
                  ++v32;
                while ( *(_WORD *)(*(_QWORD *)(v30 + 40) + 2 * v32) );
                goto LABEL_54;
              }
              if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v30 + 40)) >= 0 )
              {
                v32 = -1LL;
                do
                  ++v32;
                while ( pszDest[v32] );
LABEL_54:
                v25 += 2 * v32;
              }
            }
          }
        }
      }
    }
LABEL_60:
    v16 = v50;
  }
  while ( *v26 );
  v6 = v52;
  v12 = v54;
  v7 = v51;
LABEL_62:
  v33 = v25 + 2;
  v34 = ExAllocatePoolWithTag(PagedPool, v33, 0x63647050u);
  v35 = v34;
  if ( !v34 )
  {
    v7 = -1073741670;
    goto LABEL_108;
  }
  v36 = v53;
  v37 = (unsigned __int16 *)v34;
  v38 = v33;
  if ( !*v53 )
    goto LABEL_102;
  while ( 2 )
  {
    if ( *v36 == 37 )
    {
      v53 = ++v36;
      v39 = *v36;
      if ( *v36 == 37 )
      {
        if ( v38 <= 2 )
          goto LABEL_99;
        *v37 = 37;
LABEL_69:
        ++v37;
        ++v36;
        v38 -= 2;
LABEL_95:
        if ( !*v36 )
          goto LABEL_101;
        continue;
      }
      if ( (unsigned __int16)(v39 - 48) > 9u )
        goto LABEL_95;
      v40 = 0;
      if ( v39 )
      {
        do
        {
          if ( (unsigned __int16)(v39 - 48) > 9u )
            break;
          ++v36;
          v41 = v39;
          v39 = *v36;
          v40 = v41 + 2 * (5 * v40 - 24);
        }
        while ( *v36 );
        v53 = v36;
      }
      if ( v40 >= v50 )
        goto LABEL_95;
      _mm_lfence();
      v42 = *((_QWORD *)P + v40);
      if ( !v42 )
        goto LABEL_95;
      v43 = *(_DWORD *)(v42 + 32);
      if ( !v43 )
        goto LABEL_89;
      if ( v43 <= 2 )
      {
        v44 = *(wchar_t **)(v42 + 40);
        v46 = *(_DWORD *)(v42 + 36) - 2;
        goto LABEL_90;
      }
      if ( v43 == 4 )
      {
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v42 + 40)) >= 0 )
        {
          v44 = pszDest;
          v47 = -1LL;
          do
            ++v47;
          while ( pszDest[v47] );
          v36 = v53;
          v46 = 2 * v47;
          goto LABEL_91;
        }
      }
      else
      {
        if ( v43 == 7 )
        {
          v44 = *(wchar_t **)(v42 + 40);
          v45 = -1LL;
          do
            ++v45;
          while ( v44[v45] );
          v46 = 2 * v45;
          goto LABEL_90;
        }
LABEL_89:
        v44 = 0LL;
        v46 = 0;
LABEL_90:
        if ( !v44 )
          goto LABEL_95;
LABEL_91:
        if ( !v46 )
          goto LABEL_95;
        if ( v38 <= v46 )
        {
LABEL_99:
          v6 = v52;
          v7 = -1073741823;
          v12 = v54;
          goto LABEL_106;
        }
        memmove(v37, v44, v46);
        v38 -= v46;
        v37 += (unsigned __int64)v46 >> 1;
      }
      v36 = v53;
      goto LABEL_95;
    }
    break;
  }
  if ( v38 > 2 )
  {
    *v37 = *v36;
    goto LABEL_69;
  }
  v7 = -1073741823;
LABEL_101:
  v12 = v54;
  v6 = v52;
LABEL_102:
  if ( v7 >= 0 )
  {
    if ( v38 == 2 )
    {
      v48 = v56;
      *v37 = 0;
      *(_QWORD *)(v48 + 40) = v35;
      v35 = 0LL;
      *(_DWORD *)(v48 + 32) = 1;
      *(_DWORD *)(v48 + 36) = v33;
    }
    else
    {
      v7 = -1073741823;
    }
  }
LABEL_106:
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
LABEL_108:
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_111:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_114:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v7;
}
