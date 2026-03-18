/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x14000E7F0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A4B88 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCreateClientSecurity @ 0x14040F068 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14040F250 (SeCreateClientSecurityEx.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x14000EA20 (SepSidFromProcessProtection.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1400D3D9C (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  *a3 = 0;
  *a4 = 0LL;
  result = SepSidFromProcessProtection(a2);
  if ( result )
  {
    result = RtlIsValidProcessTrustLabelSid(result);
    if ( !(_BYTE)result )
      goto LABEL_12;
  }
  if ( v6 )
  {
    result = RtlIsValidProcessTrustLabelSid(v6);
    if ( (_BYTE)result )
    {
      if ( v8 )
      {
        result = *(unsigned int *)(v9 + 8);
        if ( *(_DWORD *)(v8 + 8) >= (unsigned int)result )
        {
          result = *(unsigned int *)(v9 + 12);
          if ( *(_DWORD *)(v8 + 12) >= (unsigned int)result )
            return result;
        }
      }
      else if ( !*(_DWORD *)(v9 + 8) )
      {
        return result;
      }
    }
LABEL_12:
    *a3 = 1;
    *v7 = v8;
  }
  return result;
}
