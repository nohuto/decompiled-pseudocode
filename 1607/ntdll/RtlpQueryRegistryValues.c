/*
 * XREFs of RtlpQueryRegistryValues @ 0x1800579F4
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180057240 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x180057818 (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValuesEx @ 0x1800579D0 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckPortableOperatingSystem @ 0x1800590A0 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x1800E5430 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180057DE8 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18005811C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A6680 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A7D70 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r12d
  __int64 result; // rax
  int v11; // r12d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  unsigned int v16; // r13d
  const WCHAR *v17; // rdx
  int v18; // r14d
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  unsigned int i; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v28; // [rsp+50h] [rbp-41h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING v31; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-9h] BYREF
  HANDLE v34; // [rsp+90h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp+7h]
  int v36; // [rsp+A0h] [rbp+Fh]
  __int128 v37; // [rsp+A8h] [rbp+17h]

  v6 = a4;
  v9 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
      v12 = 0LL;
    else
      v12 = a2;
    RtlInitUnicodeString(&DestinationString, v12);
    v28 = 4096LL;
    v13 = RtlpAllocDeallocQueryBuffer(&v28, 0LL, 0LL, &v26);
    v14 = v13;
    if ( v13 )
    {
      v15 = v26;
      *(_DWORD *)(v13 + 8) = 0;
      v16 = v28 - 2;
      v29 = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (*(_BYTE *)(a3 + 8) & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (*(_BYTE *)(a3 + 8) & 3) != 0 && v29 != Handle )
          {
            NtClose(v29);
            v29 = Handle;
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          {
            if ( v17 )
            {
              RtlInitUnicodeString(&v31, v17);
              v18 = 0;
              while ( 1 )
              {
                v19 = v18++;
                if ( v19 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1275);
                  goto LABEL_25;
                }
                v15 = NtQueryValueKey(v29, &v31, 1LL, v14, v16, &v27);
                if ( v15 == -2147483643 )
                  v15 = -1073741789;
                v26 = v15;
                if ( v15 >= 0 )
                {
                  if ( *(_DWORD *)(v14 + 4) == 7 )
                  {
                    *(_WORD *)(v27 + v14) = 0;
                    *(_DWORD *)(v14 + 12) += 2;
                  }
                  v27 = v16;
                  v20 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v14, (unsigned int)&v27, v6, a5, a6);
                  v26 = v20;
                  v15 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_25;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(v29, &v31);
LABEL_23:
                    if ( v15 >= 0 )
                    {
LABEL_24:
                      v6 = a4;
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  if ( v15 == -1073741772 )
                  {
                    *(_DWORD *)(v14 + 4) = 0;
                    *(_DWORD *)(v14 + 12) = 0;
                    v27 = v16;
                    v15 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v14, (unsigned int)&v27, v6, a5, a6);
                    v26 = v15;
                  }
                  if ( v15 != -1073741789 )
                    goto LABEL_23;
                }
                v28 = v27 + 10LL;
                v23 = RtlpAllocDeallocQueryBuffer(&v28, v14, v28, &v26);
                v15 = v26;
                v14 = v23;
                if ( !v23 )
                  goto LABEL_25;
                *(_DWORD *)(v23 + 8) = 0;
                v16 = v28 - 2;
              }
            }
            if ( (*(_BYTE *)(a3 + 8) & 8) != 0 )
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_23;
            }
            goto LABEL_44;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&DestinationString, v17);
            v34 = Handle;
            v33 = 48;
            p_DestinationString = &DestinationString;
            v36 = 576;
            v37 = 0LL;
            v15 = NtOpenKey(&v29, 0x2000000LL, &v33);
            if ( v15 < 0 )
              goto LABEL_25;
            if ( !*(_QWORD *)a3 )
              goto LABEL_23;
LABEL_44:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v15 = ZwEnumerateValueKey(v29, i, 1LL, v14, v16, &v27);
              if ( v15 == -2147483643 )
                v15 = -1073741789;
              v26 = v15;
              if ( v15 == -2147483622 )
              {
                if ( i || (*(_BYTE *)(a3 + 8) & 4) == 0 )
                {
                  v15 = 0;
                  goto LABEL_24;
                }
                v15 = -1073741772;
                goto LABEL_25;
              }
              if ( v15 >= 0 )
              {
                v27 = v16;
                v15 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v14, (unsigned int)&v27, a4, a5, a6);
                v26 = v15;
              }
              if ( v15 == -1073741789 )
              {
                v28 = v27 + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&v28, v14, v28, &v26);
                v14 = v24;
                if ( !v24 )
                  goto LABEL_71;
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v25 = v21;
                v16 = v28 - 2;
                ++v21;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1456);
LABEL_71:
                  v15 = v26;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( v15 < 0 )
                  goto LABEL_25;
                v21 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  v31.Buffer = (wchar_t *)(v14 + 20);
                  v31.Length = *(_WORD *)(v14 + 16);
                  v31.MaximumLength = *(_WORD *)(v14 + 16);
                  if ( (int)ZwDeleteValueKey(v29, &v31) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v15 = -1073741811;
      }
LABEL_25:
      if ( Handle && !v11 )
        NtClose(Handle);
      if ( v29 )
      {
        if ( v29 != Handle )
          NtClose(v29);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v14, v28, 0LL);
      return (unsigned int)v15;
    }
    else
    {
      if ( !v11 )
        NtClose(Handle);
      return v26;
    }
  }
  return result;
}
