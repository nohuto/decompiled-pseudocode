/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x14062F344
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     _CmIsDevicePresent @ 0x1404DA2B0 (_CmIsDevicePresent.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(__int64 *a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  int v4; // r13d
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 *v8; // r14
  char v9; // r15
  PCUNICODE_STRING v10; // rax
  int DeviceRegProp; // edi
  PVOID v12; // rdi
  void *v13; // rcx
  int *v14; // rcx
  int v15; // ecx
  int *v16; // r12
  unsigned int v17; // eax
  int InstallerClassRegProp; // eax
  PVOID PoolWithTag; // r14
  void *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  const WCHAR *i; // r14
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64 *, __int64, _QWORD, _QWORD); // rax
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-89h] BYREF
  char NumberOfBytes_4; // [rsp+44h] [rbp-85h] BYREF
  int v29; // [rsp+48h] [rbp-81h] BYREF
  int v30; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v31; // [rsp+50h] [rbp-79h]
  int v32; // [rsp+54h] [rbp-75h]
  __int64 *v33; // [rsp+58h] [rbp-71h]
  const WCHAR *v34; // [rsp+60h] [rbp-69h]
  _DWORD v35[2]; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v36[2]; // [rsp+70h] [rbp-59h] BYREF
  _DWORD *v37; // [rsp+78h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v39[76]; // [rsp+90h] [rbp-39h] BYREF
  __int16 v40; // [rsp+DCh] [rbp+13h]

  v4 = 0;
  v31 = a3;
  v6 = a3;
  v7 = (__int64)a2;
  v34 = a2;
  v8 = a1;
  v33 = a1;
  v9 = 0;
  NumberOfBytes_4 = 0;
  NumberOfBytes = 0;
  if ( *(_BYTE *)(a4 + 8) && (CmIsDevicePresent((int)a1, a2, &NumberOfBytes_4) < 0 || !NumberOfBytes_4) )
    return v9;
  v10 = *(PCUNICODE_STRING *)a4;
  if ( !*(_QWORD *)a4 || v10->Length < 2u || !*v10->Buffer )
  {
    v9 = 1;
    goto LABEL_66;
  }
  while ( 1 )
  {
    NumberOfBytes = *(_DWORD *)(a4 + 24);
    DeviceRegProp = CmGetDeviceRegProp(
                      (__int64)v8,
                      v7,
                      0LL,
                      5,
                      (__int64)&v29,
                      *(_QWORD *)(a4 + 16),
                      (__int64)&NumberOfBytes,
                      0);
    if ( !DeviceRegProp && NumberOfBytes < 2 )
      goto LABEL_15;
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_26;
    if ( NumberOfBytes < 2 )
    {
LABEL_15:
      DeviceRegProp = -1073741811;
LABEL_16:
      v14 = v35;
      v35[0] = 1;
      v37 = v35;
      v35[1] = 2;
      v32 = 0;
      v36[0] = 18;
      v36[1] = 19;
      while ( 1 )
      {
        v15 = *v14;
        v30 = v15;
        if ( v15 == 2 )
        {
          NumberOfBytes = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            (__int64)v8,
                            v7,
                            0LL,
                            9,
                            (__int64)&v29,
                            (__int64)v39,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp < 0 || v29 != 1 || NumberOfBytes < 2 )
            return v9;
          v15 = v30;
          v40 = 0;
        }
        v16 = v36;
        do
        {
          while ( 1 )
          {
            v17 = *(_DWORD *)(a4 + 24);
            NumberOfBytes = v17;
            if ( v15 == 1 )
            {
              InstallerClassRegProp = CmGetDeviceRegProp(
                                        (__int64)v8,
                                        (__int64)v34,
                                        0LL,
                                        *v16,
                                        (__int64)&v29,
                                        *(_QWORD *)(a4 + 16),
                                        (__int64)&NumberOfBytes,
                                        0);
LABEL_32:
              DeviceRegProp = InstallerClassRegProp;
              v17 = NumberOfBytes;
              goto LABEL_33;
            }
            if ( v15 == 2 )
            {
              InstallerClassRegProp = CmGetInstallerClassRegProp(
                                        v8,
                                        (__int64)v39,
                                        0LL,
                                        *v16,
                                        &v29,
                                        *(void **)(a4 + 16),
                                        &NumberOfBytes);
              goto LABEL_32;
            }
LABEL_33:
            if ( !DeviceRegProp && v17 < 2 )
            {
LABEL_35:
              DeviceRegProp = -1073741811;
              goto LABEL_59;
            }
            if ( DeviceRegProp != -1073741789 )
              break;
            if ( v17 < 2 )
              goto LABEL_35;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x47706E50u);
            if ( !PoolWithTag )
            {
              DeviceRegProp = -1073741670;
              break;
            }
            v20 = *(void **)(a4 + 16);
            if ( v20 )
              ExFreePoolWithTag(v20, 0);
            *(_DWORD *)(a4 + 24) = NumberOfBytes;
            v15 = v30;
            *(_QWORD *)(a4 + 16) = PoolWithTag;
            v8 = v33;
          }
          if ( DeviceRegProp >= 0 && v29 == 7 )
          {
            v21 = *(_DWORD *)(a4 + 24);
            if ( v21 > 2 )
              *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v21 >> 1) - 2) = 0;
            v22 = *(_DWORD *)(a4 + 24);
            if ( v22 > 4 )
              *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v22 >> 1) - 4) = 0;
            for ( i = *(const WCHAR **)(a4 + 16); *i; i += v24 + 1 )
            {
              if ( RtlInitUnicodeStringEx(&DestinationString, i) >= 0
                && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
              {
                v9 = 1;
                break;
              }
              v24 = -1LL;
              do
                ++v24;
              while ( i[v24] );
            }
            if ( v9 )
            {
              v8 = v33;
              v7 = (__int64)v34;
              goto LABEL_65;
            }
          }
LABEL_59:
          v15 = v30;
          ++v4;
          v8 = v33;
          ++v16;
        }
        while ( (unsigned __int64)v4 < 2 );
        v7 = (__int64)v34;
        v4 = 0;
        v14 = v37 + 1;
        ++v32;
        ++v37;
        if ( (unsigned __int64)v32 >= 2 )
          return v9;
      }
    }
    v12 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x47706E50u);
    if ( !v12 )
      break;
    v13 = *(void **)(a4 + 16);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    *(_DWORD *)(a4 + 24) = NumberOfBytes;
    *(_QWORD *)(a4 + 16) = v12;
  }
  DeviceRegProp = -1073741670;
LABEL_26:
  if ( DeviceRegProp )
    goto LABEL_16;
  *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) < 0
    || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
  {
    goto LABEL_16;
  }
  v9 = 1;
LABEL_65:
  v6 = v31;
LABEL_66:
  v25 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(a4 + 32);
  if ( v25 )
    return v25(v8, v7, v6, *(_QWORD *)(a4 + 40));
  return v9;
}
