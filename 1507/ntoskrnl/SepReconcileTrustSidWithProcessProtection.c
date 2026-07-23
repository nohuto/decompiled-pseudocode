/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x140044D50
 * Callers:
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x140042D28 (RtlIsValidProcessTrustLabelSid.c)
 */

void __fastcall SepReconcileTrustSidWithProcessProtection(PSID Sid, _BYTE *a2, _BYTE *a3, _QWORD *a4)
{
  PSID v4; // r10
  PSID v6; // r11
  _QWORD *v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  *a3 = 0;
  v4 = Sid;
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
    if ( v6 && !RtlIsValidProcessTrustLabelSid(v6) )
      goto LABEL_11;
  }
LABEL_2:
  if ( !v4 )
    return;
  if ( !RtlIsValidProcessTrustLabelSid(v4) )
  {
LABEL_11:
    *a3 = 1;
    *v7 = v8;
    return;
  }
  if ( !v8 )
  {
    if ( !*(_DWORD *)(v9 + 8) )
      return;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v8 + 8) < *(_DWORD *)(v9 + 8) || *(_DWORD *)(v8 + 12) < *(_DWORD *)(v9 + 12) )
    goto LABEL_11;
}
