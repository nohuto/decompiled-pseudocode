/*
 * XREFs of pIoQueryBusDescription @ 0x140507738
 * Callers:
 *     IoQueryDeviceDescription @ 0x14050762C (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcsncmp @ 0x140145C64 (wcsncmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14049446C (IopOpenRegistryKey.c)
 *     pIoQueryDeviceDescription @ 0x1405071C8 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x140507A9C (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x140507B48 (IopGetRegistryValues.c)
 */

__int64 __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  __int64 result; // rax
  PVOID v7; // rsi
  unsigned int v8; // eax
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 *v10; // rsi
  ULONG v11; // edx
  unsigned int *v12; // rcx
  char v13; // al
  PVOID v14; // r8
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  __int64 v17; // r9
  unsigned int *v18; // rax
  NTSTATUS DeviceDescription; // eax
  ULONG Length; // [rsp+20h] [rbp-E0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID KeyInformation; // [rsp+68h] [rbp-98h]
  unsigned int *v23; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h]
  UNICODE_STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING *v28; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v29; // [rsp+C0h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v31; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v32; // [rsp+E0h] [rbp-20h]
  PVOID v33; // [rsp+E8h] [rbp-18h]

  v28 = a2;
  v23 = a4;
  KeyHandle = a3;
  result = IopGetRegistryKeyInformation(a3);
  if ( (int)result >= 0 )
  {
    v7 = P;
    v8 = *((_DWORD *)P + 6);
    LODWORD(P) = v8 + 32;
    if ( v8 + 32 < v8 )
      return 3221225621LL;
    RegistryValues = 0;
    KeyInformation = ExAllocatePoolWithTag(PagedPool, v8 + 32, 0x424B6F49u);
    ExFreePoolWithTag(v7, 0);
    v10 = (unsigned __int16 *)KeyInformation;
    if ( !KeyInformation )
      return 3221225626LL;
    v11 = 0;
    LODWORD(KeyInformation) = 0;
    while ( 1 )
    {
      v12 = a1[1];
      if ( v12 && *v12 == *v23
        || (RegistryValues = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, v10, (ULONG)P, &ResultLength),
            RegistryValues < 0) )
      {
LABEL_26:
        ExFreePoolWithTag(v10, 0);
        return (unsigned int)RegistryValues;
      }
      if ( !a5
        || !wcsncmp(v10 + 8, L"MultifunctionAdapter", (unsigned __int64)*((unsigned int *)v10 + 3) >> 1)
        || !wcsncmp(v10 + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)v10 + 3) >> 1)
        || !wcsncmp(v10 + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)v10 + 3) >> 1) )
      {
        Source.Buffer = v10 + 8;
        Source.Length = v10[6];
        Source.MaximumLength = v10[6];
        LOBYTE(Length) = 0;
        if ( IopOpenRegistryKey(&Handle, KeyHandle, &Source, 0x20019u, Length) >= 0 )
          break;
      }
LABEL_25:
      v11 = (_DWORD)KeyInformation + 1;
      LODWORD(KeyInformation) = (_DWORD)KeyInformation + 1;
      if ( RegistryValues < 0 )
        goto LABEL_26;
    }
    Destination = *v28;
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    v13 = 0;
    if ( !a5 )
    {
      RegistryValues = IopGetRegistryValues(Handle);
      if ( RegistryValues >= 0 )
      {
        v14 = v32;
        if ( v32 )
        {
          if ( *((_DWORD *)v32 + 3) )
          {
            if ( *(_DWORD *)((char *)v32 + *((unsigned int *)v32 + 2)) == **a1 )
            {
              v16 = v23;
              ++*v23;
              v17 = *v16;
              v18 = a1[1];
              if ( !v18 || *v18 == (_DWORD)v17 )
              {
                if ( a1[2] )
                {
                  v29 = Destination;
                  DeviceDescription = pIoQueryDeviceDescription(a1, (__int128 *)&v29, (__int64)v14, v17, (__int64)&v31);
                }
                else
                {
                  DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD, __int64, PVOID *, _DWORD, _DWORD, _QWORD, _DWORD, _DWORD, _QWORD))a1[6])(
                                        a1[7],
                                        &Destination,
                                        **a1,
                                        v17,
                                        &v31,
                                        0,
                                        0,
                                        0LL,
                                        0,
                                        0,
                                        0LL);
                }
                v14 = v32;
                RegistryValues = DeviceDescription;
              }
            }
          }
        }
        if ( v31 )
        {
          ExFreePoolWithTag(v31, 0);
          v14 = v32;
          v31 = 0LL;
        }
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          v32 = 0LL;
        }
        if ( v33 )
        {
          ExFreePoolWithTag(v33, 0);
          v33 = 0LL;
        }
      }
      v15 = a1[1];
      if ( v15 && *v15 == *v23 )
        goto LABEL_24;
      v13 = 1;
    }
    v29 = Destination;
    RegistryValues = pIoQueryBusDescription((_DWORD)a1, (unsigned int)&v29, (_DWORD)Handle, (_DWORD)v23, v13);
    if ( RegistryValues == -2147483622 )
      RegistryValues = 0;
LABEL_24:
    ZwClose(Handle);
    Handle = 0LL;
    goto LABEL_25;
  }
  return result;
}
