/*
 * XREFs of VslSetupLiveDumpBufferInSk @ 0x1401C2FBC
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1401C0430 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401C314C (VslpAddLiveDumpBufferChunk.c)
 *     VslpSetupLiveDumpBuffer @ 0x1401C3430 (VslpSetupLiveDumpBuffer.c)
 */

__int64 __fastcall VslSetupLiveDumpBufferInSk(
        PVOID *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  NTSTATUS v9; // ebx
  _QWORD v11[14]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v11, 0, 0x68uLL);
  v11[1] = (unsigned __int64)a2 << 6;
  v9 = VslpEnterIumSecureMode(1, 36LL, 0LL, (__int64)v11);
  if ( v9 >= 0 )
  {
    if ( a2 )
    {
      do
      {
        v9 = VslpAddLiveDumpBufferChunk(*a1);
        if ( v9 < 0 )
          goto LABEL_6;
        ++a1;
      }
      while ( --a2 );
    }
    v9 = VslpSetupLiveDumpBuffer(a4, a5, a6);
    if ( v9 < 0 )
    {
LABEL_6:
      memset(v11, 0, 0x68uLL);
      VslpEnterIumSecureMode(1, 40LL, 0LL, (__int64)v11);
    }
  }
  return (unsigned int)v9;
}
