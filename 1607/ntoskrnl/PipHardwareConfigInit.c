/*
 * XREFs of PipHardwareConfigInit @ 0x14079930C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlStringFromGUID @ 0x1404D011C (RtlStringFromGUID.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1406298FC (PipHardwareConfigClearStartOverrides.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140629A20 (PipHardwareConfigTriggerRespecialize.c)
 *     PipHardwareConfigExists @ 0x1407CEBD0 (PipHardwareConfigExists.c)
 */

__int64 __fastcall PipHardwareConfigInit(GUID *Guid)
{
  HANDLE v2; // r12
  HANDLE v3; // rsi
  int v4; // eax
  HANDLE v5; // rbx
  int v6; // edi
  HANDLE v7; // r14
  int v8; // eax
  NTSTATUS RegistryValue; // r15d
  unsigned __int8 CurrentIrql; // dl
  __int64 v11; // rcx
  int v12; // ebx
  bool v13; // r15
  unsigned int v15; // eax
  int v16; // r15d
  bool v17; // zf
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v22; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v23; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG v25; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER Data; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v27; // [rsp+90h] [rbp-78h] BYREF
  char v28; // [rsp+98h] [rbp-70h] BYREF

  v18 = -1;
  *(_DWORD *)&ValueName.Length = 4063292;
  v27 = 0LL;
  v23 = 0LL;
  KeyHandle = 0LL;
  v22 = 0LL;
  v2 = 0LL;
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
  v3 = 0LL;
  v4 = IopCreateRegistryKeyEx(&v22, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
  v5 = v22;
  if ( v4 < 0 )
    v5 = 0LL;
  v22 = v5;
  if ( v5 )
  {
    *(_DWORD *)&ValueName.Length = 1703960;
    ValueName.Buffer = L"Respecialize";
    ZwDeleteValueKey(v5, &ValueName);
  }
  ValueName.Buffer = L"\\Registry\\Machine\\System\\HardwareConfig";
  *(_DWORD *)&ValueName.Length = 5242958;
  v6 = IopCreateRegistryKeyEx(&KeyHandle, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
  if ( v6 < 0 || (v6 = RtlStringFromGUID(Guid, &PnpCurrentHardwareConfigurationGuidString), v6 < 0) )
  {
    v7 = KeyHandle;
    goto LABEL_25;
  }
  v7 = KeyHandle;
  DestinationString.Buffer = L"LastConfig";
  *(_DWORD *)&DestinationString.Length = 1441812;
  v6 = ZwSetValueKey(
         KeyHandle,
         &DestinationString,
         0,
         1u,
         PnpCurrentHardwareConfigurationGuidString.Buffer,
         PnpCurrentHardwareConfigurationGuidString.Length + 2);
  if ( v6 >= 0 )
  {
    v8 = IopCreateRegistryKeyEx(&v23, v7, &PnpCurrentHardwareConfigurationGuidString, 0xF003Fu, 0, &v25);
    v3 = v23;
    v6 = v8;
    if ( v8 >= 0 )
    {
      RegistryValue = IopGetRegistryValue(v23, L"Id", 0, &P);
      v6 = -1073741823;
      if ( RegistryValue >= 0 )
      {
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v18 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        else
          RegistryValue = -1073741823;
        ExFreePoolWithTag(P, 0);
        if ( RegistryValue >= 0 )
          goto LABEL_14;
      }
      v18 = 0;
      if ( IopGetRegistryValue(v7, L"LastId", 0, &P) >= 0 )
      {
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v18 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) + 1;
        ExFreePoolWithTag(P, 0);
      }
      v15 = v18;
      v16 = v18 - 1;
      if ( v18 != v18 - 1 )
      {
        do
        {
          v17 = (unsigned __int8)PipHardwareConfigExists(v7, v15) == 0;
          v15 = v18;
          if ( v17 )
            break;
          v15 = v18 + 1;
          v18 = v15;
        }
        while ( v15 != v16 );
        if ( v15 != v16 )
        {
          *(_DWORD *)&DestinationString.Length = 917516;
          DestinationString.Buffer = L"LastId";
          ZwSetValueKey(v7, &DestinationString, 0, 4u, &v18, 4u);
          DestinationString.Buffer = L"Id";
          *(_DWORD *)&DestinationString.Length = 393220;
          v6 = ZwSetValueKey(v3, &DestinationString, 0, 4u, &v18, 4u);
          if ( v6 >= 0 )
          {
LABEL_14:
            PnpCurrentHardwareConfigurationIndex = v18;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v11 = KeBootTimeBias;
            Data = KeBootTime;
            __writecr8(CurrentIrql);
            Data.QuadPart -= v11;
            v3 = v23;
            DestinationString.Buffer = L"LastUse";
            *(_DWORD *)&DestinationString.Length = 1048590;
            ZwSetValueKey(v23, &DestinationString, 0, 3u, &Data, 8u);
            v7 = KeyHandle;
            DestinationString.Buffer = (wchar_t *)L"Current";
            *(_DWORD *)&DestinationString.Length = 1048590;
            v6 = IopCreateRegistryKeyEx(&v27, KeyHandle, &DestinationString, 0xF003Fu, 3u, 0LL);
            if ( v6 < 0
              || (*(_DWORD *)&DestinationString.Length = 34078720,
                  DestinationString.Buffer = (wchar_t *)&v28,
                  v6 = RtlUnicodeStringPrintf(
                         &DestinationString,
                         L"\\Registry\\Machine\\System\\HardwareConfig\\%wZ",
                         &PnpCurrentHardwareConfigurationGuidString),
                  v6 < 0) )
            {
              v2 = v27;
            }
            else
            {
              v2 = v27;
              v6 = ZwSetValueKey(
                     v27,
                     &CmSymbolicLinkValueName,
                     0,
                     6u,
                     DestinationString.Buffer,
                     DestinationString.Length);
              if ( v6 >= 0 )
              {
                if ( InitSafeBootMode )
                  goto LABEL_51;
                if ( IopGetRegistryValue(v3, L"Reset", 0, &P) >= 0 )
                {
                  v12 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4
                      ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2))
                      : 0;
                  ExFreePoolWithTag(P, 0);
                }
                else
                {
                  v12 = 0;
                }
                if ( v12 )
                {
LABEL_51:
                  if ( PipHardwareConfigClearStartOverrides(v18) >= 0 )
                  {
                    *(_DWORD *)&ValueName.Length = 786442;
                    ValueName.Buffer = L"Reset";
                    ZwDeleteValueKey(v3, &ValueName);
                  }
                }
                v5 = v22;
                if ( v22 )
                {
                  if ( v25 == 1 )
                    goto LABEL_62;
                  v13 = 0;
                  if ( IopGetRegistryValue(v22, L"RespecializeStarted", 0, &P) >= 0 )
                  {
                    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                      v13 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) == 1;
                    ExFreePoolWithTag(P, 0);
                    if ( v13 )
                      goto LABEL_62;
                  }
                  if ( IopGetRegistryValue(v3, L"Respecialize", 0, &P) >= 0 )
                  {
                    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                      v13 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) == 1;
                    ExFreePoolWithTag(P, 0);
                    if ( v13 )
                    {
LABEL_62:
                      if ( (int)PipHardwareConfigTriggerRespecialize(v5) >= 0 )
                      {
                        *(_DWORD *)&ValueName.Length = 1703960;
                        ValueName.Buffer = L"Respecialize";
                        ZwDeleteValueKey(v3, &ValueName);
                      }
                    }
                  }
                }
                goto LABEL_25;
              }
            }
            v5 = v22;
          }
        }
      }
    }
  }
LABEL_25:
  if ( v7 )
    ZwClose(v7);
  if ( v3 )
    ZwClose(v3);
  if ( v2 )
    ZwClose(v2);
  if ( v5 )
    ZwClose(v5);
  return (unsigned int)v6;
}
