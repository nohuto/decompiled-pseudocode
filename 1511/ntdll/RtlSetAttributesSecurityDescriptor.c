/*
 * XREFs of RtlSetAttributesSecurityDescriptor @ 0x1800D7340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetAttributesSecurityDescriptor(_BYTE *a1, __int16 a2, _DWORD *a3)
{
  *a3 = (unsigned __int8)*a1;
  if ( *a1 == 1 )
    return RtlSetControlSecurityDescriptor((__int64)a1, a2 & 0x3FC0, a2 & 0x3FC0);
  else
    return 3221225560LL;
}
