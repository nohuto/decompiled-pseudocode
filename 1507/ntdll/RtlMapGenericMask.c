/*
 * XREFs of RtlMapGenericMask @ 0x18004D830
 * Callers:
 *     RtlpApplyAclToObject @ 0x18004A6F4 (RtlpApplyAclToObject.c)
 *     RtlpCopyEffectiveAce @ 0x18004D298 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x18004DAD4 (RtlpCopyAces.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800C30F0 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
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
