/*
 * XREFs of SepTokenIsOwner @ 0x140060CE0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14000F500 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140060D70 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepTokenIsOwner(__int64 a1)
{
  __int64 result; // rax

  result = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), 0, 0);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 504), 1, 0);
  }
  return result;
}
