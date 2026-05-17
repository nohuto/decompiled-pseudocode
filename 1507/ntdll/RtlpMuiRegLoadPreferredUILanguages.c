/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeUserOrMachineLangList @ 0x180048B38 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18001DA70 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180047AF0 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180048CF0 (RtlpLoadMachineUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x1800499D4 (LdrpQueryValueKey.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180049B04 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180049B2C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadUserUIByPolicy @ 0x180049C70 (RtlpLoadUserUIByPolicy.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800E646C (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        __int64 *a6)
{
  _BYTE *v6; // rsi
  BOOL v8; // r14d
  const WCHAR *Heap; // r15
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d
  HANDLE v14; // rcx
  int v15; // ebx
  int v16; // eax
  const WCHAR *v17; // rdx
  int v18; // ecx
  __int64 LanguageList; // rax
  int v20; // ecx
  int v22; // eax
  int v23; // eax
  __int64 v24; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-99h] BYREF
  __int64 v27; // [rsp+58h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-89h] BYREF
  int v29; // [rsp+70h] [rbp-79h] BYREF
  __int64 v30; // [rsp+78h] [rbp-71h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-69h]
  int v32; // [rsp+88h] [rbp-61h]
  __int128 v33; // [rsp+90h] [rbp-59h]
  int v34; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-41h]
  UNICODE_STRING *v36; // [rsp+B0h] [rbp-39h]
  int v37; // [rsp+B8h] [rbp-31h]
  __int128 v38; // [rsp+C0h] [rbp-29h]
  int v39; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-11h]
  UNICODE_STRING *v41; // [rsp+E0h] [rbp-9h]
  int v42; // [rsp+E8h] [rbp-1h]
  __int128 v43; // [rsp+F0h] [rbp+7h]
  unsigned int v44; // [rsp+140h] [rbp+57h] BYREF
  int v45; // [rsp+148h] [rbp+5Fh] BYREF
  int v46; // [rsp+150h] [rbp+67h] BYREF

  v45 = a2;
  v6 = a5;
  v27 = 0LL;
  Handle = 0LL;
  v8 = a3;
  v26 = 0LL;
  v46 = 7;
  Heap = 0LL;
  v44 = 0;
  v11 = 0LL;
  v24 = 0LL;
  LOBYTE(v45) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v15 = -1073741811;
    goto LABEL_46;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v26 = 0LL;
  p_DestinationString = &DestinationString;
  v29 = 48;
  v30 = 0LL;
  v32 = 64;
  v33 = 0LL;
  if ( (int)NtOpenKey(&v26, 131097LL, &v29) >= 0 )
  {
    v23 = RtlpLoadMachineUIByPolicy(v26, a1, &v24);
    v11 = v24;
    v15 = v23;
    if ( !v23 && v24 )
    {
LABEL_18:
      if ( v8
        || v11 && *(_WORD *)(v11 + 4)
        || (v22 = RtlpMuiRegLoadMachinePreferredUILanguages(a1, a2, v6, &v24), v11 = v24, (v15 = v22) == 0) )
      {
        if ( !v11 )
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1, !v8, a1);
          v20 = v15;
          v11 = LanguageList;
          if ( !LanguageList )
            v20 = -1073741801;
          v15 = v20;
        }
      }
      goto LABEL_23;
    }
    v14 = v26;
  }
  else
  {
    v14 = 0LL;
    v26 = 0LL;
  }
  if ( v8 && v14 && (int)RtlpHasMachineUILock(v14, &v45) >= 0 )
    v8 = (_BYTE)v45 != 1;
  v15 = OpenGlobalizationUserSettingsKey(0x2000000, 0, v12, v13, (__int64)&v27);
  if ( v15 < 0 )
    goto LABEL_54;
  if ( v8 )
  {
    v16 = RtlpLoadUserUIByPolicy(v27, a1, &v24);
    v11 = v24;
    v15 = v16;
    if ( !v16 && v24 )
    {
LABEL_23:
      *a6 = v11;
      goto LABEL_24;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    Handle = 0LL;
    v35 = v27;
    v34 = 48;
    v36 = &DestinationString;
    v37 = 64;
    v38 = 0LL;
    v15 = NtOpenKey(&Handle, 131097LL, &v34);
    if ( v15 >= 0 )
    {
      v17 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v17 = L"PreferredUILanguagesPending";
      RtlInitUnicodeString(&DestinationString, v17);
      goto LABEL_16;
    }
LABEL_54:
    *v6 = 1;
    goto LABEL_46;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v40 = v27;
  v39 = 48;
  v41 = &DestinationString;
  v42 = 64;
  Handle = 0LL;
  v43 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v39) < 0 )
  {
LABEL_17:
    v15 = 0;
    *v6 = 1;
    goto LABEL_18;
  }
  RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
LABEL_16:
  v15 = -1073741772;
  v18 = LdrpQueryValueKey(Handle, &DestinationString, &v46, 0LL, &v44);
  if ( v18 == -1073741772 || !v44 )
    goto LABEL_17;
  if ( v18 == -2147483643 )
  {
    Heap = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v44 + 2);
    if ( Heap )
    {
      v15 = LdrpQueryValueKey(Handle, &DestinationString, &v46, Heap, &v44);
      if ( v15 >= 0 )
      {
        if ( v46 != 7 && v46 != 1 )
        {
          v11 = v24;
          v15 = 0;
          *v6 = 1;
          goto LABEL_18;
        }
        v15 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v44 >> 1, 8, (unsigned int)!v8 + 2, 1u, &v24);
      }
      v11 = v24;
LABEL_46:
      if ( v15 )
      {
LABEL_24:
        if ( Heap )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
        goto LABEL_26;
      }
      goto LABEL_18;
    }
    v15 = -1073741801;
  }
LABEL_26:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v27 )
  {
    CloseGlobalizationUserSettingsKey(v27);
    v27 = 0LL;
  }
  if ( v26 )
    NtClose(v26);
  return (unsigned int)v15;
}
