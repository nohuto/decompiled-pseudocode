/*
 * XREFs of ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002A570
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x1800198C4 (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerRun(__int64 a1, unsigned __int8 a2)
{
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-9h] BYREF
  __int64 v10; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  int *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  *(_BYTE *)(a1 + 904) = a2;
  RmpObjectAddRef(a1);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v14 = 0;
    v17 = 0;
    v10 = v7;
    v12 = &v10;
    v9 = a2;
    v15 = &v9;
    v13 = 8;
    v16 = (int)cData;
    TlgWrite(cData, &unk_18003F795, v5, v6, (UINT32)cData, &pData);
  }
  return TpPostWork(*(_QWORD *)(a1 + 880));
}
