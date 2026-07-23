/*
 * XREFs of _CmServiceFilterCallback @ 0x1406DBBF8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 */

char __fastcall CmServiceFilterCallback(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v6; // r12
  __int64 *v7; // r14
  char v8; // r15
  const WCHAR *v9; // rdx
  int DeviceRegProp; // edi
  unsigned int v11; // eax
  void *v12; // rcx
  PVOID v13; // rax
  int *v14; // rcx
  int v15; // ecx
  int *v16; // r12
  unsigned int v17; // eax
  int InstallerClassRegProp; // eax
  void *v19; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  const WCHAR *i; // r14
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64 *, __int64, __int64, _QWORD); // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-99h] BYREF
  int v28; // [rsp+48h] [rbp-91h]
  unsigned int v29; // [rsp+4Ch] [rbp-8Dh]
  int v30; // [rsp+50h] [rbp-89h]
  __int64 v31; // [rsp+58h] [rbp-81h]
  _DWORD v32[2]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-71h] BYREF
  _DWORD *v34; // [rsp+70h] [rbp-69h]
  __int64 *v35; // [rsp+78h] [rbp-61h]
  UNICODE_STRING String2; // [rsp+80h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-49h] BYREF
  _BYTE v38[76]; // [rsp+A0h] [rbp-39h] BYREF
  __int16 v39; // [rsp+ECh] [rbp+13h]

  v4 = 0;
  v29 = a3;
  v31 = a2;
  v35 = a1;
  v6 = a2;
  NumberOfBytes = 0LL;
  v7 = a1;
  v8 = 0;
  if ( !a4 )
    return v8;
  v9 = *(const WCHAR **)a4;
  if ( !*(_QWORD *)a4 || !*v9 )
  {
    v8 = 1;
    goto LABEL_65;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, v9) < 0 )
    return v8;
  while ( 1 )
  {
    LODWORD(NumberOfBytes) = *(_DWORD *)(a4 + 16);
    DeviceRegProp = CmGetDeviceRegProp(
                      (__int64)v7,
                      v6,
                      0LL,
                      5,
                      (__int64)&NumberOfBytes + 4,
                      *(_QWORD *)(a4 + 8),
                      (__int64)&NumberOfBytes,
                      0);
    v11 = NumberOfBytes;
    if ( !DeviceRegProp && (unsigned int)NumberOfBytes < 2 )
      goto LABEL_13;
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_24;
    if ( (unsigned int)NumberOfBytes < 2 )
    {
LABEL_13:
      DeviceRegProp = -1073741811;
LABEL_14:
      v14 = v32;
      v32[0] = 1;
      v34 = v32;
      v32[1] = 2;
      v30 = 0;
      v33[0] = 18;
      v33[1] = 19;
      while ( 1 )
      {
        v15 = *v14;
        v28 = v15;
        if ( v15 == 2 )
        {
          LODWORD(NumberOfBytes) = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            (__int64)v7,
                            v6,
                            0LL,
                            9,
                            (__int64)&NumberOfBytes + 4,
                            (__int64)v38,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp < 0 || HIDWORD(NumberOfBytes) != 1 || (unsigned int)NumberOfBytes < 2 )
            return v8;
          v15 = v28;
          v39 = 0;
        }
        v16 = v33;
        do
        {
          while ( 1 )
          {
            v17 = *(_DWORD *)(a4 + 16);
            LODWORD(NumberOfBytes) = v17;
            if ( v15 == 1 )
            {
              InstallerClassRegProp = CmGetDeviceRegProp(
                                        (__int64)v7,
                                        v31,
                                        0LL,
                                        *v16,
                                        (__int64)&NumberOfBytes + 4,
                                        *(_QWORD *)(a4 + 8),
                                        (__int64)&NumberOfBytes,
                                        0);
LABEL_30:
              DeviceRegProp = InstallerClassRegProp;
              v17 = NumberOfBytes;
              goto LABEL_31;
            }
            if ( v15 == 2 )
            {
              InstallerClassRegProp = CmGetInstallerClassRegProp(
                                        v7,
                                        (__int64)v38,
                                        0LL,
                                        *v16,
                                        (char *)&NumberOfBytes + 4,
                                        *(void **)(a4 + 8),
                                        &NumberOfBytes);
              goto LABEL_30;
            }
LABEL_31:
            if ( !DeviceRegProp && v17 < 2 )
            {
LABEL_33:
              DeviceRegProp = -1073741811;
              goto LABEL_58;
            }
            if ( DeviceRegProp != -1073741789 )
              break;
            if ( v17 < 2 )
              goto LABEL_33;
            v19 = *(void **)(a4 + 8);
            if ( v19 )
            {
              ExFreePoolWithTag(v19, 0);
              v17 = NumberOfBytes;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x52504E50u);
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            if ( !PoolWithTag )
            {
              *(_DWORD *)(a4 + 16) = 0;
              DeviceRegProp = -1073741801;
              break;
            }
            v15 = v28;
            *(_DWORD *)(a4 + 16) = NumberOfBytes;
          }
          if ( DeviceRegProp >= 0 && HIDWORD(NumberOfBytes) == 7 )
          {
            v21 = *(_DWORD *)(a4 + 16);
            if ( v21 > 2 )
              *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v21 >> 1) - 2) = 0;
            v22 = *(_DWORD *)(a4 + 16);
            if ( v22 > 4 )
              *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v22 >> 1) - 4) = 0;
            for ( i = *(const WCHAR **)(a4 + 8); *i; i += v24 + 1 )
            {
              if ( RtlInitUnicodeStringEx(&String2, i) >= 0 && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
              {
                v8 = 1;
                break;
              }
              v24 = -1LL;
              do
                ++v24;
              while ( i[v24] );
            }
            if ( v8 )
            {
              v6 = v31;
              goto LABEL_64;
            }
            v7 = v35;
          }
LABEL_58:
          v15 = v28;
          ++v4;
          ++v16;
        }
        while ( (unsigned __int64)v4 < 2 );
        v6 = v31;
        v4 = 0;
        v14 = v34 + 1;
        ++v30;
        ++v34;
        if ( (unsigned __int64)v30 >= 2 )
          return v8;
      }
    }
    v12 = *(void **)(a4 + 8);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v11 = NumberOfBytes;
    }
    v13 = ExAllocatePoolWithTag(PagedPool, v11, 0x52504E50u);
    *(_QWORD *)(a4 + 8) = v13;
    if ( !v13 )
      break;
    *(_DWORD *)(a4 + 16) = NumberOfBytes;
  }
  *(_DWORD *)(a4 + 16) = 0;
  DeviceRegProp = -1073741801;
LABEL_24:
  if ( DeviceRegProp )
    goto LABEL_14;
  *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0;
  if ( RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0
    || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
  {
    goto LABEL_14;
  }
  v8 = 1;
LABEL_64:
  a3 = v29;
LABEL_65:
  v25 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(a4 + 24);
  if ( v25 )
    return v25(v35, v6, a3, *(_QWORD *)(a4 + 32));
  return v8;
}
