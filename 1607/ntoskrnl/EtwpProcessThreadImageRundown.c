/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x140499274
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     PsEnumProcesses @ 0x1404993EC (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 *     EtwpIsStackWalkingEnabled @ 0x14049A418 (EtwpIsStackWalkingEnabled.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  ULONG TimeIncrement; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[14]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v21; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+F8h] [rbp-8h]
  ULONG *p_TimeIncrement; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h]
  __int64 *v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  char *v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  __int64 *v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  char *v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  int *v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  __int64 *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  __int64 *v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]

  memset(v19, 0, 0x68uLL);
  v19[0] = a1;
  HIDWORD(v19[3]) = a2;
  LOBYTE(v19[12]) = a3;
  v6 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, a2, 0);
  if ( !v6 )
    return 3221226134LL;
  v8 = 1283LL;
  if ( !a3 )
    v8 = 1284LL;
  BYTE2(v19[12]) = EtwpIsStackWalkingEnabled(v6, v8, v7, v6);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(v9 + 12) & 0x2000000) != 0 )
    v19[1] = &EtwpObjectTypeFilter[10 * *(unsigned __int8 *)(v9 + 818)];
  EtwpReleaseLoggerContext((unsigned int *)v9, 0);
  v19[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74777445u);
  if ( v19[2] )
    LOWORD(v19[3]) = 0x2000;
  v10 = (unsigned int)EtwpStackCaptureTimeout * (EtwpOneMs / -4) / KeQueryTimeIncrement();
  if ( !(_DWORD)v10 )
    LODWORD(v10) = 1;
  LODWORD(v19[7]) = v10;
  EtwpProcessEnumCallback((ULONG_PTR)PsIdleProcess);
  PsEnumProcesses(EtwpProcessEnumCallback, v19);
  if ( BYTE2(v19[12]) && stru_1402F3680.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3680, 0x400000000000uLL) )
  {
    v12 = EtwpStackCaptureTimeout;
    TimeIncrement = KeQueryTimeIncrement();
    v14 = v19[8];
    v15 = v19[9];
    v16 = HIDWORD(v19[7]);
    v17 = v19[10];
    v18 = v19[11];
    v21 = &v12;
    p_TimeIncrement = &TimeIncrement;
    v25 = &v14;
    v27 = (char *)&v14 + 4;
    v29 = &v15;
    v31 = (char *)&v15 + 4;
    v33 = &v16;
    v35 = &v17;
    v37 = &v18;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 8LL;
    v38 = 8LL;
    TlgWrite(&stru_1402F3680, &unk_14027F095, 0LL, 0LL, 0xBu, &pData);
  }
  if ( v19[2] )
    ExFreePoolWithTag((PVOID)v19[2], 0);
  if ( v19[5] )
    ExFreePoolWithTag((PVOID)v19[5], 0);
  return 0LL;
}
