/*
 * XREFs of AdtpObjsInitialize @ 0x140570130
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1405700F8 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1403F4CE4 (RtlIntegerToUnicodeString.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

int AdtpObjsInitialize()
{
  HANDLE v0; // r14
  char *v1; // r13
  __int64 v2; // rdi
  unsigned int v3; // esi
  char *v4; // r15
  int result; // eax
  unsigned int v6; // esi
  char *v7; // r15
  int v8; // eax
  int v9; // esi
  ULONG v10; // r15d
  bool i; // sf
  bool v12; // zf
  HANDLE v13; // r12
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v15; // rdi
  char *v16; // rax
  UNICODE_STRING *v17; // rsi
  unsigned __int16 v18; // cx
  SIZE_T v19; // rdx
  PVOID v20; // rax
  HANDLE v21; // rdi
  char v22; // al
  ULONG v23; // r12d
  unsigned __int16 *v24; // rdi
  _WORD *v25; // rax
  _WORD *v26; // r15
  unsigned __int16 v27; // cx
  SIZE_T v28; // rdx
  PVOID v29; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  HANDLE v31; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  int v34; // [rsp+60h] [rbp-19h] BYREF
  HANDLE v35; // [rsp+68h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-9h]
  int v37; // [rsp+78h] [rbp-1h]
  __int128 v38; // [rsp+80h] [rbp+7h]
  char v39; // [rsp+E0h] [rbp+67h]
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG v41; // [rsp+F0h] [rbp+77h]
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  v39 = 1;
  Handle = 0LL;
  v0 = 0LL;
  AdtpSourceModules = 0LL;
  v1 = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v2) = 0;
  v3 = 0;
  v4 = (char *)&unk_1402FA182;
  while ( 1 )
  {
    *(_DWORD *)(v4 - 2) = 1572864;
    *(_QWORD *)(v4 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v2;
    result = RtlIntegerToUnicodeString(v3 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v3);
    if ( result < 0 )
      return result;
    v2 = (unsigned int)(v2 + 12);
    ++v3;
    v4 += 16;
    if ( v3 > 6 )
    {
      v6 = 0;
      v7 = (char *)&unk_1402FA202;
      while ( 1 )
      {
        *(_QWORD *)(v7 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v2;
        *(_DWORD *)(v7 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v6 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v6);
        if ( result < 0 )
          return result;
        v2 = (unsigned int)(v2 + 12);
        ++v6;
        v7 += 16;
        if ( v6 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          v34 = 48;
          p_DestinationString = &DestinationString;
          v35 = 0LL;
          v37 = 576;
          v38 = 0LL;
          v8 = CmOpenKey(&KeyHandle, 131097, (__int64)&v34, 0, 0LL);
          v9 = v8;
          if ( v8 == -1073741772 )
            return 0;
          v10 = 0;
          for ( i = v8 < 0; ; i = v9 < 0 )
          {
            v41 = v10;
            if ( i )
              break;
            v13 = KeyHandle;
            v9 = NtEnumerateKey(KeyHandle, v10, KeyBasicInformation, 0LL, 0, &ResultLength);
            if ( v9 != -1073741789 )
              goto LABEL_39;
            PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
            v15 = PoolWithTag;
            if ( !PoolWithTag )
              return -1073741801;
            v9 = NtEnumerateKey(v13, v10, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
            if ( v9 >= 0 )
            {
              v16 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
              v1 = v16;
              if ( !v16 )
                return -1073741801;
              v17 = (UNICODE_STRING *)(v16 + 8);
              *(_QWORD *)v16 = AdtpSourceModules;
              AdtpSourceModules = (__int64)v16;
              *((_QWORD *)v16 + 3) = 0LL;
              v18 = v15[6];
              *((_WORD *)v16 + 4) = v18;
              v19 = (unsigned __int16)(v18 + 2);
              *((_WORD *)v16 + 5) = v19;
              v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x6B416553u);
              *((_QWORD *)v1 + 2) = v20;
              if ( !v20 )
                return -1073741801;
              SourceString.Length = v15[6];
              SourceString.MaximumLength = SourceString.Length;
              SourceString.Buffer = v15 + 8;
              RtlCopyUnicodeString(v17, &SourceString);
              ExFreePoolWithTag(v15, 0);
              p_DestinationString = v17;
              v34 = 48;
              v35 = v13;
              v37 = 576;
              v38 = 0LL;
              result = CmOpenKey(&v31, 131097, (__int64)&v34, 0, 0LL);
              if ( result < 0 )
                return result;
              RtlInitUnicodeString(&SourceString, L"ObjectNames");
              v34 = 48;
              v21 = v31;
              v35 = v31;
              p_DestinationString = &SourceString;
              v37 = 576;
              v38 = 0LL;
              v9 = CmOpenKey(&Handle, 131097, (__int64)&v34, 0, 0LL);
              NtClose(v21);
              v0 = Handle;
              v22 = 1;
              v39 = 1;
              if ( v9 == -1073741772 )
              {
                v22 = 0;
                v39 = 0;
                v9 = 0;
              }
            }
            else
            {
LABEL_39:
              v22 = v39;
            }
            v23 = 0;
            v12 = v9 == 0;
            if ( v9 >= 0 )
            {
              do
              {
                if ( v22 != 1 )
                  break;
                v9 = NtEnumerateValueKey(v0, v23, KeyValueFullInformation, 0LL, 0, &ResultLength);
                if ( v9 == -1073741789 )
                {
                  v24 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
                  if ( !v24 )
                    return -1073741801;
                  v9 = NtEnumerateValueKey(v0, v23, KeyValueFullInformation, v24, ResultLength, &ResultLength);
                  if ( v9 >= 0 )
                  {
                    v25 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                    v26 = v25;
                    if ( !v25 )
                      return -1073741801;
                    *(_QWORD *)v25 = *((_QWORD *)v1 + 3);
                    *((_QWORD *)v1 + 3) = v25;
                    v27 = v24[8];
                    v25[4] = v27;
                    v28 = (unsigned __int16)(v27 + 2);
                    v25[5] = v28;
                    v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x6B416553u);
                    *((_QWORD *)v26 + 2) = v29;
                    if ( !v29 )
                      return -1073741801;
                    SourceString.Length = v24[8];
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = v24 + 10;
                    RtlCopyUnicodeString((PUNICODE_STRING)(v26 + 4), &SourceString);
                    if ( *((_DWORD *)v24 + 3) < 4u )
                      *((_DWORD *)v26 + 6) = 1552;
                    else
                      *((_DWORD *)v26 + 6) = *(_DWORD *)((char *)v24 + *((unsigned int *)v24 + 2));
                  }
                  ExFreePoolWithTag(v24, 0);
                }
                if ( v9 == -2147483622 )
                {
                  v9 = 0;
                  v39 = 0;
                  v22 = 0;
                }
                else
                {
                  v22 = v39;
                }
                ++v23;
              }
              while ( v9 >= 0 );
              v10 = v41;
              v12 = v9 == 0;
            }
            if ( v12 && !v22 )
            {
              if ( v0 )
              {
                NtClose(v0);
                v0 = 0LL;
                Handle = 0LL;
              }
            }
            ++v10;
          }
          NtClose(KeyHandle);
          if ( v9 == -2147483622 )
            return 0;
          return v9;
        }
      }
    }
  }
}
