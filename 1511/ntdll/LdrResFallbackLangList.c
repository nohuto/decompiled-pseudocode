/*
 * XREFs of LdrResFallbackLangList @ 0x18003A1E8
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpResUltimateFallbackInfo @ 0x180039A8C (RtlpResUltimateFallbackInfo.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003B354 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003BB00 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 *     NtQueryDefaultLocale @ 0x1800A5360 (NtQueryDefaultLocale.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResFallbackLangList(void *a1, __int64 a2, __int64 a3, int a4, unsigned __int16 *a5)
{
  void *v6; // r10
  int v7; // esi
  unsigned __int16 *v8; // rdi
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  unsigned __int16 CurrentLocale; // bx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edx
  bool v23; // cf
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  int v27; // ecx
  _WORD v28[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v29; // [rsp+34h] [rbp-4Ch] BYREF
  DWORD v30; // [rsp+38h] [rbp-48h] BYREF
  DWORD Lcid; // [rsp+3Ch] [rbp-44h] BYREF
  DWORD DefaultLocaleId; // [rsp+40h] [rbp-40h] BYREF
  int v33; // [rsp+44h] [rbp-3Ch] BYREF
  PCWSTR SourceString; // [rsp+48h] [rbp-38h] BYREF
  int v35; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v36; // [rsp+58h] [rbp-28h]
  int v37; // [rsp+60h] [rbp-20h] BYREF
  const wchar_t *v38; // [rsp+68h] [rbp-18h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+48h]
  unsigned __int16 v42; // [rsp+D0h] [rbp+50h]

  v42 = a3;
  v41 = a2;
  v37 = 3801144;
  v38 = L"LdrResFallbackLangList Enter";
  v35 = 3670070;
  v6 = a1;
  v7 = 0;
  v36 = L"LdrResFallbackLangList Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&v37, MEMORY[0x7FFE0384]);
    a3 = v42;
    v6 = a1;
    a2 = v41;
  }
  v8 = a5;
  if ( !a5 )
  {
    v11 = -1073741811;
    goto LABEL_29;
  }
  *a5 = 0;
  v9 = 0;
  *((_BYTE *)v8 + 516) = 0;
  v10 = 0;
  v11 = 0;
  LOBYTE(a5) = 0;
  CurrentLocale = 0;
  v30 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = v9++;
      if ( v13 )
        break;
      CurrentLocale = a3;
      v7 = 1;
LABEL_20:
      a3 = v42;
      v6 = a1;
      a2 = v41;
      if ( CurrentLocale != 0xEEEE )
      {
LABEL_21:
        v21 = *v8;
        v22 = 0;
        if ( *v8 )
        {
          do
          {
            if ( v8[4 * v22 + 2] == CurrentLocale )
              break;
            ++v22;
          }
          while ( v22 < (unsigned int)v21 );
        }
        a3 = v42;
        v23 = v22 < (unsigned int)v21;
        a2 = v41;
        v6 = a1;
        if ( !v23 )
        {
          if ( (unsigned int)v21 >= 0x40 )
            goto LABEL_29;
          v8[4 * v21 + 2] = CurrentLocale;
          *(_DWORD *)&v8[4 * (*v8)++ + 4] = v7;
LABEL_27:
          a3 = v42;
          a2 = v41;
        }
      }
    }
    v14 = v13 - 1;
    if ( !v14 )
      break;
    v15 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( !v6 )
          goto LABEL_35;
        if ( (int)RtlpResUltimateFallbackInfo(v6, a2, &SourceString, &v33) < 0 )
          goto LABEL_34;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          v11 = -1073020923;
LABEL_34:
          v6 = a1;
LABEL_35:
          CurrentLocale = -4370;
          goto LABEL_27;
        }
        CurrentLocale = Lcid;
        v28[0] = Lcid;
        if ( (a4 & 0x100000) != 0 )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            v27,
            NtCurrentTeb()->MergedPrefLanguages,
            0,
            (unsigned int)v28,
            (__int64)&a5);
          if ( (_BYTE)a5 )
            CurrentLocale = -4370;
          else
            CurrentLocale = v28[0];
        }
        v7 = 4;
        if ( (v33 & 1) != 0 )
          v7 = 10;
        goto LABEL_20;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 != 1 )
              goto LABEL_29;
            CurrentLocale = 1033;
            goto LABEL_21;
          }
          CurrentLocale = -4370;
          v25 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          a3 = v42;
          v6 = a1;
          v11 = v25;
          a2 = v41;
          if ( v25 >= 0 && DefaultLocaleId != v30 )
          {
            CurrentLocale = DefaultLocaleId;
            goto LABEL_20;
          }
        }
        else
        {
          CurrentLocale = -4370;
          v26 = NtQueryDefaultLocale(1u, &v30);
          a3 = v42;
          v6 = a1;
          v11 = v26;
          a2 = v41;
          if ( v26 >= 0 )
          {
            CurrentLocale = v30;
            goto LABEL_20;
          }
        }
      }
      else
      {
        v28[0] = -4370;
        if ( (~a4 & 0x80000) != 0 )
          goto LABEL_29;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_20;
        }
        CurrentLocale = v28[0];
      }
    }
    else
    {
      v28[0] = 0;
      if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v15, a2, a3, 0LL)
        && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v10 < MergedPrefLanguages[2]) )
      {
        GetLCIDFromLangListNodeWithLICCheck(
          (_DWORD)MergedPrefLanguages,
          NtCurrentTeb()->MergedPrefLanguages,
          v10,
          (unsigned int)v28,
          (__int64)&a5);
        CurrentLocale = v28[0];
      }
      else
      {
        CurrentLocale = 0;
      }
      if ( CurrentLocale )
      {
        if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
          CurrentLocale = -4370;
        v7 = 3;
        ++v10;
        --v9;
        goto LABEL_20;
      }
      a3 = v42;
      CurrentLocale = -4370;
      v6 = a1;
      a2 = v41;
    }
  }
  if ( (a4 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)v8 + 516) = 1;
      if ( (int)LdrpGetParentLangId(CurrentLocale, &v29, a3, 0LL) < 0 )
        goto LABEL_29;
      CurrentLocale = v29;
      if ( v29 )
        --v9;
      else
        v9 = -1;
    }
    else
    {
      CurrentLocale = -4370;
    }
    v7 = 2;
    goto LABEL_20;
  }
  *((_BYTE *)v8 + 516) = 1;
LABEL_29:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v35, MEMORY[0x7FFE0384]);
  return v11;
}
