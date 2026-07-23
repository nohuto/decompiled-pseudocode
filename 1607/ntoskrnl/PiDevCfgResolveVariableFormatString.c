/*
 * XREFs of PiDevCfgResolveVariableFormatString @ 0x14063FE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpValidateRegistryMultiSz @ 0x1401CF3C4 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // r14
  NTSTATUS RegistryValue; // edi
  unsigned __int16 *v7; // r13
  NTSTATUS v8; // eax
  unsigned int *v9; // rbx
  unsigned int v10; // r10d
  const WCHAR *v11; // rsi
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  SIZE_T v14; // r14
  PVOID PoolWithTag; // rax
  unsigned int i; // r14d
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned __int16 *v20; // rsi
  _QWORD *v21; // r15
  unsigned __int16 v22; // dx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rax
  NTSTATUS v27; // eax
  unsigned int v28; // r14d
  PVOID v29; // rax
  void *v30; // r12
  unsigned __int16 *v31; // r8
  unsigned __int16 *v32; // r13
  unsigned __int16 v33; // dx
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  wchar_t *v38; // rdx
  __int64 v39; // rsi
  unsigned int v40; // esi
  __int64 v41; // rsi
  __int64 v42; // rcx
  NTSTATUS v44; // [rsp+20h] [rbp-50h]
  unsigned int v45; // [rsp+20h] [rbp-50h]
  unsigned int v46; // [rsp+24h] [rbp-4Ch]
  PVOID v47; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int16 *v48; // [rsp+30h] [rbp-40h]
  PVOID P; // [rsp+38h] [rbp-38h]
  PVOID v50; // [rsp+40h] [rbp-30h] BYREF
  __int64 v51; // [rsp+48h] [rbp-28h]
  wchar_t pszDest[12]; // [rsp+50h] [rbp-20h] BYREF

  v51 = a3;
  v50 = 0LL;
  v47 = 0LL;
  v46 = 0;
  P = 0LL;
  LODWORD(v5) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Format", 0, &v50);
  if ( RegistryValue < 0 )
    goto LABEL_105;
  if ( !PnpValidateRegistryString(v50) )
  {
    RegistryValue = -1073741823;
    goto LABEL_105;
  }
  v7 = (unsigned __int16 *)((char *)v50 + *((unsigned int *)v50 + 2));
  v48 = v7;
  v8 = IopGetRegistryValue(a2, L"Variables", 0, &v47);
  v9 = (unsigned int *)v47;
  v10 = 0;
  v44 = v8;
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(v47) )
    {
      RegistryValue = -1073741823;
      goto LABEL_103;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_103;
    RegistryValue = 0;
    v44 = 0;
  }
  if ( v9 )
  {
    v11 = (const WCHAR *)((char *)v9 + v9[2]);
    v12 = v11;
    if ( *v11 != (_WORD)v10 )
    {
      do
      {
        v5 = (unsigned int)(v5 + 1);
        v13 = -1LL;
        do
          ++v13;
        while ( v12[v13] != (_WORD)v10 );
        v12 += v13 + 1;
      }
      while ( *v12 != (_WORD)v10 );
      v46 = v5;
      if ( (_DWORD)v5 )
      {
        v14 = 8 * v5;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x63647050u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryValue = -1073741670;
          goto LABEL_103;
        }
        memset(PoolWithTag, 0, v14);
        v10 = 0;
        for ( i = 0; *v11 && i < v46; ++i )
        {
          v17 = PiDevCfgResolveVariable(a1, v11, (UNICODE_STRING **)P + i);
          v10 = 0;
          v44 = v17;
          RegistryValue = v17;
          if ( v17 < 0 )
          {
            if ( v17 == -1073741772 )
              RegistryValue = -1073741823;
            v44 = RegistryValue;
            break;
          }
          v18 = -1LL;
          do
            ++v18;
          while ( v11[v18] );
          v11 += v18 + 1;
        }
        if ( RegistryValue < 0 )
          goto LABEL_101;
      }
    }
  }
  v19 = v10;
  v20 = v7;
  if ( *v7 == (_WORD)v10 )
    goto LABEL_55;
  v21 = P;
  do
  {
    if ( *v20 != 37 || (++v20, v22 = *v20, *v20 == 37) )
    {
      ++v20;
      v19 += 2;
      continue;
    }
    if ( (unsigned __int16)(v22 - 48) <= 9u )
    {
      v23 = v10;
      while ( v22 && (unsigned __int16)(v22 - 48) <= 9u )
      {
        ++v20;
        v23 = v22 + 2 * (5 * v23 - 24);
        v22 = *v20;
      }
      if ( v23 < v46 )
      {
        _mm_lfence();
        v24 = v21[v23];
        if ( v24 )
        {
          v25 = *(_DWORD *)(v24 + 32);
          if ( v25 )
          {
            if ( v25 <= 2 )
            {
              v19 += *(_DWORD *)(v24 + 36) - 2;
            }
            else
            {
              if ( v25 != 4 )
              {
                if ( v25 != 7 )
                  continue;
                v26 = -1LL;
                do
                  ++v26;
                while ( *(_WORD *)(*(_QWORD *)(v24 + 40) + 2 * v26) != (_WORD)v10 );
                goto LABEL_47;
              }
              v27 = RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v24 + 40));
              v10 = 0;
              if ( v27 >= 0 )
              {
                v26 = -1LL;
                do
                  ++v26;
                while ( pszDest[v26] );
LABEL_47:
                v19 += 2 * v26;
              }
            }
          }
        }
      }
    }
  }
  while ( *v20 != (_WORD)v10 );
  v9 = (unsigned int *)v47;
  RegistryValue = v44;
LABEL_55:
  v28 = v19 + 2;
  v45 = v28;
  v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
  v30 = v29;
  if ( !v29 )
  {
    RegistryValue = -1073741670;
    goto LABEL_101;
  }
  v31 = v48;
  v32 = (unsigned __int16 *)v29;
  if ( !*v48 )
    goto LABEL_95;
  while ( 2 )
  {
    if ( *v31 == 37 )
    {
      v48 = ++v31;
      v33 = *v31;
      if ( *v31 == 37 )
      {
        if ( v28 <= 2 )
          goto LABEL_92;
        *v32 = 37;
LABEL_62:
        ++v32;
        ++v31;
        v28 -= 2;
LABEL_88:
        if ( !*v31 )
          goto LABEL_94;
        continue;
      }
      if ( (unsigned __int16)(v33 - 48) > 9u )
        goto LABEL_88;
      v34 = 0;
      if ( v33 )
      {
        do
        {
          if ( (unsigned __int16)(v33 - 48) > 9u )
            break;
          ++v31;
          v35 = v33;
          v33 = *v31;
          v34 = v35 + 2 * (5 * v34 - 24);
        }
        while ( *v31 );
        v48 = v31;
      }
      if ( v34 >= v46 )
        goto LABEL_88;
      _mm_lfence();
      v36 = *((_QWORD *)P + v34);
      if ( !v36 )
        goto LABEL_88;
      v37 = *(_DWORD *)(v36 + 32);
      if ( !v37 )
        goto LABEL_82;
      if ( v37 <= 2 )
      {
        v38 = *(wchar_t **)(v36 + 40);
        v40 = *(_DWORD *)(v36 + 36) - 2;
        goto LABEL_83;
      }
      if ( v37 == 4 )
      {
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v36 + 40)) >= 0 )
        {
          v38 = pszDest;
          v41 = -1LL;
          do
            ++v41;
          while ( pszDest[v41] );
          v31 = v48;
          v40 = 2 * v41;
          goto LABEL_84;
        }
      }
      else
      {
        if ( v37 == 7 )
        {
          v38 = *(wchar_t **)(v36 + 40);
          v39 = -1LL;
          do
            ++v39;
          while ( v38[v39] );
          v40 = 2 * v39;
          goto LABEL_83;
        }
LABEL_82:
        v38 = 0LL;
        v40 = 0;
LABEL_83:
        if ( !v38 )
          goto LABEL_88;
LABEL_84:
        if ( !v40 )
          goto LABEL_88;
        if ( v28 <= v40 )
        {
LABEL_92:
          v9 = (unsigned int *)v47;
          RegistryValue = -1073741823;
          goto LABEL_99;
        }
        memmove(v32, v38, v40);
        v28 -= v40;
        v32 += (unsigned __int64)v40 >> 1;
      }
      v31 = v48;
      goto LABEL_88;
    }
    break;
  }
  if ( v28 > 2 )
  {
    *v32 = *v31;
    goto LABEL_62;
  }
  RegistryValue = -1073741823;
LABEL_94:
  v9 = (unsigned int *)v47;
LABEL_95:
  if ( RegistryValue >= 0 )
  {
    if ( v28 == 2 )
    {
      v42 = v51;
      *v32 = 0;
      *(_QWORD *)(v42 + 40) = v30;
      v30 = 0LL;
      *(_DWORD *)(v42 + 32) = 1;
      *(_DWORD *)(v42 + 36) = v45;
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
LABEL_99:
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
LABEL_101:
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_103:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_105:
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  return (unsigned int)RegistryValue;
}
