/*
 * XREFs of ObpAdjustAccessMask @ 0x14049A0D4
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x1404BCD44 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1404D0A1C (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObpAdjustAccessMask(__int64 a1)
{
  _BYTE *v1; // rbx

  v1 = *(_BYTE **)(a1 + 64);
  if ( !v1 )
    return 0LL;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a1 + 64)) )
  {
    if ( (v1[2] & 0x10) != 0 && (*(_DWORD *)(a1 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a1 + 16) |= SeObjectCreateSaclAccessBits(v1);
    return 0LL;
  }
  return 3221225593LL;
}
