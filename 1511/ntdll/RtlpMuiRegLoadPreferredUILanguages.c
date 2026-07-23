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
  PVOID Heap; // r15
  __int64 v11; // rdi
  HANDLE v12; // rcx
  NTSTATUS v13; // ebx
  NTSTATUS UserUIByPolicy; // eax
  const WCHAR *v15; // rdx
  int v16; // ecx
  __int64 LanguageList; // rax
  int v18; // ecx
  NTSTATUS MachinePreferredUILanguages; // eax
  NTSTATUS MachineUIByPolicy; // eax
  __int64 v22; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-99h] BYREF
  __int64 v25; // [rsp+58h] [rbp-91h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-89h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-79h] BYREF
  _OBJECT_ATTRIBUTES v28; // [rsp+A0h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES v29; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v30; // [rsp+140h] [rbp+57h] BYREF
  int v31; // [rsp+148h] [rbp+5Fh]
  int v32; // [rsp+150h] [rbp+67h]

  v31 = a2;
  v6 = a5;
  v25 = 0LL;
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
    MachineUIByPolicy = RtlpLoadMachineUIByPolicy(KeyHandle, a1, (__int64)&v22);
    v11 = v22;
    v13 = MachineUIByPolicy;
    if ( !MachineUIByPolicy && v22 )
    {
LABEL_18:
      if ( v8
        || v11 && *(_WORD *)(v11 + 4)
        || (MachinePreferredUILanguages = RtlpMuiRegLoadMachinePreferredUILanguages(a1, a2, v6, (__int64)&v22),
            v11 = v22,
            (v13 = MachinePreferredUILanguages) == 0) )
      {
        if ( !v11 )
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1, !v8, a1);
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
  v13 = OpenGlobalizationUserSettingsKey(0x2000000u, (__int64)&v25);
  if ( v13 < 0 )
    goto LABEL_48;
  if ( v8 )
  {
    UserUIByPolicy = RtlpLoadUserUIByPolicy((void *)v25, a1, (__int64)&v22);
    v11 = v22;
    v13 = UserUIByPolicy;
    if ( !UserUIByPolicy && v22 )
    {
LABEL_23:
      *a6 = v11;
      goto LABEL_24;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    Handle = 0LL;
    v28.RootDirectory = (HANDLE)v25;
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
LABEL_48:
    *v6 = 1;
    goto LABEL_46;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v29.RootDirectory = (HANDLE)v25;
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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v30 + 2));
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
                8LL,
                (unsigned int)!v8 + 2,
                1,
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
  if ( v25 )
  {
    CloseGlobalizationUserSettingsKey(v25);
    v25 = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v13;
}
