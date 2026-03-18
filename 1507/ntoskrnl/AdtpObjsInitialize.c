/*
 * XREFs of AdtpObjsInitialize @ 0x140592B28
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140592AF0 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtEnumerateValueKey @ 0x1404273A0 (NtEnumerateValueKey.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 *     RtlIntegerToUnicodeString @ 0x1404FE908 (RtlIntegerToUnicodeString.c)
 */

int AdtpObjsInitialize()
{
  HANDLE v0; // rsi
  char *v1; // r12
  char v2; // r13
  __int64 v3; // rbx
  unsigned int v4; // edi
  char *v5; // r14
  int result; // eax
  unsigned int v7; // edi
  char *v8; // r14
  int v9; // eax
  int v10; // edi
  ULONG v11; // r14d
  bool i; // sf
  HANDLE v13; // r15
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v15; // rbx
  char *v16; // rax
  UNICODE_STRING *v17; // rdi
  unsigned __int16 v18; // cx
  SIZE_T v19; // rdx
  PVOID v20; // rax
  HANDLE v21; // rbx
  ULONG v22; // r15d
  unsigned __int16 *v23; // rbx
  _WORD *v24; // rax
  _WORD *v25; // r14
  unsigned __int16 v26; // cx
  SIZE_T v27; // rdx
  PVOID v28; // rax
  HANDLE Handle; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  int v32; // [rsp+58h] [rbp-21h] BYREF
  HANDLE v33; // [rsp+60h] [rbp-19h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-11h]
  int v35; // [rsp+70h] [rbp-9h]
  __int128 v36; // [rsp+78h] [rbp-1h]
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF
  ULONG v38; // [rsp+E8h] [rbp+6Fh]
  HANDLE v39; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v0 = 0LL;
  v39 = 0LL;
  v1 = 0LL;
  AdtpSourceModules = 0LL;
  v2 = 1;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = (char *)&unk_140324082;
  while ( 1 )
  {
    *(_DWORD *)(v5 - 2) = 1572864;
    *(_QWORD *)(v5 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v3;
    result = RtlIntegerToUnicodeString(v4 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v4);
    if ( result < 0 )
      break;
    v3 = (unsigned int)(v3 + 12);
    ++v4;
    v5 += 16;
    if ( v4 > 6 )
    {
      v7 = 0;
      v8 = (char *)&unk_140324182;
      while ( 1 )
      {
        *(_QWORD *)(v8 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
        *(_DWORD *)(v8 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v7 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v7);
        if ( result < 0 )
          break;
        v3 = (unsigned int)(v3 + 12);
        ++v7;
        v8 += 16;
        if ( v7 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          v32 = 48;
          p_DestinationString = &DestinationString;
          v33 = 0LL;
          v35 = 576;
          v36 = 0LL;
          v9 = CmOpenKey(&KeyHandle, 131097, (__int64)&v32, 0, 0LL);
          v10 = v9;
          if ( v9 == -1073741772 )
            return 0;
          v11 = 0;
          for ( i = v9 < 0; ; i = v10 < 0 )
          {
            v38 = v11;
            if ( i )
              break;
            v13 = KeyHandle;
            v10 = NtEnumerateKey(KeyHandle, v11, KeyBasicInformation, 0LL, 0, &ResultLength);
            if ( v10 == -1073741789 )
            {
              PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
              v15 = PoolWithTag;
              if ( !PoolWithTag )
                return -1073741801;
              v10 = NtEnumerateKey(v13, v11, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
              if ( v10 >= 0 )
              {
                v2 = 1;
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
                v33 = v13;
                v32 = 48;
                v35 = 576;
                v36 = 0LL;
                result = CmOpenKey(&Handle, 131097, (__int64)&v32, 0, 0LL);
                if ( result < 0 )
                  return result;
                RtlInitUnicodeString(&SourceString, L"ObjectNames");
                v32 = 48;
                v21 = Handle;
                v33 = Handle;
                p_DestinationString = &SourceString;
                v35 = 576;
                v36 = 0LL;
                v10 = CmOpenKey(&v39, 131097, (__int64)&v32, 0, 0LL);
                NtClose(v21);
                if ( v10 == -1073741772 )
                {
                  v2 = 0;
                  v10 = 0;
                }
                v0 = v39;
              }
            }
            v22 = 0;
            if ( v10 >= 0 )
            {
              do
              {
                if ( v2 != 1 )
                  break;
                v10 = NtEnumerateValueKey(v0, v22, KeyValueFullInformation, 0LL, 0, &ResultLength);
                if ( v10 == -1073741789 )
                {
                  v23 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
                  if ( !v23 )
                    return -1073741801;
                  v10 = NtEnumerateValueKey(v0, v22, KeyValueFullInformation, v23, ResultLength, &ResultLength);
                  if ( v10 >= 0 )
                  {
                    v24 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                    v25 = v24;
                    if ( !v24 )
                      return -1073741801;
                    *(_QWORD *)v24 = *((_QWORD *)v1 + 3);
                    *((_QWORD *)v1 + 3) = v24;
                    v26 = v23[8];
                    v24[4] = v26;
                    v27 = (unsigned __int16)(v26 + 2);
                    v24[5] = v27;
                    v28 = ExAllocatePoolWithTag(PagedPool, v27, 0x6B416553u);
                    *((_QWORD *)v25 + 2) = v28;
                    if ( !v28 )
                      return -1073741801;
                    SourceString.Length = v23[8];
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = v23 + 10;
                    RtlCopyUnicodeString((PUNICODE_STRING)(v25 + 4), &SourceString);
                    if ( *((_DWORD *)v23 + 3) < 4u )
                      *((_DWORD *)v25 + 6) = 1552;
                    else
                      *((_DWORD *)v25 + 6) = *(_DWORD *)((char *)v23 + *((unsigned int *)v23 + 2));
                  }
                  ExFreePoolWithTag(v23, 0);
                }
                if ( v10 == -2147483622 )
                {
                  v10 = 0;
                  v2 = 0;
                }
                ++v22;
              }
              while ( v10 >= 0 );
              v11 = v38;
            }
            if ( !v10 && !v2 )
            {
              if ( v0 )
              {
                NtClose(v0);
                v0 = 0LL;
                v39 = 0LL;
              }
            }
            ++v11;
          }
          NtClose(KeyHandle);
          if ( v10 == -2147483622 )
            return 0;
          return v10;
        }
      }
      return result;
    }
  }
  return result;
}
