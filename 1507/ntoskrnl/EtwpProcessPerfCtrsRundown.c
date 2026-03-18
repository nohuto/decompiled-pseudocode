/*
 * XREFs of EtwpProcessPerfCtrsRundown @ 0x1406E90E4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObGetProcessHandleCount @ 0x140508648 (ObGetProcessHandleCount.c)
 */

unsigned __int64 __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h]
  __int64 v8; // [rsp+48h] [rbp-21h]
  __int64 v9; // [rsp+50h] [rbp-19h]
  __int64 v10; // [rsp+58h] [rbp-11h]
  __int64 v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  _DWORD *v18; // [rsp+A0h] [rbp+37h] BYREF
  int v19; // [rsp+A8h] [rbp+3Fh]
  int v20; // [rsp+ACh] [rbp+43h]

  v6[0] = *(_DWORD *)(a1 + 744);
  v6[2] = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
  v6[1] = *(_DWORD *)(a1 + 1468);
  v12 = *(_QWORD *)(a1 + 824);
  v7 = *(_QWORD *)(a1 + 816);
  v13 = *(_QWORD *)(a1 + 1376) << 12;
  v8 = *(_QWORD *)(a1 + 1440) << 12;
  v15 = *(_QWORD *)(a1 + 792);
  v10 = *(_QWORD *)(a1 + 808);
  v16 = *(_QWORD *)(a1 + 784);
  v11 = *(_QWORD *)(a1 + 800);
  v14 = *(_QWORD *)(a1 + 1256) << 12;
  v4 = *(_QWORD *)(a1 + 1264);
  v20 = 0;
  v9 = v4 << 12;
  v17 = v14;
  v18 = v6;
  v19 = 104;
  return EtwpLogKernelEvent((__int64)&v18, a2, 1u, 0x321u, 4200450);
}
