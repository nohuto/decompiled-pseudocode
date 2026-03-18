/*
 * XREFs of EtwpProcessPerfCtrsRundown @ 0x140665F58
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1405008B4 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObGetProcessHandleCount @ 0x1403E94CC (ObGetProcessHandleCount.c)
 *     PsQueryProcessQuotaCounters @ 0x1404AE9C8 (PsQueryProcessQuotaCounters.c)
 */

void __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, unsigned int a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // r11d
  int v7; // edx
  _DWORD v8[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h]
  __int64 v10; // [rsp+48h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-19h]
  __int64 v12; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v14; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v15[3]; // [rsp+88h] [rbp+1Fh] BYREF
  _DWORD *v16; // [rsp+A0h] [rbp+37h] BYREF
  int v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+ACh] [rbp+43h]

  v8[0] = *(_DWORD *)(a1 + 744);
  v8[2] = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
  v8[1] = *(_DWORD *)(a1 + 1476);
  v13[1] = *(_QWORD *)(a1 + 824);
  v9 = *(_QWORD *)(a1 + 816);
  v13[2] = *(_QWORD *)(a1 + 1384) << 12;
  v10 = *(_QWORD *)(a1 + 1448) << 12;
  PsQueryProcessQuotaCounters(a1, 1, &v14, &v12);
  PsQueryProcessQuotaCounters(a1, 0, v15, v13);
  v4 = *(_QWORD *)(a1 + 1264);
  v5 = *(_QWORD *)(a1 + 1272);
  v18 &= v7;
  v11 = v5 << 12;
  v13[3] = v4 << 12;
  v15[1] = v4 << 12;
  v16 = v8;
  v17 = 104;
  EtwpLogKernelEvent((__int64)&v16, a2, v6, 0x321u, 0x401802u);
}
