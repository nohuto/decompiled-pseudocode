/*
 * XREFs of memcmp @ 0x1800992D0
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031AD0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     EtwpValidateLoggerInfo @ 0x180044B9C (EtwpValidateLoggerInfo.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180046140 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwpRegistrationCompare @ 0x1800546E8 (EtwpRegistrationCompare.c)
 *     RtlEqualSid @ 0x18005DDF0 (RtlEqualSid.c)
 *     RtlpIsDuplicateAce @ 0x180060860 (RtlpIsDuplicateAce.c)
 *     RtlpOwnerAcesPresent @ 0x180061EE0 (RtlpOwnerAcesPresent.c)
 *     RtlSidHashLookup @ 0x180077AD0 (RtlSidHashLookup.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x180078740 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlReplaceSidInSd @ 0x1800D7020 (RtlReplaceSidInSd.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800D99AC (RtlpIsAttributeAceInSacl.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800E7754 (RtlpIsNameInExpressionPrivate.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
