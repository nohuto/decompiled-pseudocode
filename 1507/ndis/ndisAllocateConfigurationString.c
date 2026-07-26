/*
 * XREFs of ndisAllocateConfigurationString @ 0x1C00AA418
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PUNICODE_STRING Destination)
{
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // edx
  unsigned __int16 MaximumLength; // cx
  int v12; // eax
  unsigned __int16 v13; // cx
  int v14; // edx
  unsigned __int16 v15; // ax
  wchar_t *Buffer; // rcx

  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_qqq(0x1Du, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, SourceString, Source, a3);
  v8 = 0;
  v9 = -1073741675;
  if ( (unsigned __int16)(ndisParameterStr.Length + SourceString->Length) < SourceString->Length )
  {
    Destination->MaximumLength = -1;
    v10 = -1073741675;
  }
  else
  {
    Destination->MaximumLength = ndisParameterStr.Length + SourceString->Length;
    v10 = 0;
  }
  if ( Source )
  {
    MaximumLength = Destination->MaximumLength;
    if ( (unsigned __int16)(a3->Length + MaximumLength) < MaximumLength )
    {
      Destination->MaximumLength = -1;
      v12 = -1073741675;
    }
    else
    {
      Destination->MaximumLength = a3->Length + MaximumLength;
      v12 = 0;
    }
    v13 = Destination->MaximumLength;
    v14 = v10 | v12;
    if ( (unsigned __int16)(Source->Length + v13) < v13 )
    {
      Destination->MaximumLength = -1;
    }
    else
    {
      Destination->MaximumLength = Source->Length + v13;
      v9 = 0;
    }
    v10 = v9 | v14;
  }
  Destination->MaximumLength += 2;
  v15 = Destination->MaximumLength;
  Destination->Buffer = 0LL;
  Destination->Length = 0;
  if ( !v10 )
    Destination->Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x2020444Eu);
  Buffer = Destination->Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, Destination->MaximumLength);
    RtlCopyUnicodeString(Destination, SourceString);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( Source )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, Source);
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x1Eu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, SourceString, Source, a3);
  return v8;
}
