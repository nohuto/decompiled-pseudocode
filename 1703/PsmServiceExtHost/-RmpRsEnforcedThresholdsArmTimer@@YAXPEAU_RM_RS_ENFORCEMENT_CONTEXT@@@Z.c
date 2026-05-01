/*
 * XREFs of ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18002DBEC
 * Callers:
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180017634 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 *     ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002DD70 (-RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpRsEnforcedThresholdsArmTimer(struct _RM_RS_ENFORCEMENT_CONTEXT *a1)
{
  __int64 v1; // rdi
  const struct _TlgProvider_t *v3; // rcx
  int v4; // edx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  char *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  __int64 v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  __int64 *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]

  v1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 144LL) = a1;
  RtlQueryUnbiasedInterruptTime(&v10);
  if ( v10 <= *((_QWORD *)a1 + 6) )
    v9 = v10 - *((_QWORD *)a1 + 6);
  else
    v9 = 0LL;
  TpSetTimer(*((_QWORD *)a1 + 5), &v9, 0LL, 1000LL);
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v3, 9uLL) )
    {
      v7 = *(_QWORD *)(v1 + 24);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = v7;
      v14 = &v11;
      v17 = (char *)a1 + 24;
      v8 = *(_QWORD *)(v1 + 40) + 1480LL;
      v15 = v4 - 1;
      v20 = v8;
      v18 = v4 - 1;
      v25 = 0;
      v12 = -(__int64)v9;
      v23 = &v12;
      v21 = v4 - 1;
      v24 = v4 - 1;
      TlgWrite((TraceLoggingHProvider)(unsigned int)(v4 - 1), &unk_180041139, v5, v6, 6u, &pData);
    }
  }
}
