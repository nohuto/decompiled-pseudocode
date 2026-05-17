/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x1800719F0
 * Callers:
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAbsoluteToSelfRelativeSD(__int64 a1)
{
  if ( *(__int16 *)(a1 + 2) >= 0 )
    return RtlMakeSelfRelativeSD();
  else
    return 3221225703LL;
}
