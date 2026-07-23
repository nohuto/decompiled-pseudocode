/*
 * XREFs of SepLocateTokenTrustLevel @ 0x140045658
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1404CA0F0 (SeAdjustAccessStateForTrustLabel.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404CA1A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SepGetDefaultsSubjectContext @ 0x1406D44D4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  BOOLEAN DominatesTrust; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  if ( *a1 )
  {
    RtlSidDominatesForTrust(*(PSID *)(v2 + 1104), *(PSID *)(v1 + 1104), &DominatesTrust);
    if ( DominatesTrust )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
