/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x180012948 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeUserOrMachineLangList @ 0x1800709F8 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180070754 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180070B50 (RtlpLoadMachineUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x1800716C4 (LdrpQueryValueKey.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1800717F4 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180071964 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A00 (RtlpLoadUserUIByPolicy.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800F3CCC (RtlpHasMachineUILock.c)
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
  WCHAR *Heap; // r15
  __int64 v11; // rdi
  HANDLE v12; // rcx
  int v13; // ebx
  int v14; // eax
  const WCHAR *v15; // rdx
  int v16; // ecx
  __int64 LanguageList; // rax
  int v18; // ecx
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-99h] BYREF
  HANDLE CurrentUserKey; // [rsp+58h] [rbp-91h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-89h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-79h] BYREF
  _OBJECT_ATTRIBUTES v28; // [rsp+A0h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES v29; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v30; // [rsp+140h] [rbp+57h] BYREF
  int v31; // [rsp+148h] [rbp+5Fh]
  int v32; // [rsp+150h] [rbp+67h]

  v31 = a2;
  v6 = a5;
  CurrentUserKey = 0LL;
  Handle = 0LL;
  v8 = a3;
  KeyHandle = 0LL;
  v32 = 7;
  Heap = 0LL;
  LODWORD(v30) = 0;
  v11 = 0LL;
  v22 = 0LL;
  LOBYTE(v31) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v13 = -1073741811;
    goto LABEL_46;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v21 = RtlpLoadMachineUIByPolicy(KeyHandle, a1, &v22);
    v11 = v22;
    v13 = v21;
    if ( !v21 && v22 )
    {
LABEL_18:
      if ( v8
        || v11 && *(_WORD *)(v11 + 4)
        || (v20 = RtlpMuiRegLoadMachinePreferredUILanguages(a1, a2, v6, &v22), v11 = v22, (v13 = v20) == 0) )
      {
        if ( !v11 )
        {
          LOBYTE(a2) = !v8;
          LanguageList = RtlpMuiRegCreateLanguageList(1LL, a2, a1);
          v18 = v13;
          v11 = LanguageList;
          if ( !LanguageList )
            v18 = -1073741801;
          v13 = v18;
        }
      }
      goto LABEL_23;
    }
    v12 = KeyHandle;
  }
  else
  {
    v12 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v8 && v12 && (int)RtlpHasMachineUILock(v12) >= 0 )
    v8 = (_BYTE)v31 != 1;
  v13 = OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey);
  if ( v13 < 0 )
    goto LABEL_54;
  if ( v8 )
  {
    v14 = RtlpLoadUserUIByPolicy(CurrentUserKey, a1, &v22);
    v11 = v22;
    v13 = v14;
    if ( !v14 && v22 )
    {
LABEL_23:
      *a6 = v11;
      goto LABEL_24;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    Handle = 0LL;
    v28.RootDirectory = CurrentUserKey;
    v28.Length = 48;
    v28.ObjectName = &DestinationString;
    v28.Attributes = 64;
    *(_OWORD *)&v28.SecurityDescriptor = 0LL;
    v13 = NtOpenKey(&Handle, 0x20019u, &v28);
    if ( v13 >= 0 )
    {
      v15 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v15 = L"PreferredUILanguagesPending";
      RtlInitUnicodeString(&DestinationString, v15);
      goto LABEL_16;
    }
LABEL_54:
    *v6 = 1;
    goto LABEL_46;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v29.RootDirectory = CurrentUserKey;
  v29.Length = 48;
  v29.ObjectName = &DestinationString;
  v29.Attributes = 64;
  Handle = 0LL;
  *(_OWORD *)&v29.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&Handle, 0x20019u, &v29) < 0 )
  {
LABEL_17:
    v13 = 0;
    *v6 = 1;
    goto LABEL_18;
  }
  RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
LABEL_16:
  v13 = -1073741772;
  v16 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v30);
  if ( v16 == -1073741772 || !(_DWORD)v30 )
    goto LABEL_17;
  if ( v16 == -2147483643 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v30 + 2));
    if ( Heap )
    {
      v13 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v30);
      if ( v13 >= 0 )
      {
        if ( v32 != 7 && v32 != 1 )
        {
          v11 = v22;
          v13 = 0;
          *v6 = 1;
          goto LABEL_18;
        }
        v13 = RtlpMuiRegAddMultiSzToLangFallbackList(
                a1,
                Heap,
                (unsigned int)v30 >> 1,
                8,
                (unsigned int)!v8 + 2,
                1u,
                &v22);
      }
      v11 = v22;
LABEL_46:
      if ( v13 )
      {
LABEL_24:
        if ( Heap )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_26;
      }
      goto LABEL_18;
    }
    v13 = -1073741801;
  }
LABEL_26:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( CurrentUserKey )
  {
    CloseGlobalizationUserSettingsKey(CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v13;
}
