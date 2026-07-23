/*
 * XREFs of EtwpTraceImageRundown @ 0x1404B2604
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceImageRundown(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        int a4,
        __int64 a5,
        char a6,
        char a7)
{
  unsigned __int16 v7; // r10
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+30h] [rbp-41h] BYREF
  int v11; // [rsp+40h] [rbp-31h]
  int v12; // [rsp+44h] [rbp-2Dh]
  int v13; // [rsp+48h] [rbp-29h]
  char v14; // [rsp+4Ch] [rbp-25h]
  char v15; // [rsp+4Dh] [rbp-24h]
  __int16 v16; // [rsp+4Eh] [rbp-23h]
  __int64 v17; // [rsp+50h] [rbp-21h]
  __int64 v18; // [rsp+58h] [rbp-19h]
  __int64 v19; // [rsp+60h] [rbp-11h]
  _QWORD v20[3]; // [rsp+70h] [rbp-1h] BYREF
  int v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+8Ch] [rbp+1Bh]
  void *v23; // [rsp+90h] [rbp+1Fh]
  __int64 v24; // [rsp+98h] [rbp+27h]

  if ( a3 )
  {
    v7 = *a3;
    if ( *a3 )
    {
      v9 = *((_QWORD *)a3 + 1);
      if ( v9 )
      {
        v11 = a4;
        v20[2] = v9;
        v10[0] = *(_QWORD *)(a5 + 8);
        v10[1] = *(_QWORD *)(a5 + 24);
        v12 = *(_DWORD *)(a5 + 40);
        v14 = a6;
        v15 = a7;
        v17 = *(_QWORD *)(a5 + 16);
        v20[0] = v10;
        v21 = v7;
        v23 = &EtwpNull;
        v13 = 0;
        v16 = 0;
        v18 = 0LL;
        v19 = 0LL;
        v20[1] = 56LL;
        v22 = 0;
        v24 = 2LL;
        EtwpLogKernelEvent((__int64)v20, EtwpHostSiloState, a1, 3u, a2, 0x401803u);
      }
    }
  }
}
