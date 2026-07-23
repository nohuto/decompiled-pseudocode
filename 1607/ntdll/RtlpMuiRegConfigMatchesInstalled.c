/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x180094AA0
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x180089408 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180044468 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     _MuiRegAllocArray @ 0x18004485C (_MuiRegAllocArray.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180076C5C (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DE4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
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
  __int64 v7; // r14
  __int16 v8; // bp
  wchar_t *v11; // r12
  __int64 v12; // r13
  bool v13; // zf
  char v14; // bl
  const wchar_t *v15; // rdx
  __int64 *v16; // rdi
  __int64 v18; // r8
  unsigned __int16 *v19; // rdi
  __int64 v20; // r8
  const WCHAR *v21; // rdx
  unsigned __int16 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r9
  wchar_t *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  __int16 v29; // [rsp+88h] [rbp+10h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = a3;
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 == a4 )
  {
    v13 = (_WORD)a3 == a5;
LABEL_3:
    v14 = v13;
    goto LABEL_10;
  }
  if ( !a2 || !a4 )
    goto LABEL_6;
  v19 = a7;
  if ( a7 )
    *a7 = -1;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( (a3 & 0x8000u) == 0LL )
      {
        v27 = *(_QWORD *)(a1 + 24);
        if ( (__int16)a3 < (int)*(unsigned __int16 *)(v27 + 6) )
        {
          LOBYTE(a3) = a4;
          v7 = *(_QWORD *)(v27 + 16) + 28LL * v8;
          v14 = RtlpMuiRegLangInfoMatchesSpec(a1, v7, a3, a5);
          goto LABEL_10;
        }
      }
    }
    goto LABEL_6;
  }
  if ( a4 != 2 )
  {
    v14 = 1;
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
            v13 = v8 == (__int16)Lcid;
            goto LABEL_3;
          }
        }
      }
    }
    else if ( a4 == 1 && a2 == 3 )
    {
      v25 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
      v11 = v25;
      if ( v25 )
      {
        if ( RtlpInitAndCallLcidToCultureName(&DestinationString, v25, (__int16)a5) )
        {
          v26 = *(_QWORD *)(a1 + 32);
          if ( v26 && v8 >= 0 && v8 < (int)*(unsigned __int16 *)(v26 + 6) )
            v15 = (const wchar_t *)(*(_QWORD *)(v26 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v26 + 16) + 2LL * v8));
          else
            v15 = 0LL;
          if ( v15 && !wcsicmp(DestinationString.Buffer, v15) )
            goto LABEL_7;
        }
      }
    }
LABEL_6:
    v14 = 0;
LABEL_7:
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    v7 = 0LL;
    goto LABEL_10;
  }
  if ( !a1 )
    goto LABEL_6;
  v22 = a5;
  if ( (a5 & 0x8000u) != 0 )
    goto LABEL_6;
  v23 = *(_QWORD *)(a1 + 24);
  if ( (__int16)a5 >= (int)*(unsigned __int16 *)(v23 + 6) )
    goto LABEL_6;
  v24 = (unsigned __int16)a3;
  LOBYTE(a3) = a2;
  v12 = *(_QWORD *)(v23 + 16) + 28LL * (__int16)a5;
  v14 = RtlpMuiRegLangInfoMatchesSpec(a1, v12, a3, v24);
  if ( v14 && v12 && v19 )
    *v19 = v22;
  v7 = 0LL;
LABEL_10:
  v16 = a6;
  if ( a6 )
  {
    if ( v14 )
    {
      if ( v12 )
      {
        *a6 = v12;
      }
      else if ( v7 )
      {
        *a6 = v7;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, a2, (unsigned __int16)v8, &v29) >= 0 && v29 >= 0 )
        {
          v18 = *(_QWORD *)(a1 + 24);
          if ( v29 < (int)*(unsigned __int16 *)(v18 + 6) )
            *v16 = *(_QWORD *)(v18 + 16) + 28LL * v29;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v14;
}
