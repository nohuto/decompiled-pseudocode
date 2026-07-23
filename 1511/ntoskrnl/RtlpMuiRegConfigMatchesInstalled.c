/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x14069F434
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x140222E74 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     sub_14013A7C0 @ 0x14013A7C0 (sub_14013A7C0.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x14053A358 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x14064993C (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14069F984 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14069FCB8 (RtlpMuiRegLangInfoMatchesSpec.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  __int16 v7; // bp
  wchar_t *v10; // r12
  __int64 v11; // r13
  bool v12; // zf
  char v13; // bl
  __int64 v14; // r14
  unsigned __int16 *v15; // rdi
  __int64 v16; // rdx
  unsigned __int16 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  const WCHAR *v21; // rdx
  wchar_t *v22; // rax
  __int64 v23; // r8
  const wchar_t *v24; // rdx
  __int64 *v25; // rdi
  __int64 v26; // r8
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  __int16 v29; // [rsp+88h] [rbp+10h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+20h] BYREF

  v7 = a3;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 == a4 )
  {
    v12 = (_WORD)a3 == a5;
LABEL_3:
    v13 = v12;
LABEL_4:
    v14 = 0LL;
    goto LABEL_47;
  }
  if ( a2 && a4 )
  {
    v15 = a7;
    if ( a7 )
      *a7 = -1;
    if ( a2 == 2 )
    {
      if ( a1 )
      {
        if ( (a3 & 0x8000u) == 0LL )
        {
          v16 = *(_QWORD *)(a1 + 24);
          if ( (__int16)a3 < (int)*(unsigned __int16 *)(v16 + 6) )
          {
            LOBYTE(a3) = a4;
            v14 = *(_QWORD *)(v16 + 16) + 28LL * v7;
            v13 = RtlpMuiRegLangInfoMatchesSpec(a1, v14, a3, a5);
            goto LABEL_47;
          }
        }
      }
    }
    else if ( a4 == 2 )
    {
      if ( a1 )
      {
        v17 = a5;
        if ( (a5 & 0x8000u) == 0 )
        {
          v18 = *(_QWORD *)(a1 + 24);
          if ( (__int16)a5 < (int)*(unsigned __int16 *)(v18 + 6) )
          {
            v19 = (unsigned __int16)a3;
            LOBYTE(a3) = a2;
            v11 = *(_QWORD *)(v18 + 16) + 28LL * (__int16)a5;
            v13 = RtlpMuiRegLangInfoMatchesSpec(a1, v11, a3, v19);
            if ( v13 && v11 && v15 )
              *v15 = v17;
            goto LABEL_4;
          }
        }
      }
    }
    else
    {
      v13 = 1;
      if ( a2 == 1 )
      {
        if ( a4 == 3 )
        {
          v20 = *(_QWORD *)(a1 + 32);
          if ( v20 && (a5 & 0x8000u) == 0 && (__int16)a5 < (int)*(unsigned __int16 *)(v20 + 6) )
            v21 = (const WCHAR *)(*(_QWORD *)(v20 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v20 + 16) + 2LL * (__int16)a5));
          else
            v21 = 0LL;
          if ( v21 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            {
              v12 = v7 == (__int16)Lcid;
              goto LABEL_3;
            }
          }
        }
      }
      else if ( a2 == 3 && a4 == 1 )
      {
        v22 = (wchar_t *)sub_14013A7C0(a1, 0x55u);
        v10 = v22;
        if ( v22 )
        {
          DestinationString.Buffer = v22;
          if ( RtlLCIDToCultureName((__int16)a5, &DestinationString) )
          {
            v23 = *(_QWORD *)(a1 + 32);
            if ( v23 && v7 >= 0 && v7 < (int)*(unsigned __int16 *)(v23 + 6) )
              v24 = (const wchar_t *)(*(_QWORD *)(v23 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v23 + 16) + 2LL * v7));
            else
              v24 = 0LL;
            if ( v24 && !wcsicmp(DestinationString.Buffer, v24) )
              goto LABEL_44;
          }
        }
      }
    }
  }
  v13 = 0;
LABEL_44:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v14 = 0LL;
LABEL_47:
  v25 = a6;
  if ( a6 )
  {
    if ( v13 )
    {
      if ( v11 )
      {
        *a6 = v11;
      }
      else if ( v14 )
      {
        *a6 = v14;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, a2, (unsigned __int16)v7, &v29) >= 0 && v29 >= 0 )
        {
          v26 = *(_QWORD *)(a1 + 24);
          if ( v29 < (int)*(unsigned __int16 *)(v26 + 6) )
            *v25 = *(_QWORD *)(v26 + 16) + 28LL * v29;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v13;
}
