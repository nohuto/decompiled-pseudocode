/*
 * XREFs of SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14021B784
 * Callers:
 *     PspIumVerifyParentSd @ 0x14064385C (PspIumVerifyParentSd.c)
 * Callees:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 */

__int64 __fastcall SeConvertStringSecurityDescriptorToSecurityDescriptor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 || !a3 )
  {
    result = 87LL;
LABEL_7:
    if ( (int)result <= 0 )
      return result;
    return (unsigned __int16)result | 0xC0070000;
  }
  if ( a2 == 1 )
  {
    result = LocalConvertStringSDToSD_Rev1(a1, 1, a3, a1, a3, a4);
    goto LABEL_7;
  }
  LOWORD(result) = 1305;
  return (unsigned __int16)result | 0xC0070000;
}
