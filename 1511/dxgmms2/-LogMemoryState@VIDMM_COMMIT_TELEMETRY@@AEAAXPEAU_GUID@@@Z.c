/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0087210
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C0086F2C (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0087068 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0087510 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00878B8 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(const struct _TlgProvider_t **this, struct _GUID *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rcx
  const CHAR *v6; // r8
  unsigned __int16 *v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  TraceLoggingHProvider v10; // rcx
  LPCGUID v11; // r9
  unsigned int i; // edi
  __int64 v13; // rsi
  __int64 v14; // r15
  const struct _TlgProvider_t *v15; // rcx
  __int64 v16; // r8
  unsigned __int16 *v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  const GUID *v20; // r9
  __int64 v21; // rax
  const struct _TlgProvider_t *v22; // rcx
  __int64 v23; // r8
  unsigned __int16 *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  const GUID *v27; // r9
  const struct _TlgProvider_t *v28; // [rsp+38h] [rbp-79h] BYREF
  __int64 v29; // [rsp+40h] [rbp-71h] BYREF
  const GUID *v30; // [rsp+48h] [rbp-69h] BYREF
  const GUID *v31; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-59h] BYREF
  int *v33; // [rsp+78h] [rbp-39h]
  __int64 v34; // [rsp+80h] [rbp-31h]
  __int64 v35; // [rsp+88h] [rbp-29h]
  int v36; // [rsp+90h] [rbp-21h] BYREF
  int v37; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-19h] BYREF
  const struct _TlgProvider_t **v39; // [rsp+A8h] [rbp-9h]
  __int64 v40; // [rsp+B0h] [rbp-1h]
  __int64 *v41; // [rsp+B8h] [rbp+7h]
  __int64 v42; // [rsp+C0h] [rbp+Fh]
  const GUID **v43; // [rsp+C8h] [rbp+17h]
  __int64 v44; // [rsp+D0h] [rbp+1Fh]

  if ( *((_BYTE *)this + 24) )
  {
    v4 = *this;
    if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v7 = *(unsigned __int16 **)(*(_QWORD *)(v5 + 24) + 984LL);
      v33 = &v36;
      v34 = 2LL;
      v8 = *v7;
      v9 = *((_QWORD *)v7 + 1);
      v36 = v8;
      v35 = v9;
      v37 = 0;
      TlgCreateSz(&pDesc, v6);
      TlgWrite(v10, &unk_1C0025BCA, a2, v11, 5u, &pData);
    }
    for ( i = 0; i < *((_DWORD *)*this + 1604); ++i )
    {
      v13 = 264LL * i;
      v14 = *((_QWORD *)*this + 5111);
      v15 = *(const struct _TlgProvider_t **)(v14 + v13 + 16);
      v28 = v15;
      v29 = *(_QWORD *)(v14 + v13 + 232);
      if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(v15, 0x400000000000uLL) )
      {
        v17 = *(unsigned __int16 **)(*(_QWORD *)(v16 + 24) + 984LL);
        v33 = &v36;
        v34 = 2LL;
        v18 = *v17;
        v19 = *((_QWORD *)v17 + 1);
        v36 = v18;
        v35 = v19;
        v37 = 0;
        TlgCreateSz(&pDesc, "Local");
        v40 = 8LL;
        v41 = &v29;
        v39 = &v28;
        v43 = &v30;
        v42 = 8LL;
        v30 = v20;
        v44 = 8LL;
        TlgWrite((TraceLoggingHProvider)&v28, &unk_1C0025B4B, a2, v20, 8u, &pData);
      }
      v21 = *((_QWORD *)*this + 5111);
      v22 = *(const struct _TlgProvider_t **)(v21 + v13 + 24);
      if ( v22 )
      {
        v28 = *(const struct _TlgProvider_t **)(v21 + v13 + 24);
        v29 = *(_QWORD *)(v14 + v13 + 240);
        if ( (unsigned int)dword_1C002F020 > 5 )
        {
          if ( TlgKeywordOn(v22, 0x400000000000uLL) )
          {
            v24 = *(unsigned __int16 **)(*(_QWORD *)(v23 + 24) + 984LL);
            v33 = &v36;
            v34 = 2LL;
            v25 = *v24;
            v26 = *((_QWORD *)v24 + 1);
            v36 = v25;
            v35 = v26;
            v37 = 0;
            TlgCreateSz(&pDesc, "NonLocal");
            v40 = 8LL;
            v41 = &v29;
            v39 = &v28;
            v43 = &v31;
            v42 = 8LL;
            v31 = v27;
            v44 = 8LL;
            TlgWrite((TraceLoggingHProvider)&v28, &unk_1C0025B4B, a2, v27, 8u, &pData);
          }
        }
      }
    }
  }
}
