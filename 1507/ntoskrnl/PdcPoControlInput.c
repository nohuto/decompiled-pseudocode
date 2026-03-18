/*
 * XREFs of PdcPoControlInput @ 0x1406B743C
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PdcPoControlInput(int a1, int a2)
{
  int v2; // ecx
  __int64 result; // rax
  _QWORD v4[6]; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF

  v6 = a2;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return result;
      v5 = 2;
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  memset(v4, 0, 0x28uLL);
  LODWORD(v4[3]) = 0;
  v4[4] = 0LL;
  BYTE4(v4[0]) = 0;
  LODWORD(v4[0]) = 4;
  LODWORD(v4[1]) = 4;
  v4[2] = &v5;
  return PsInvokeWin32Callout((_KPROCESS *)5, (__int64)v4, 1, (int)&v6);
}
