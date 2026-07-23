/*
 * XREFs of SecureDump_Encrypt_DmpData @ 0x1401CB6A8
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140627614 (IopLiveDumpWriteBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     BCryptEncrypt @ 0x140219388 (BCryptEncrypt.c)
 */

__int64 __fastcall SecureDump_Encrypt_DmpData(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  NTSTATUS v9; // r10d
  ULONG cbOutput; // ecx
  ULONG pcbResult; // [rsp+50h] [rbp-38h] BYREF
  UCHAR pbIV; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+59h] [rbp-2Fh]
  __int16 v15; // [rsp+5Dh] [rbp-2Bh]
  char v16; // [rsp+5Fh] [rbp-29h]

  v5 = 0LL;
  v9 = -1073741823;
  if ( byte_1403234D0 )
  {
    if ( !a1 || !a3 && a4 || (cbOutput = ::cbOutput, a2 % ::cbOutput) || a2 < ::cbOutput )
    {
      v9 = -1073741811;
    }
    else if ( a4 >= a2 )
    {
      pbIV = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      if ( a2 )
      {
        do
        {
          v9 = BCryptEncrypt(
                 hObject,
                 (PUCHAR)(a1 + v5),
                 cbOutput,
                 0LL,
                 &pbIV,
                 8u,
                 (PUCHAR)(a3 + v5),
                 cbOutput,
                 &pcbResult,
                 0);
          if ( v9 < 0 )
            break;
          v5 += pcbResult;
          cbOutput = ::cbOutput;
          if ( pcbResult != ::cbOutput )
          {
            v9 = -1073741823;
            break;
          }
        }
        while ( v5 < a2 );
      }
    }
    else
    {
      v5 = a2;
      v9 = -2147483643;
    }
  }
  else
  {
    v9 = -1073741808;
  }
  if ( a5 )
    *a5 = v5;
  return (unsigned int)v9;
}
