/*
 * XREFs of PopGetConsoleDisplayRequestCount @ 0x1401F392C
 * Callers:
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

__int64 PopGetConsoleDisplayRequestCount()
{
  unsigned int v0; // ebx
  int v1; // eax
  unsigned int v2; // ecx
  _QWORD v4[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h]
  int v7; // [rsp+70h] [rbp+20h] BYREF

  v0 = 0;
  v5 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    v6 = MEMORY[0xFFFFF780000002D8];
    if ( MEMORY[0xFFFFF780000002D8] == -1 )
    {
      return v5;
    }
    else
    {
      memset(v4, 0, 0x28uLL);
      v7 = 0;
      LODWORD(v4[1]) = 4;
      v4[2] = &v7;
      LODWORD(v4[3]) = 4;
      v4[4] = &v5;
      LODWORD(v4[0]) = 2;
      v1 = PsInvokeWin32Callout(5LL, v4, 1LL);
      v2 = v5;
      if ( v1 < 0 )
        return 0;
      return v2;
    }
  }
  return v0;
}
