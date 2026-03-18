/*
 * XREFs of DpiCopyUnicodeString @ 0x1C00D0D90
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C000DCA0 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00CF250 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v4; // edi
  unsigned __int16 MaximumLength; // ax
  wchar_t *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  v4 = 0;
  if ( DestinationString && SourceString && (MaximumLength = SourceString->MaximumLength) != 0 && SourceString->Buffer )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x74727044u);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      DestinationString->MaximumLength = SourceString->MaximumLength;
      RtlCopyUnicodeString(DestinationString, SourceString);
    }
    else
    {
      v4 = -1073741801;
      v12 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      v12[3] = DpiCopyUnicodeString;
      v12[4] = ExAllocatePoolWithTag;
      v12[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v12);
    }
  }
  else
  {
    v4 = -1073741811;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(DestinationString);
    v13[3] = DpiCopyUnicodeString;
    v13[4] = 0LL;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  return v4;
}
