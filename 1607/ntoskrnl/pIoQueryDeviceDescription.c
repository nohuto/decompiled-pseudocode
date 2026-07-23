/*
 * XREFs of pIoQueryDeviceDescription @ 0x14053FC00
 * Callers:
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1403F4CE4 (RtlIntegerToUnicodeString.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     IopGetRegistryKeyInformation @ 0x1405404C4 (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x140540570 (IopGetRegistryValues.c)
 */

__int64 __fastcall pIoQueryDeviceDescription(unsigned int **a1, __int128 *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int128 v5; // xmm0
  __int64 v6; // rdi
  NTSTATUS appended; // ebx
  ULONG *v10; // rax
  ULONG v11; // esi
  unsigned int v12; // r12d
  __int128 v13; // xmm7
  ULONG *v14; // rax
  ULONG v15; // edi
  unsigned int v16; // r15d
  __int128 v17; // xmm6
  ULONG v19; // [rsp+28h] [rbp-E0h]
  _QWORD Destination[3]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h]
  PVOID v24; // [rsp+90h] [rbp-78h]
  UNICODE_STRING String; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h]
  PVOID v27; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v28; // [rsp+B8h] [rbp-50h]
  PVOID v29; // [rsp+C0h] [rbp-48h]
  PVOID v30; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v31; // [rsp+D0h] [rbp-38h]
  PVOID v32; // [rsp+D8h] [rbp-30h]
  char v33; // [rsp+E0h] [rbp-28h] BYREF

  v5 = *a2;
  v6 = a5;
  v23 = a5;
  *(_OWORD *)&Destination[1] = v5;
  Handle = 0LL;
  String.MaximumLength = 28;
  KeyHandle = 0LL;
  String.Buffer = (wchar_t *)&v33;
  P = 0LL;
  v24 = 0LL;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[*a1[2]]);
    if ( appended >= 0 )
    {
      v10 = a1[3];
      if ( v10 )
      {
        v11 = *v10;
        v12 = *v10 + 1;
      }
      else
      {
        LOBYTE(v19) = 0;
        appended = IopOpenRegistryKey(&Handle, 0LL, (UNICODE_STRING *)&Destination[1], 0x20019u, v19);
        if ( appended < 0 )
          return (unsigned int)appended;
        appended = IopGetRegistryKeyInformation(Handle);
        ZwClose(Handle);
        Handle = 0LL;
        if ( appended < 0 )
          return (unsigned int)appended;
        v11 = 0;
        v12 = *((_DWORD *)P + 5);
        ExFreePoolWithTag(P, 0);
      }
      v13 = *(_OWORD *)&Destination[1];
      if ( v11 < v12 )
      {
        while ( 1 )
        {
          *(_OWORD *)&Destination[1] = v13;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v11, 0xAu, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          LOBYTE(v19) = 0;
          appended = IopOpenRegistryKey(&Handle, 0LL, (UNICODE_STRING *)&Destination[1], 0x20019u, v19);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(Handle);
            ZwClose(Handle);
            Handle = 0LL;
            if ( appended >= 0 )
              break;
          }
LABEL_30:
          if ( ++v11 >= v12 )
            return (unsigned int)appended;
        }
        if ( !a1[4] )
        {
          appended = ((__int64 (__fastcall *)(unsigned int *, _QWORD *, _QWORD, _QWORD, __int64, _DWORD, ULONG, PVOID *, _DWORD, _DWORD, _QWORD))a1[6])(
                       a1[7],
                       &Destination[1],
                       **a1,
                       a4,
                       v6,
                       *a1[2],
                       v11,
                       &v27,
                       0,
                       0,
                       0LL);
          goto LABEL_23;
        }
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[*a1[4]]);
          if ( appended >= 0 )
          {
            v14 = a1[5];
            if ( v14 )
            {
              v15 = *v14;
              v16 = *v14 + 1;
            }
            else
            {
              LOBYTE(v19) = 0;
              if ( IopOpenRegistryKey(&KeyHandle, 0LL, (UNICODE_STRING *)&Destination[1], 0x20019u, v19) < 0
                || (appended = IopGetRegistryKeyInformation(KeyHandle), ZwClose(KeyHandle),
                                                                        KeyHandle = 0LL,
                                                                        appended < 0) )
              {
                appended = 0;
                goto LABEL_23;
              }
              v15 = 0;
              v16 = *((_DWORD *)v24 + 5);
              ExFreePoolWithTag(v24, 0);
              v24 = 0LL;
            }
            v17 = *(_OWORD *)&Destination[1];
            while ( v15 < v16 )
            {
              *(_OWORD *)&Destination[1] = v17;
              String.Length = 26;
              appended = RtlIntegerToUnicodeString(v15, 0xAu, &String);
              if ( appended < 0 )
                break;
              appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
              if ( appended < 0 )
                break;
              appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
              if ( appended < 0 )
                break;
              LOBYTE(v19) = 0;
              appended = IopOpenRegistryKey(&KeyHandle, 0LL, (UNICODE_STRING *)&Destination[1], 0x20019u, v19);
              if ( appended >= 0 )
              {
                appended = IopGetRegistryValues(KeyHandle);
                ZwClose(KeyHandle);
                KeyHandle = 0LL;
                if ( appended >= 0 )
                {
                  appended = ((__int64 (__fastcall *)(unsigned int *, _QWORD *, _QWORD, _QWORD, __int64, _DWORD, ULONG, PVOID *, _DWORD, ULONG, PVOID *))a1[6])(
                               a1[7],
                               &Destination[1],
                               **a1,
                               a4,
                               v23,
                               *a1[2],
                               v11,
                               &v27,
                               *a1[4],
                               v15,
                               &v30);
                  if ( v30 )
                  {
                    ExFreePoolWithTag(v30, 0);
                    v30 = 0LL;
                  }
                  if ( v31 )
                  {
                    ExFreePoolWithTag(v31, 0);
                    v31 = 0LL;
                  }
                  if ( v32 )
                  {
                    ExFreePoolWithTag(v32, 0);
                    v32 = 0LL;
                  }
                  if ( appended < 0 )
                    break;
                }
              }
              ++v15;
            }
            v6 = v23;
          }
        }
LABEL_23:
        if ( v27 )
        {
          ExFreePoolWithTag(v27, 0);
          v27 = 0LL;
        }
        if ( v28 )
        {
          ExFreePoolWithTag(v28, 0);
          v28 = 0LL;
        }
        if ( v29 )
        {
          ExFreePoolWithTag(v29, 0);
          v29 = 0LL;
        }
        if ( appended < 0 )
          return (unsigned int)appended;
        goto LABEL_30;
      }
    }
  }
  return (unsigned int)appended;
}
