/*
 * XREFs of SepLocateTokenTrustLevel @ 0x140012F20
 * Callers:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1404B7ECC (SeAdjustAccessStateForTrustLabel.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404B7F6C (SeShouldCheckForAccessRightsFromParent.c)
 *     SepGetDefaultsSubjectContext @ 0x140691098 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400D3CA0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  if ( *a1 )
  {
    RtlSidDominatesForTrust(*(_QWORD *)(v2 + 1104), *(_QWORD *)(v1 + 1104), &v4);
    if ( v4 )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
