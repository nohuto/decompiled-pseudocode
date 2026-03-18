/*
 * XREFs of EtwpTraceImageRundown @ 0x140501278
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
  __int64 v8; // r11
  _QWORD v9[2]; // [rsp+30h] [rbp-41h] BYREF
  int v10; // [rsp+40h] [rbp-31h]
  int v11; // [rsp+44h] [rbp-2Dh]
  int v12; // [rsp+48h] [rbp-29h]
  char v13; // [rsp+4Ch] [rbp-25h]
  char v14; // [rsp+4Dh] [rbp-24h]
  __int16 v15; // [rsp+4Eh] [rbp-23h]
  __int64 v16; // [rsp+50h] [rbp-21h]
  __int64 v17; // [rsp+58h] [rbp-19h]
  __int64 v18; // [rsp+60h] [rbp-11h]
  _QWORD v19[3]; // [rsp+70h] [rbp-1h] BYREF
  int v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+8Ch] [rbp+1Bh]
  void *v22; // [rsp+90h] [rbp+1Fh]
  __int64 v23; // [rsp+98h] [rbp+27h]

  if ( a3 )
  {
    v7 = *a3;
    if ( *a3 )
    {
      v8 = *((_QWORD *)a3 + 1);
      if ( v8 )
      {
        v10 = a4;
        v12 = 0;
        v15 = 0;
        v9[0] = *(_QWORD *)(a5 + 8);
        v9[1] = *(_QWORD *)(a5 + 24);
        v11 = *(_DWORD *)(a5 + 40);
        v13 = a6;
        v14 = a7;
        v16 = *(_QWORD *)(a5 + 16);
        v19[0] = v9;
        v20 = v7;
        v22 = &EtwpNull;
        v17 = 0LL;
        v18 = 0LL;
        v19[1] = 56LL;
        v19[2] = v8;
        v21 = 0;
        v23 = 2LL;
        EtwpLogKernelEvent((__int64)v19, a1, 3LL, a2, 0x401803u);
      }
    }
  }
}
