/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     wcsrchr @ 0x140173D28 (wcsrchr.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x140682470 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  int DriverConfiguration; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rbx
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  const wchar_t *v11; // r13
  wchar_t v12; // ax
  bool v13; // cf
  wchar_t v14; // ax
  int v15; // eax
  wchar_t *v16; // rax
  int v17; // edx
  wchar_t *v18; // rax
  const wchar_t *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // r14d
  const wchar_t **v22; // r12
  __int64 v23; // r14
  __int64 *v24; // rbx
  wchar_t *v25; // r15
  __int64 *v26; // r12
  int v27; // eax
  __int64 *v28; // rax
  __int64 v29; // rbx
  PVOID StringRoutine; // rax
  _QWORD *v31; // rax
  _QWORD **v32; // rcx
  __int64 v33; // rax
  PVOID v34; // rcx
  PVOID *v35; // rax
  __int64 v37; // [rsp+38h] [rbp-30h]
  _QWORD *v38; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp+50h]
  __int64 *v43; // [rsp+C0h] [rbp+58h] BYREF
  wchar_t *Str2; // [rsp+C8h] [rbp+60h]

  v1 = a1;
  P = &v38;
  v38 = &v38;
  if ( !*(_QWORD *)(a1 + 344) )
  {
    DriverConfiguration = 0;
    goto LABEL_69;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x63647050u);
  if ( !PoolWithTag )
  {
LABEL_4:
    DriverConfiguration = -1073741670;
LABEL_69:
    while ( v38 != &v38 )
    {
      v34 = P;
      v35 = (PVOID *)*((_QWORD *)P + 1);
      if ( *(_QWORD ***)P != &v38 || *v35 != P )
        __fastfail(3u);
      P = (PVOID)*((_QWORD *)P + 1);
      *v35 = &v38;
      ExFreePoolWithTag(v34, 0);
    }
    return (unsigned int)DriverConfiguration;
  }
  PoolWithTag[2] = v1;
  v4 = (_QWORD **)P;
  *PoolWithTag = &v38;
  PoolWithTag[1] = v4;
  if ( *v4 != &v38 )
    __fastfail(3u);
  *v4 = PoolWithTag;
  P = PoolWithTag;
  DriverConfiguration = 0;
  while ( v38 != &v38 )
  {
    v5 = P;
    v6 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(_QWORD ***)P != &v38 || *v6 != P )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v6 = &v38;
    v7 = v5[2];
    v37 = v7;
    ExFreePoolWithTag(v5, 0);
    v8 = *(const wchar_t **)(v7 + 344);
    if ( v8 )
    {
      while ( *v8 )
      {
        v9 = v8;
        v10 = wcschr(v8, 0x3Au);
        if ( v10 )
        {
          v11 = v10 + 1;
          *v10 = 0;
          v12 = *v8;
          v8 = v11;
          v13 = v12 < asc_1405C9BA0[0];
          if ( v12 == asc_1405C9BA0[0] && (v14 = v9[1], v13 = v14 < asc_1405C9BA0[1], v14 == asc_1405C9BA0[1]) )
            v15 = 0;
          else
            v15 = v13 ? -1 : 1;
          Str2 = (wchar_t *)((unsigned __int64)v9 & -(__int64)(v15 != 0));
          v16 = wcsrchr(v11, 0x2Eu);
          if ( v16 )
          {
            *v16 = 0;
            v8 = v16 + 1;
            v17 = v16[1] - asc_1405C9BA0[0];
            if ( !v17 )
              v17 = v16[2] - asc_1405C9BA0[1];
            if ( v17 )
            {
              v8 = v16 + 1;
              v42 = 0;
              if ( v16[1] )
              {
                do
                {
                  v18 = wcschr(v8, 0x2Cu);
                  if ( v18 )
                  {
                    *v18 = 0;
                    v19 = v18 + 1;
                  }
                  else
                  {
                    v20 = -1LL;
                    do
                      ++v20;
                    while ( v8[v20] );
                    v19 = &v8[v20];
                  }
                  v21 = 0;
                  v22 = (const wchar_t **)&off_140723080;
                  while ( wcsicmp(*v22, v8) )
                  {
                    ++v21;
                    v22 += 2;
                    if ( v21 >= 6 )
                      goto LABEL_34;
                  }
                  v42 |= *((_DWORD *)&off_140723080 + 4 * v21 + 2);
LABEL_34:
                  v8 = v19;
                }
                while ( *v19 );
                v1 = a1;
              }
            }
            else
            {
              v42 = -1;
            }
            v43 = 0LL;
            RtlInitUnicodeString(&DestinationString, v11);
            v23 = v1 + 352;
            v24 = *(__int64 **)(v1 + 352);
            if ( v24 == (__int64 *)(v1 + 352) )
              goto LABEL_43;
            v25 = Str2;
            do
            {
              v43 = v24;
              v26 = v24;
              if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v24 + 11), &DestinationString, 1u)
                && (!v25 || !wcsicmp((const wchar_t *)v24[6], v25)) )
              {
                break;
              }
              v24 = (__int64 *)*v24;
              v26 = 0LL;
              v43 = 0LL;
            }
            while ( v24 != (__int64 *)v23 );
            v1 = a1;
            if ( !v26 )
            {
LABEL_43:
              v27 = PiDevCfgQueryIncludedDriverNode(v37, Str2, v11, v42, &v43);
              DriverConfiguration = v27;
              if ( v27 < 0 )
              {
                if ( v27 == -1073741685 )
                {
                  *(_DWORD *)(v1 + 396) = -536870319;
                }
                else if ( v27 == -1073741072 )
                {
                  *(_DWORD *)(v1 + 396) = -536870320;
                  goto LABEL_69;
                }
                break;
              }
              v28 = *(__int64 **)(v23 + 8);
              v29 = (__int64)v43;
              *v43 = v23;
              *(_QWORD *)(v29 + 8) = v28;
              if ( *v28 != v23 )
                __fastfail(3u);
              *v28 = v29;
              *(_QWORD *)(v23 + 8) = v29;
              DriverConfiguration = PiDevCfgQueryDriverConfiguration(v29);
              if ( DriverConfiguration < 0 )
                goto LABEL_69;
              if ( *(_QWORD *)(v29 + 280) && !*(_QWORD *)(v1 + 280) )
              {
                if ( *(_QWORD *)(v29 + 280) )
                {
                  StringRoutine = ExpAllocateStringRoutine(*(unsigned __int16 *)(v29 + 274));
                  *(_QWORD *)(v1 + 280) = StringRoutine;
                  if ( !StringRoutine )
                  {
                    DriverConfiguration = -1073741670;
                    break;
                  }
                  memmove(StringRoutine, *(const void **)(v29 + 280), *(unsigned __int16 *)(v29 + 274));
                }
                else
                {
                  *(_QWORD *)(v1 + 280) = 0LL;
                }
                *(_WORD *)(v1 + 272) = *(_WORD *)(v29 + 272);
                *(_WORD *)(v1 + 274) = *(_WORD *)(v29 + 274);
              }
              if ( *(_QWORD *)(v29 + 296) )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(
                                        (PUNICODE_STRING)(v1 + 288),
                                        0LL,
                                        (const void **)(v29 + 288),
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_69;
              }
              if ( *(_QWORD *)(v29 + 312) )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(
                                        (PUNICODE_STRING)(v1 + 304),
                                        0LL,
                                        (const void **)(v29 + 304),
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_69;
              }
              v31 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x63647050u);
              if ( !v31 )
                goto LABEL_4;
              v31[2] = v29;
              v32 = (_QWORD **)P;
              *v31 = &v38;
              v31[1] = v32;
              if ( *v32 != &v38 )
                __fastfail(3u);
              *v32 = v31;
              P = v31;
              DriverConfiguration = 0;
            }
          }
        }
        v33 = -1LL;
        do
          ++v33;
        while ( v8[v33] );
        v8 += v33 + 1;
      }
      if ( DriverConfiguration < 0 )
        goto LABEL_69;
    }
  }
  return (unsigned int)DriverConfiguration;
}
