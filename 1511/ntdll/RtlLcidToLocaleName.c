/*
 * XREFs of RtlLcidToLocaleName @ 0x18001CA60
 * Callers:
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18003E424 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001CBC4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetLcidIndex @ 0x18001CC3C (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x18003ED7C (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800E6028 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800EABF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v4; // esi
  char v6; // r15
  LCID v8; // edi
  __int64 v9; // rbx
  int LcidIndex; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int16 *v14; // r10
  _WORD *v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  unsigned __int16 *Buffer; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v21[176]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 85;
  *(_QWORD *)&DestinationString.Length = 85LL;
  v6 = Flags;
  v8 = lcid;
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
      if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v21, &DestinationString) >= 0 )
      {
        v17 = *(unsigned int *)&DestinationString.Length;
        Buffer = (unsigned __int16 *)v21;
        goto LABEL_21;
      }
      return -1073741823;
    }
    if ( ((lcid - 1024) & 0xFFFFF7FF) == 0 )
    {
      DestinationString.Buffer = (unsigned __int16 *)v21;
      DestinationString.MaximumLength = 170;
      if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
      {
        Buffer = DestinationString.Buffer;
        v17 = DestinationString.Length >> 1;
        goto LABEL_21;
      }
      return -1073741823;
    }
    v9 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !(unsigned __int8)RtlpLoadNlsData() )
        return -1073741823;
      v9 = pTblPtrs;
    }
    if ( v8 == 2048 )
      v8 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v8);
    v12 = LcidIndex;
    if ( LcidIndex < 0
      || (v6 & 2) == 0
      && (*(_BYTE *)(*(unsigned __int16 *)(v9 + 56)
                   * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v9 + 24) + 8LL * LcidIndex + 4)
                   + *(_QWORD *)(v9 + 16)
                   + 24) & 1) == 0 )
    {
      return -1073741585;
    }
    v13 = *(_QWORD *)(v9 + 40);
    v14 = (unsigned __int16 *)(v13 + 2 * (*(unsigned __int16 *)(*(_QWORD *)(v9 + 24) + 8 * v12 + 6) + 1LL));
    if ( v14 )
    {
      v15 = (_WORD *)(v13 + 2 * (*(unsigned __int16 *)(*(_QWORD *)(v9 + 24) + 8 * v12 + 6) + 1LL));
      v11 = 84LL;
      v16 = 0;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v11;
      }
      while ( v11 );
      if ( v11 )
      {
        v4 = 84 - v11;
        goto LABEL_19;
      }
      v4 = 0;
    }
    v16 = -1073741811;
LABEL_19:
    if ( v16 >= 0 )
    {
      v17 = v4;
      Buffer = v14;
LABEL_21:
      LOBYTE(v11) = AllocateDestinationString;
      return RtlpInitUnicodeStringUsingBuffer(v11, Buffer, v17, LocaleName);
    }
    return -1073741823;
  }
  return -1073741585;
}
