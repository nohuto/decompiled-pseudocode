/*
 * XREFs of RtlLcidToLocaleName @ 0x180042E70
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180071C78 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1EC (LdrpQuerySxSMUIFile.c)
 *     LdrpGetParentLangId @ 0x1800885C8 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180042FD4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetLcidIndex @ 0x18004304C (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x18008069C (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800EF2E8 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // r14
  LCID v7; // ebx
  int LcidIndex; // eax
  __int64 v9; // r10
  _WORD *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r8
  wchar_t *Buffer; // rdx
  __int64 v17; // [rsp+20h] [rbp-A9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v19[176]; // [rsp+40h] [rbp-89h] BYREF

  v17 = 85LL;
  v5 = Flags;
  v7 = lcid;
  if ( (lcid & 0xFFFFEFFF) != 0 )
  {
    if ( !LocaleName )
      return -1073741584;
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( !AllocateDestinationString && !LocaleName->Buffer )
      return -1073741584;
    if ( lcid == 5120 )
    {
      if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v19, &v17) >= 0 )
      {
        v14 = (unsigned int)v17;
        Buffer = (wchar_t *)v19;
        goto LABEL_21;
      }
      return -1073741823;
    }
    if ( ((lcid - 1024) & 0xFFFFF7FF) == 0 )
    {
      DestinationString.Buffer = (wchar_t *)v19;
      DestinationString.MaximumLength = 170;
      if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
      {
        Buffer = DestinationString.Buffer;
        v14 = DestinationString.Length >> 1;
        goto LABEL_21;
      }
      return -1073741823;
    }
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    if ( v7 == 2048 )
      v7 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v7);
    if ( LcidIndex < 0 )
      return -1073741585;
    if ( (v5 & 2) == 0 )
    {
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                     * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 4)
                     + *(_QWORD *)(pTblPtrs + 16)
                     + 24LL) & 1) == 0 )
        return -1073741585;
    }
    _mm_lfence();
    v9 = *(_QWORD *)(pTblPtrs + 40)
       + 2LL
       + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 6);
    if ( v9 )
    {
      v10 = (_WORD *)(*(_QWORD *)(pTblPtrs + 40)
                    + 2LL
                    + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 6));
      v11 = 84LL;
      v12 = 0LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      if ( v11 )
      {
        v13 = 84 - v11;
        goto LABEL_19;
      }
      v13 = 0;
    }
    else
    {
      v13 = v17;
    }
    v12 = 3221225485LL;
LABEL_19:
    if ( (int)v12 >= 0 )
    {
      v14 = v13;
      Buffer = (wchar_t *)v9;
LABEL_21:
      LOBYTE(v12) = AllocateDestinationString;
      return RtlpInitUnicodeStringUsingBuffer(v12, Buffer, v14, LocaleName);
    }
    return -1073741823;
  }
  return -1073741585;
}
