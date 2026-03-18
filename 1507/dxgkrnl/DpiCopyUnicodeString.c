/*
 * XREFs of DpiCopyUnicodeString @ 0x1C00C7470
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C000D3D0 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00D6D90 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v4; // edi
  unsigned __int16 MaximumLength; // ax
  wchar_t *PoolWithTag; // rax
  __int64 v7; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax

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
      v9 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7);
      v9[3] = DpiCopyUnicodeString;
      v9[4] = ExAllocatePoolWithTag;
      v9[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v9);
    }
  }
  else
  {
    v4 = -1073741811;
    v10 = (_QWORD *)WdLogNewEntry5_WdError(DestinationString);
    v10[3] = DpiCopyUnicodeString;
    v10[4] = 0LL;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  return v4;
}
