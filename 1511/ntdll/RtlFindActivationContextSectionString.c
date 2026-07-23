/*
 * XREFs of RtlFindActivationContextSectionString @ 0x180015E40
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180015A2C (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x18000DE20 (RtlAddRefActivationContext.c)
 *     RtlpFindNextActivationContextSection @ 0x1800160B4 (RtlpFindNextActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001653C (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x1800168D0 (RtlpFindActivationContextSection_CheckParameters.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18007EF34 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionString(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PUNICODE_STRING StringToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v5; // r10
  _PEB *ProcessEnvironmentBlock; // rax
  NTSTATUS result; // eax
  unsigned int v12; // edi
  PACTIVATION_CONTEXT v13; // rbx
  _DWORD *v14; // rsi
  void (__fastcall *v15)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, _BYTE *); // r14
  _BYTE v16[4]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-Dh] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-9h] BYREF
  int v19; // [rsp+58h] [rbp-1h] BYREF
  _ACTIVATION_CONTEXT *v20; // [rsp+60h] [rbp+7h] BYREF
  int v21; // [rsp+68h] [rbp+Fh] BYREF
  PACTIVATION_CONTEXT ActivationContext; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+1Fh] BYREF
  ULONG v24; // [rsp+7Ch] [rbp+23h]
  PGUID v25; // [rsp+80h] [rbp+27h]
  ULONG v26; // [rsp+88h] [rbp+2Fh]
  int v27; // [rsp+8Ch] [rbp+33h]
  int v28; // [rsp+90h] [rbp+37h]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v21 = 0;
  v19 = -1;
  v17 = 0;
  result = RtlpFindActivationContextSection_CheckParameters(
             Flags,
             (_DWORD)ExtensionGuid,
             SectionId,
             (_DWORD)StringToFind,
             (__int64)ReturnedData);
  if ( result >= 0 )
  {
    v28 = 0;
    v26 = SectionId;
    v23 = 32;
    v24 = Flags;
    v25 = ExtensionGuid;
    v20 = 0LL;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      return -1073741811;
    }
    else
    {
      v27 = 0;
      result = RtlpFindNextActivationContextSection(&v23, &v18, &v17, &v20);
      v12 = v17;
      v13 = v20;
      if ( result >= 0 )
      {
        while ( 1 )
        {
          v14 = v18;
          if ( v12 < 0x2C || *v18 != 1682469715 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
              v18,
              v12);
            return -1072365565;
          }
          result = RtlpFindUnicodeStringInSection(v18, v12, StringToFind, ReturnedData, &v19, &v21);
          if ( result >= 0 )
            break;
          if ( result != -1072365560 )
            return result;
          ActivationContext = 0LL;
          if ( v23 < 0x20 || (v24 & 0xFFFFFFF8) != 0 )
          {
            result = -1073741811;
LABEL_23:
            if ( result == -1072365567 )
              return -1072365560;
            return result;
          }
          result = RtlpFindNextActivationContextSection(&v23, &v18, &v17, &ActivationContext);
          if ( result < 0 )
            goto LABEL_23;
          v13 = ActivationContext;
          RtlAddRefActivationContext(ActivationContext);
          v12 = v17;
        }
        if ( (((unsigned __int64)&v13[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
        {
          v15 = *(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, _BYTE *))v13->SentNotifications;
          if ( v15 )
          {
            if ( (v13->SentNotifications[4] & 8) == 0 || (v13->DisabledNotifications[4] & 8) == 0 )
            {
              v16[0] = 0;
              v15(3LL, v13, v13->NotificationContext, *(_QWORD *)&v13->SentNotifications[2], 0LL, v16);
              v13->SentNotifications[4] |= 8u;
              if ( v16[0] )
                v13->DisabledNotifications[4] |= 8u;
            }
          }
        }
        if ( !ReturnedData )
          return 0;
        result = RtlpFindActivationContextSection_FillOutReturnedData(
                   Flags,
                   ReturnedData,
                   v13,
                   &v23,
                   v14,
                   v14[9],
                   v14[10],
                   v12);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
