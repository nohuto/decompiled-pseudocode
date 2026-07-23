/*
 * XREFs of RtlLcidToLocaleName @ 0x18001F420
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     LdrpGetParentLangId @ 0x180047C8C (LdrpGetParentLangId.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180049EE8 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpQuerySxSMUIFile @ 0x18006E354 (LdrpQuerySxSMUIFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001F554 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlStringCchLengthW @ 0x18001F5CC (RtlStringCchLengthW.c)
 *     RtlpNlsGetLcidIndex @ 0x18001F630 (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x180048DB4 (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800E08D4 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800E6110 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // r15
  LCID v7; // edi
  __int64 v8; // rbx
  int LcidIndex; // eax
  __int64 v10; // rcx
  __int64 v11; // r11
  unsigned __int16 *Buffer; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-A9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v17[176]; // [rsp+40h] [rbp-89h] BYREF

  v15 = 85LL;
  v5 = Flags;
  v7 = lcid;
  if ( (lcid & 0xFFFFEFFF) == 0 )
    return -1073741585;
  if ( !LocaleName )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFD) == 0 )
  {
    if ( AllocateDestinationString || LocaleName->Buffer )
    {
      if ( lcid == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v17, &v15) >= 0 )
        {
          Buffer = (unsigned __int16 *)v17;
          goto LABEL_15;
        }
        return -1073741823;
      }
      if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
      {
        v8 = pTblPtrs;
        if ( pTblPtrs )
          goto LABEL_9;
        if ( (unsigned __int8)RtlpLoadNlsData() )
        {
          v8 = pTblPtrs;
LABEL_9:
          if ( v7 == 2048 )
            v7 = gSystemLocale;
          LcidIndex = RtlpNlsGetLcidIndex(v7);
          if ( LcidIndex >= 0 )
          {
            if ( (v5 & 2) != 0
              || (_mm_lfence(),
                  v8 = pTblPtrs,
                  (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                            * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 4)
                            + *(_QWORD *)(pTblPtrs + 16)
                            + 24) & 1) != 0) )
            {
              if ( (int)RtlStringCchLengthW(
                          *(_QWORD *)(v8 + 40)
                        + 2LL * *(unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 8LL * LcidIndex + 6)
                        + 2,
                          84LL,
                          &v15) >= 0 )
              {
                Buffer = (unsigned __int16 *)(v11 + 2);
LABEL_15:
                v13 = (unsigned int)v15;
LABEL_16:
                LOBYTE(v10) = AllocateDestinationString;
                return RtlpInitUnicodeStringUsingBuffer(v10, Buffer, v13, LocaleName);
              }
              return -1073741823;
            }
          }
          return -1073741585;
        }
      }
      else
      {
        DestinationString.Buffer = (unsigned __int16 *)v17;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
        {
          Buffer = DestinationString.Buffer;
          v13 = DestinationString.Length >> 1;
          goto LABEL_16;
        }
      }
      return -1073741823;
    }
    return -1073741584;
  }
  return -1073741583;
}
