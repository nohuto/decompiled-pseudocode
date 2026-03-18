/*
 * XREFs of Control_Initialize @ 0x1C0052080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  unsigned __int16 v4; // r9
  int v5; // r8d
  int v7; // [rsp+38h] [rbp-39h]
  int v8; // [rsp+40h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-29h] BYREF
  void (__fastcall *v10)(__int64); // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  _QWORD v12[7]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v13[6]; // [rsp+98h] [rbp+27h] BYREF

  *(_QWORD *)(a1 + 320) = a1 + 312;
  *(_QWORD *)(a1 + 312) = a1 + 312;
  *(_BYTE *)(a1 + 272) = (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20000LL) == 0
                      && (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu) >= 8;
  memset(v13, 0, 0x28uLL);
  LODWORD(v13[2]) = 0;
  LODWORD(v13[3]) = 0;
  v13[1] = Control_WdfEvtTimerForTransferTimeout;
  LODWORD(v13[0]) = 40;
  BYTE4(v13[2]) = 1;
  memset(v12, 0, sizeof(v12));
  v12[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
         WdfDriverGlobals,
         v13,
         v12,
         a1 + 288);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 10;
    v8 = v2;
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
LABEL_9:
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
      2u,
      0xDu,
      v4,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v5,
      v7,
      v8,
      v9,
      v10,
      v11);
    return (unsigned int)v3;
  }
  v11 = 1LL;
  v9 = 24LL;
  v10 = Control_WdfDpcForCanceledOnQueueTransferCompletion;
  memset(v12, 0, sizeof(v12));
  v12[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 888))(
         WdfDriverGlobals,
         &v9,
         v12,
         a1 + 280);
  if ( v3 < 0 )
  {
    v4 = 11;
    v8 = v3;
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    goto LABEL_9;
  }
  return (unsigned int)v3;
}
