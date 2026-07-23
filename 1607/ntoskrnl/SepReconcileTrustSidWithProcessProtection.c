/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x14000E370
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14040E110 (SeCreateClientSecurityEx.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x14000E5A0 (SepSidFromProcessProtection.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1400D1C3C (RtlIsValidProcessTrustLabelSid.c)
 */

char __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  void *v5; // rax
  void *v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  *a3 = 0;
  *a4 = 0LL;
  v5 = (void *)SepSidFromProcessProtection(a2);
  if ( v5 )
  {
    LOBYTE(v5) = RtlIsValidProcessTrustLabelSid(v5);
    if ( !(_BYTE)v5 )
      goto LABEL_12;
  }
  if ( !v6 )
    return (char)v5;
  LOBYTE(v5) = RtlIsValidProcessTrustLabelSid(v6);
  if ( !(_BYTE)v5 )
    goto LABEL_12;
  if ( !v8 )
  {
    if ( !*(_DWORD *)(v9 + 8) )
      return (char)v5;
    goto LABEL_12;
  }
  LODWORD(v5) = *(_DWORD *)(v9 + 8);
  if ( *(_DWORD *)(v8 + 8) < (unsigned int)v5
    || (LODWORD(v5) = *(_DWORD *)(v9 + 12), *(_DWORD *)(v8 + 12) < (unsigned int)v5) )
  {
LABEL_12:
    *a3 = 1;
    *v7 = v8;
  }
  return (char)v5;
}
