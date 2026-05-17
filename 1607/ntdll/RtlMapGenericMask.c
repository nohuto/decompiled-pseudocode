/*
 * XREFs of RtlMapGenericMask @ 0x1800405F0
 * Callers:
 *     RtlpApplyAclToObject @ 0x1800040B4 (RtlpApplyAclToObject.c)
 *     RtlpCopyAces @ 0x18003D360 (RtlpCopyAces.c)
 *     RtlpCopyEffectiveAce @ 0x180040058 (RtlpCopyEffectiveAce.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D4A80 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800DFF70 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMapGenericMask(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  if ( (int)result < 0 )
  {
    result = *a2 | (unsigned int)result;
    *a1 = result;
  }
  if ( (*a1 & 0x40000000) != 0 )
  {
    result = (unsigned int)a2[1];
    *a1 |= result;
  }
  if ( (*a1 & 0x20000000) != 0 )
  {
    result = (unsigned int)a2[2];
    *a1 |= result;
  }
  if ( (*a1 & 0x10000000) != 0 )
  {
    result = (unsigned int)a2[3];
    *a1 |= result;
  }
  *a1 &= 0xFFFFFFFu;
  return result;
}
