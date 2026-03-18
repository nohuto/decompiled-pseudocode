/*
 * XREFs of EtwpTraceSystemShutdown @ 0x1406A2F28
 * Callers:
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     KeQuerySystemTimePrecise @ 0x1400F2100 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

char EtwpTraceSystemShutdown()
{
  char result; // al
  int v1; // [rsp+30h] [rbp-29h] BYREF
  __int64 v2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v3; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  int *v6; // [rsp+80h] [rbp+27h]
  int v7; // [rsp+88h] [rbp+2Fh]
  int v8; // [rsp+8Ch] [rbp+33h]
  __int64 *v9; // [rsp+90h] [rbp+37h]
  int v10; // [rsp+98h] [rbp+3Fh]
  int v11; // [rsp+9Ch] [rbp+43h]

  result = KeQuerySystemTimePrecise(&v2);
  if ( stru_1402F3680.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_1402F3680, 0x200000000000uLL);
    if ( result )
    {
      v8 = 0;
      v11 = 0;
      v3 = v2;
      v6 = &v1;
      v9 = &v3;
      v1 = 2;
      v7 = 4;
      v10 = 8;
      result = TlgWrite(&stru_1402F3680, &unk_14027E601, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
