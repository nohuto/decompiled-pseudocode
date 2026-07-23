/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x18003CFD0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(
        PUNICODE_STRING StringToFind,
        unsigned __int16 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        PUNICODE_STRING *NewName)
{
  NTSTATUS ActivationContextSectionString; // ebx
  __int64 hActCtx; // rdi
  unsigned __int16 v12; // r13
  const WCHAR *v13; // r14
  SIZE_T v14; // r15
  int v15; // eax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  ULONG NewFlags; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-1E8h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+68h] [rbp-1E0h] BYREF
  PUNICODE_STRING StaticString; // [rsp+78h] [rbp-1D0h]
  PCWCH v23; // [rsp+80h] [rbp-1C8h]
  PUNICODE_STRING *v24; // [rsp+88h] [rbp-1C0h]
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v26; // [rsp+100h] [rbp-148h] BYREF
  int v27; // [rsp+108h] [rbp-140h]
  _BYTE v28[56]; // [rsp+110h] [rbp-138h] BYREF
  char v29; // [rsp+150h] [rbp-F8h] BYREF

  StaticString = a3;
  v24 = NewName;
  v20 = 0LL;
  NewFlags = 0;
  ReturnedData.cbSize = 112;
  memset(&ReturnedData.ulDataFormatVersion, 0, 0x6CuLL);
  v26 = 72LL;
  v27 = 1;
  memset(v28, 0, sizeof(v28));
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     StringToFind,
                                     0LL,
                                     a3,
                                     a4,
                                     NewName,
                                     &NewFlags,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (NewFlags & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0LL, 2u, StringToFind, &ReturnedData);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( ReturnedData.ulDataFormatVersion == 1 )
          {
            if ( (ReturnedData.ulFlags & 1) != 0 )
            {
              hActCtx = 0LL;
              ReturnedData.hActCtx = 0LL;
            }
            else
            {
              hActCtx = (__int64)ReturnedData.hActCtx;
              if ( (ReturnedData.ulFlags & 2) != 0 )
                hActCtx = -4LL;
              ReturnedData.hActCtx = (HANDLE)hActCtx;
            }
            v12 = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
            v13 = (const WCHAR *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
            LocaleName.Buffer = (unsigned __int16 *)&v29;
            LocaleName.MaximumLength = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(a2, &LocaleName, 2u, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)LocaleName.Length >> 1;
              if ( RtlCompareUnicodeStrings(v13, (unsigned __int64)v12 >> 1, LocaleName.Buffer, v14, 1u) )
              {
                v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(hActCtx, a2, &v20);
                ActivationContextSectionString = v15;
                if ( v15 >= 0 )
                {
                  v16 = v20;
                  if ( v20 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v26, v20);
                    if ( a4->Buffer )
                      RtlFreeAnsiString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       StringToFind,
                                                       0LL,
                                                       StaticString,
                                                       a4,
                                                       v24,
                                                       &NewFlags,
                                                       0LL,
                                                       0LL);
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7u,
                                                         0LL,
                                                         2u,
                                                         StringToFind,
                                                         &ReturnedData);
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( ReturnedData.ulDataFormatVersion == 1 )
                        {
                          v17 = *((unsigned __int16 *)ReturnedData.AssemblyMetadata.lpInformation + 46);
                          WORD1(StaticString) = v17;
                          LOWORD(StaticString) = v17;
                          v23 = (PCWCH)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                      + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
                          if ( RtlCompareUnicodeStrings(v23, v17 >> 1, LocaleName.Buffer, v14, 1u) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v26);
                    v16 = v20;
                  }
                  if ( LdrpReleaseActCtxW )
                    ((void (__fastcall *)(__int64))LdrpReleaseActCtxW)(v16);
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
