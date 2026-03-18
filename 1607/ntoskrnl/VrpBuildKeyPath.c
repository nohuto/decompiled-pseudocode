/*
 * XREFs of VrpBuildKeyPath @ 0x140617AE4
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140614648 (VrpCreateNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x140615588 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1406163E4 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x1406169B8 (VrpTranslatePath.c)
 * Callees:
 *     RtlUShortAdd @ 0x140008818 (RtlUShortAdd.c)
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v3; // rsi
  unsigned __int16 *p_MaximumLength; // r8
  USHORT Length; // cx
  USHORT *v8; // r8
  NTSTATUS v9; // ebx
  unsigned __int16 *v10; // r8
  wchar_t *PoolWithTag; // rax
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v3 = (PCUNICODE_STRING)&v13;
  Destination->Length = 0;
  v13 = 0;
  if ( SourceString )
    v3 = SourceString;
  v14 = 0LL;
  p_MaximumLength = &Destination->MaximumLength;
  Length = v3->Length;
  *p_MaximumLength = v3->Length;
  if ( RtlUShortAdd(Length, Source->Length, p_MaximumLength) < 0 )
    return (unsigned int)-1073741811;
  v9 = RtlUShortAdd(*v8, 2u, v8);
  if ( v9 < 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *v10, 0x67655256u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, v3);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && v3->Buffer[((unsigned __int64)v3->Length >> 1) - 1] != 92 )
          RtlAppendUnicodeToString(Destination, L"\\");
        RtlAppendUnicodeStringToString(Destination, Source);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
