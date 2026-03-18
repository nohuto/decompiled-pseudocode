/*
 * XREFs of PpLastGoodDoBootProcessing @ 0x1407E431C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PiLastGoodCopyKeyContents @ 0x1407E43B4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1407E4464 (IopFileUtilRename.c)
 *     CmIsLastKnownGoodBoot @ 0x1407E452C (CmIsLastKnownGoodBoot.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 */

__int64 PpLastGoodDoBootProcessing()
{
  __int64 result; // rax
  UNICODE_STRING v1; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v3; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v4; // [rsp+50h] [rbp-10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\LastGood");
  RtlInitUnicodeString(&v1, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
  RtlInitUnicodeString(&v4, L"\\SystemRoot\\LastGood.Tmp");
  RtlInitUnicodeString(&v3, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
  result = CmIsLastKnownGoodBoot();
  if ( (_BYTE)result )
  {
    PiLastGoodRevertLastKnownDirectory(&DestinationString, &v1);
    return PiLastGoodRevertLastKnownDirectory(&v4, &v3);
  }
  else if ( !InitSafeBootMode )
  {
    result = IopFileUtilRename(&DestinationString, &v4, 0LL);
    if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741772 )
      return PiLastGoodCopyKeyContents(&v1, &v3);
  }
  return result;
}
