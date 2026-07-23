/*
 * XREFs of EtwpProcessPerfCtrsRundown @ 0x1406A7AD0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsQueryProcessQuotaCounters @ 0x1404BB784 (PsQueryProcessQuotaCounters.c)
 *     ObGetProcessHandleCount @ 0x14051B034 (ObGetProcessHandleCount.c)
 */

void __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r11d
  _DWORD v7[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v13; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v14[3]; // [rsp+88h] [rbp+1Fh] BYREF
  _DWORD *v15; // [rsp+A0h] [rbp+37h] BYREF
  int v16; // [rsp+A8h] [rbp+3Fh]
  int v17; // [rsp+ACh] [rbp+43h]

  v7[0] = *(_DWORD *)(a1 + 744);
  v7[2] = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
  v7[1] = *(_DWORD *)(a1 + 1284);
  v12[1] = *(_QWORD *)(a1 + 824);
  v8 = *(_QWORD *)(a1 + 816);
  v12[2] = *(_QWORD *)(a1 + 1392) << 12;
  v9 = *(_QWORD *)(a1 + 1432) << 12;
  PsQueryProcessQuotaCounters(a1, 1, &v13, &v11);
  PsQueryProcessQuotaCounters(a1, 0, v14, v12);
  v4 = *(_QWORD *)(a1 + 1264);
  v5 = *(_QWORD *)(a1 + 1272);
  v17 = 0;
  v10 = v5 << 12;
  v12[3] = v4 << 12;
  v14[1] = v4 << 12;
  v15 = v7;
  v16 = 104;
  EtwpLogKernelEvent((__int64)&v15, EtwpHostSiloState, a2, v6, 0x321u, 0x401802u);
}
