/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401CE93C (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1401CEE88 (PiDevCfgPopDriverNodeEntry.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401CF018 (PiDevCfgPushDriverNodeEntry.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     PiDevCfgAppendMultiSz @ 0x140632414 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  int DriverConfiguration; // ebx
  wchar_t *v4; // rsi
  wchar_t *v5; // rdi
  wchar_t *v6; // rax
  const wchar_t *v7; // r12
  wchar_t v8; // cx
  bool v9; // cf
  wchar_t v10; // cx
  int v11; // eax
  wchar_t *v12; // rax
  int v13; // r8d
  unsigned int v14; // r13d
  wchar_t *v15; // rax
  wchar_t *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 *v19; // rdi
  __int64 *v20; // r13
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  wchar_t *Str2; // [rsp+30h] [rbp-38h]
  _QWORD v27[2]; // [rsp+38h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+50h]
  __int64 *v31; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+60h] BYREF

  v1 = a1;
  v27[1] = v27;
  v32 = 0LL;
  v27[0] = v27;
  if ( *(_QWORD *)(a1 + 344) )
  {
    DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)v27, a1);
    if ( DriverConfiguration >= 0 )
    {
      while ( (unsigned __int8)PiDevCfgPopDriverNodeEntry(v27, &v32) )
      {
        v4 = *(wchar_t **)(v32 + 344);
        if ( v4 )
        {
          while ( *v4 )
          {
            v5 = v4;
            v6 = wcschr(v4, 0x3Au);
            if ( v6 )
            {
              *v6 = 0;
              v7 = v6 + 1;
              v8 = *v4;
              v4 = v6 + 1;
              v9 = v8 < asc_140584750[0];
              if ( v8 == asc_140584750[0] && (v10 = v5[1], v9 = v10 < asc_140584750[1], v10 == asc_140584750[1]) )
                v11 = 0;
              else
                v11 = v9 ? -1 : 1;
              Str2 = (wchar_t *)((unsigned __int64)v5 & -(__int64)(v11 != 0));
              v12 = wcsrchr(v7, 0x2Eu);
              if ( v12 )
              {
                *v12 = 0;
                v4 = v12 + 1;
                v13 = v12[1] - asc_140584750[0];
                if ( !v13 )
                  v13 = v12[2] - asc_140584750[1];
                if ( v13 )
                {
                  v4 = v12 + 1;
                  v14 = 0;
                  v30 = 0;
                  if ( v12[1] )
                  {
                    do
                    {
                      v15 = wcschr(v4, 0x2Cu);
                      if ( v15 )
                      {
                        *v15 = 0;
                        v16 = v15 + 1;
                      }
                      else
                      {
                        v17 = -1LL;
                        do
                          ++v17;
                        while ( v4[v17] );
                        v16 = &v4[v17];
                      }
                      v14 |= PiDevCfgGetDriverConfigurationKeyScope(v4);
                      v4 = v16;
                    }
                    while ( *v16 );
                    v30 = v14;
                  }
                }
                else
                {
                  v30 = -1;
                }
                v31 = 0LL;
                RtlInitUnicodeString(&DestinationString, v7);
                v18 = v1 + 352;
                v19 = *(__int64 **)(v1 + 352);
                if ( v19 == (__int64 *)(v1 + 352) )
                  goto LABEL_33;
                do
                {
                  v31 = v19;
                  v20 = v19;
                  if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v19 + 11), &DestinationString, 1u)
                    && (!Str2 || !wcsicmp((const wchar_t *)v19[6], Str2)) )
                  {
                    break;
                  }
                  v19 = (__int64 *)*v19;
                  v20 = 0LL;
                  v31 = 0LL;
                }
                while ( v19 != (__int64 *)v18 );
                v1 = a1;
                if ( !v20 )
                {
LABEL_33:
                  v21 = PiDevCfgQueryIncludedDriverNode(v32, Str2, v7, v30, &v31);
                  DriverConfiguration = v21;
                  if ( v21 < 0 )
                  {
                    *(_DWORD *)(v1 + 396) = v21;
                    break;
                  }
                  v22 = *(__int64 **)(v18 + 8);
                  if ( *v22 != v18 )
                    __fastfail(3u);
                  v23 = (__int64)v31;
                  v24 = (__int64)v31;
                  *v31 = v18;
                  *(_QWORD *)(v24 + 8) = v22;
                  *v22 = v24;
                  *(_QWORD *)(v18 + 8) = v24;
                  DriverConfiguration = PiDevCfgQueryDriverConfiguration(v24);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_3;
                  if ( *(_QWORD *)(v23 + 280)
                    && !*(_QWORD *)(v1 + 280)
                    && !PnpDuplicateUnicodeString(v1 + 272, v23 + 272) )
                  {
                    DriverConfiguration = -1073741670;
                    break;
                  }
                  if ( *(_QWORD *)(v23 + 296) )
                  {
                    DriverConfiguration = PiDevCfgAppendMultiSz(
                                            (PUNICODE_STRING)(v1 + 288),
                                            0LL,
                                            (const void **)(v23 + 288),
                                            0);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_3;
                  }
                  if ( *(_QWORD *)(v23 + 312) )
                  {
                    DriverConfiguration = PiDevCfgAppendMultiSz(
                                            (PUNICODE_STRING)(v1 + 304),
                                            0LL,
                                            (const void **)(v23 + 304),
                                            0);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_3;
                  }
                  DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)v27, v23);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_3;
                }
              }
            }
            v25 = -1LL;
            do
              ++v25;
            while ( v4[v25] );
            v4 += v25 + 1;
          }
          if ( DriverConfiguration < 0 )
            break;
        }
      }
    }
  }
  else
  {
    DriverConfiguration = 0;
  }
LABEL_3:
  while ( (unsigned __int8)PiDevCfgPopDriverNodeEntry(v27, 0LL) )
    ;
  return (unsigned int)DriverConfiguration;
}
