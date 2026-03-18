/*
 * XREFs of PopNotifySessionDisplayRequired @ 0x1404EAE80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopNotifySessionDisplayRequired(char a1, int a2)
{
  char v3; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v4[5]; // [rsp+28h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+20h] BYREF
  int v6; // [rsp+78h] [rbp+28h] BYREF

  if ( PsWin32CalloutsEstablished )
  {
    v6 = a2;
    v5 = a1 != 0 ? 1 : -1;
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 2;
    LODWORD(v4[1]) = 4;
    v4[2] = &v5;
    LODWORD(v4[3]) = 4;
    v4[4] = &v3;
    PsInvokeWin32Callout((_KPROCESS *)5, (__int64)v4, 1, (int)&v6);
  }
  return 0LL;
}
