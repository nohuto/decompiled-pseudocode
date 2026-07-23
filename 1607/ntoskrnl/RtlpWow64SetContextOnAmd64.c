/*
 * XREFs of RtlpWow64SetContextOnAmd64 @ 0x1404FD654
 * Callers:
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpWow64CtxToAmd64 @ 0x1404FD838 (RtlpWow64CtxToAmd64.c)
 */

__int64 __fastcall RtlpWow64SetContextOnAmd64(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  int v4; // r10d
  unsigned int v7; // ebp
  bool v10; // bl

  v4 = 0;
  *a4 = 0;
  v7 = *a3;
  if ( a2 )
  {
    v10 = *(_WORD *)(a2 + 56) == 35;
    RtlpWow64CtxToAmd64(v7, a3, a2);
    if ( v10 )
    {
LABEL_19:
      *a4 = 1;
      return 0LL;
    }
    v4 = 0;
  }
  if ( (v7 & 0x10001) == 0x10001 )
  {
    *(_DWORD *)(a1 + 180) = a3[45];
    *(_DWORD *)(a1 + 184) = a3[46];
    *(_DWORD *)(a1 + 188) = 35;
    *(_DWORD *)(a1 + 192) = a3[48] & 0x3F0DD5 | 0x202;
    *(_DWORD *)(a1 + 196) = a3[49];
    *(_DWORD *)(a1 + 200) = a3[50];
  }
  if ( (v7 & 0x10002) == 0x10002 )
  {
    *(_DWORD *)(a1 + 156) = a3[39];
    *(_DWORD *)(a1 + 160) = a3[40];
    *(_DWORD *)(a1 + 164) = a3[41];
    *(_DWORD *)(a1 + 168) = a3[42];
    *(_DWORD *)(a1 + 172) = a3[43];
    *(_DWORD *)(a1 + 176) = a3[44];
  }
  if ( (v7 & 0x10008) == 0x10008 )
    v4 = 1048584;
  if ( (v7 & 0x10010) == 0x10010 )
    v4 |= 0x100010u;
  if ( (v7 & 0x10020) == 0x10020 )
  {
    v4 |= 0x100008u;
    *(_OWORD *)(a1 + 364) = *(_OWORD *)(a3 + 91);
    *(_OWORD *)(a1 + 380) = *(_OWORD *)(a3 + 95);
    *(_OWORD *)(a1 + 396) = *(_OWORD *)(a3 + 99);
    *(_OWORD *)(a1 + 412) = *(_OWORD *)(a3 + 103);
    *(_OWORD *)(a1 + 428) = *(_OWORD *)(a3 + 107);
    *(_OWORD *)(a1 + 444) = *(_OWORD *)(a3 + 111);
  }
  if ( (v7 & 0x10040) == 0x10040 )
    v4 |= 0x100040u;
  if ( v4 && a2 )
  {
    *(_DWORD *)(a2 + 48) = v4;
    goto LABEL_19;
  }
  return 0LL;
}
