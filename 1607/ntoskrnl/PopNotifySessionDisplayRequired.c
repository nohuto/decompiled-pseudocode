/*
 * XREFs of PopNotifySessionDisplayRequired @ 0x14052DD2C
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678B14 (TtmNotifySessionDisplayRequiredChange.c)
 */

__int64 __fastcall PopNotifySessionDisplayRequired(char a1, __int64 a2)
{
  unsigned int v2; // r9d
  char v4; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+28h] [rbp-28h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF

  v2 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v7 = a2;
    v6 = a1 != 0 ? 1 : -1;
    if ( TtmpEnabled == 1 )
    {
      LOBYTE(a2) = a1;
      TtmNotifySessionDisplayRequiredChange(v2, a2);
    }
    else
    {
      memset(v5, 0, sizeof(v5));
      LODWORD(v5[0]) = 2;
      LODWORD(v5[1]) = 4;
      v5[2] = &v6;
      LODWORD(v5[3]) = 4;
      v5[4] = &v4;
      PsInvokeWin32Callout(5, (__int64)v5, 1, (__int64)&v7);
    }
  }
  return 0LL;
}
