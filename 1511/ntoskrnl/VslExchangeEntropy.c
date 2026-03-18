/*
 * XREFs of VslExchangeEntropy @ 0x140141C38
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall VslExchangeEntropy(void *a1)
{
  NTSTATUS v2; // ebx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 104);
  v4[1] = 0LL;
  memmove(&v4[2], a1, 0x40uLL);
  v2 = HvlpEnterIumSecureMode(1u, 28, 0, (unsigned __int8 *)v4);
  if ( v2 >= 0 )
    memmove(a1, &v4[2], 0x40uLL);
  return (unsigned int)v2;
}
