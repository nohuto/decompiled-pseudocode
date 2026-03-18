/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1405113A0 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x14012C154 (PnpDuplicateUnicodeString.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     wcsrchr @ 0x140145CF8 (wcsrchr.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401C0618 (PiDevCfgPushDriverNodeEntry.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405113A0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x1406076CC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406096F0 (PiDevCfgQueryIncludedDriverNode.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  _QWORD **v2; // rcx
  int DriverConfiguration; // edi
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rbx
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  const wchar_t *v11; // r13
  wchar_t v12; // cx
  bool v13; // cf
  wchar_t v14; // cx
  int v15; // eax
  wchar_t *v16; // rax
  int v17; // r8d
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
  __int64 **v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rax
  const wchar_t *v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+38h] [rbp-30h]
  _QWORD *v34; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+B8h] [rbp+50h]
  __int64 *v39; // [rsp+C0h] [rbp+58h] BYREF
  wchar_t *Str2; // [rsp+C8h] [rbp+60h]

  v1 = a1;
  v34 = &v34;
  v2 = &v34;
  P = &v34;
  if ( *(_QWORD *)(v1 + 344) )
  {
    DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v34, v1);
    if ( DriverConfiguration < 0 )
      goto LABEL_64;
    while ( v34 != &v34 )
    {
      v5 = P;
      v6 = (PVOID *)*((_QWORD *)P + 1);
      if ( *(_QWORD ***)P != &v34 || *v6 != P )
        __fastfail(3u);
      P = (PVOID)*((_QWORD *)P + 1);
      *v6 = &v34;
      v7 = v5[2];
      v33 = v7;
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
            v8 = v10 + 1;
            v13 = v12 < asc_140551DE0[0];
            v32 = v10 + 1;
            if ( v12 != asc_140551DE0[0] )
              goto LABEL_15;
            v14 = v9[1];
            v13 = v14 < asc_140551DE0[1];
            if ( v14 == asc_140551DE0[1] )
              v15 = 0;
            else
LABEL_15:
              v15 = v13 ? -1 : 1;
            Str2 = (wchar_t *)((unsigned __int64)v9 & -(__int64)(v15 != 0));
            v16 = wcsrchr(v11, 0x2Eu);
            if ( v16 )
            {
              *v16 = 0;
              v8 = v16 + 1;
              v17 = v16[1] - asc_140551DE0[0];
              if ( !v17 )
                v17 = v16[2] - asc_140551DE0[1];
              if ( v17 )
              {
                v8 = v16 + 1;
                v38 = 0;
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
                    v22 = (const wchar_t **)&off_1406A2E90;
                    while ( wcsicmp(*v22, v8) )
                    {
                      ++v21;
                      v22 += 2;
                      if ( v21 >= 6 )
                        goto LABEL_32;
                    }
                    v38 |= *((_DWORD *)&off_1406A2E90 + 4 * v21 + 2);
LABEL_32:
                    v8 = v19;
                  }
                  while ( *v19 );
                  v1 = a1;
                }
              }
              else
              {
                v38 = -1;
              }
              v39 = 0LL;
              RtlInitUnicodeString(&DestinationString, v11);
              v23 = v1 + 352;
              v24 = *(__int64 **)(v1 + 352);
              if ( v24 == (__int64 *)(v1 + 352) )
                goto LABEL_41;
              v25 = Str2;
              do
              {
                v39 = v24;
                v26 = v24;
                if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v24 + 11), &DestinationString, 1u)
                  && (!v25 || !wcsicmp((const wchar_t *)v24[6], v25)) )
                {
                  break;
                }
                v24 = (__int64 *)*v24;
                v26 = 0LL;
                v39 = 0LL;
              }
              while ( v24 != (__int64 *)v23 );
              v1 = a1;
              v11 = v32;
              if ( !v26 )
              {
LABEL_41:
                v27 = PiDevCfgQueryIncludedDriverNode(v33, Str2, v11, v38, &v39);
                DriverConfiguration = v27;
                if ( v27 < 0 )
                {
                  *(_DWORD *)(v1 + 396) = v27;
                  break;
                }
                v28 = *(__int64 ***)(v23 + 8);
                v29 = v39;
                *v39 = v23;
                v29[1] = (__int64)v28;
                if ( *v28 != (__int64 *)v23 )
                  __fastfail(3u);
                *v28 = v29;
                *(_QWORD *)(v23 + 8) = v29;
                DriverConfiguration = PiDevCfgQueryDriverConfiguration((__int64)v29);
                if ( DriverConfiguration < 0 )
                  goto LABEL_64;
                if ( v29[35] && !*(_QWORD *)(v1 + 280) && !PnpDuplicateUnicodeString(v1 + 272, (__int64)(v29 + 34)) )
                {
                  DriverConfiguration = -1073741670;
                  break;
                }
                if ( v29[37] )
                {
                  DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 288));
                  if ( DriverConfiguration < 0 )
                    goto LABEL_64;
                }
                if ( v29[39] )
                {
                  DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304));
                  if ( DriverConfiguration < 0 )
                    goto LABEL_64;
                }
                DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v34, (__int64)v29);
                if ( DriverConfiguration < 0 )
                  goto LABEL_64;
              }
            }
          }
          v30 = -1LL;
          do
            ++v30;
          while ( v8[v30] );
          v8 += v30 + 1;
        }
        if ( DriverConfiguration < 0 )
          goto LABEL_64;
      }
    }
  }
  else
  {
    DriverConfiguration = 0;
    while ( v34 != &v34 )
    {
      v31 = v2[1];
      if ( *v2 != &v34 || (_QWORD **)*v31 != v2 )
        __fastfail(3u);
      P = v2[1];
      *v31 = &v34;
      ExFreePoolWithTag(v2, 0);
LABEL_64:
      v2 = (_QWORD **)P;
    }
  }
  return (unsigned int)DriverConfiguration;
}
