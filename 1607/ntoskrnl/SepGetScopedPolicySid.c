/*
 * XREFs of SepGetScopedPolicySid @ 0x140219BF8
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14000F980 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x140012AA0 (RtlFindAceByType.c)
 */

unsigned __int8 *__fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned __int8 *result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(a1, 19, &v3);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++v3;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
