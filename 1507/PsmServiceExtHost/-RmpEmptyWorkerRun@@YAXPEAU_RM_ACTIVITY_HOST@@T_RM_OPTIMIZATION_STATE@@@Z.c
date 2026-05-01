/*
 * XREFs of ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180039F2C
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerRun(__int64 a1, char a2)
{
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  int *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  *(_BYTE *)(a1 + 816) = a2;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 16), 1u);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v13 = 0;
    v16 = 0;
    v9 = v6;
    v11 = &v9;
    v8 = (unsigned __int8)v5;
    v14 = &v8;
    v12 = 8;
    v15 = (int)cData;
    TlgWrite(cData, &unk_18005AE85, v4, v5, (UINT32)cData, &pData);
  }
  return TpPostWork(*(_QWORD *)(a1 + 792));
}
