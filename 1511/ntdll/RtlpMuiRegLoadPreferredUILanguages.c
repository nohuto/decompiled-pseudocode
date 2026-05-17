/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x180006844
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeUserOrMachineLangList @ 0x180039CC8 (InitializeUserOrMachineLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 * Callees:
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x1800044FC (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180004780 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180005100 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180005200 (RtlpMuiRegCreateLanguageList.c)
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180006D78 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009598 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800EAF4C (RtlpHasMachineUILock.c)
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
  __int64 Heap; // r15
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d
  HANDLE v14; // rcx
  int v15; // ebx
  int UserUIByPolicy; // eax
  const WCHAR *v17; // rdx
  int v18; // ecx
  __int64 LanguageList; // rax
  int v20; // ecx
  int MachinePreferredUILanguages; // eax
  int MachineUIByPolicy; // eax
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
    MachineUIByPolicy = RtlpLoadMachineUIByPolicy(v26, a1, (__int64)&v24);
    v11 = v24;
    v15 = MachineUIByPolicy;
    if ( !MachineUIByPolicy && v24 )
    {
LABEL_18:
      if ( v8
        || v11 && *(_WORD *)(v11 + 4)
        || (MachinePreferredUILanguages = RtlpMuiRegLoadMachinePreferredUILanguages(a1, a2, v6, (__int64)&v24),
            v11 = v24,
            (v15 = MachinePreferredUILanguages) == 0) )
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
    goto LABEL_48;
  if ( v8 )
  {
    UserUIByPolicy = RtlpLoadUserUIByPolicy(v27, a1, (__int64)&v24);
    v11 = v24;
    v15 = UserUIByPolicy;
    if ( !UserUIByPolicy && v24 )
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
LABEL_48:
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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v44 + 2);
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
        v15 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v44 >> 1, 8LL, (unsigned int)!v8 + 2, 1, &v24);
      }
      v11 = v24;
LABEL_46:
      if ( v15 )
      {
LABEL_24:
        if ( Heap )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
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
