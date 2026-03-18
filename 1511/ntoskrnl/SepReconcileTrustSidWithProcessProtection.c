/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x14007A640
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400E6284 (SepReferenceTokenUsingPseudoHandle.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1404A629C (SeCreateClientSecurityEx.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14042536C (RtlIsValidProcessTrustLabelSid.c)
 */

void __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, _BYTE *a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v4; // r10
  PSID v6; // r11
  __int64 v7; // r11
  __int64 v8; // r10

  *a3 = 0;
  v4 = a1;
  *a4 = 0LL;
  if ( (unsigned __int8)*a2 >= 0x51u )
  {
    switch ( *a2 )
    {
      case 'Q':
        v6 = SeProcTrustLiteWinSid;
        break;
      case 'R':
        v6 = SeProcTrustWinSid;
        break;
      case 'a':
        v6 = SeProcTrustLiteWinTcbSid;
        break;
      case 'b':
        v6 = SeProcTrustWinTcbSid;
        break;
      default:
        goto LABEL_2;
    }
    if ( v6 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v6, a2, a3, a4) )
      goto LABEL_21;
  }
LABEL_2:
  if ( !v4 )
    return;
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v4, a2, a3, a4) )
    goto LABEL_21;
  if ( !v7 )
  {
    if ( !*(_DWORD *)(v8 + 8) )
      return;
LABEL_21:
    *a3 = 1;
    *a4 = v7;
    return;
  }
  if ( *(_DWORD *)(v7 + 8) < *(_DWORD *)(v8 + 8) || *(_DWORD *)(v7 + 12) < *(_DWORD *)(v8 + 12) )
    goto LABEL_21;
}
