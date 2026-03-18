/*
 * XREFs of SepTokenIsOwner @ 0x1400CD420
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004EE30 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 */

bool __fastcall SepTokenIsOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // rbx
  bool result; // al

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v4 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v3 )
      v4 = (unsigned __int8 *)(a2 + v3);
    else
      v4 = 0LL;
  }
  result = SepSidInTokenSidHash(a1 + 232, 0LL, v4, 0, 0, 0);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return SepSidInTokenSidHash(a1 + 504, 0LL, v4, 0, 1, 0);
  }
  return result;
}
