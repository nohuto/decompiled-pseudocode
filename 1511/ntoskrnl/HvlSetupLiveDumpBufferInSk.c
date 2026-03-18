/*
 * XREFs of HvlSetupLiveDumpBufferInSk @ 0x1401B349C
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1401B47DC (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpAddLiveDumpBufferChunk @ 0x1401B3598 (HvlpAddLiveDumpBufferChunk.c)
 *     HvlpSetupLiveDumpBuffer @ 0x1401B3B68 (HvlpSetupLiveDumpBuffer.c)
 */

__int64 __fastcall HvlSetupLiveDumpBufferInSk(
        PVOID *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  NTSTATUS v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v12[12]; // [rsp+28h] [rbp-A0h] BYREF

  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[0] = (unsigned __int64)a2 << 6;
  v9 = HvlpEnterIumSecureMode(1u, 34, 0, (unsigned __int8 *)&v11);
  if ( v9 >= 0 )
  {
    if ( a2 )
    {
      do
      {
        v9 = HvlpAddLiveDumpBufferChunk(*a1);
        if ( v9 < 0 )
          goto LABEL_6;
        ++a1;
      }
      while ( --a2 );
    }
    v9 = HvlpSetupLiveDumpBuffer(a4, a5, a6);
    if ( v9 < 0 )
    {
LABEL_6:
      v11 = 0LL;
      memset(v12, 0, sizeof(v12));
      HvlpEnterIumSecureMode(1u, 38, 0, (unsigned __int8 *)&v11);
    }
  }
  return (unsigned int)v9;
}
