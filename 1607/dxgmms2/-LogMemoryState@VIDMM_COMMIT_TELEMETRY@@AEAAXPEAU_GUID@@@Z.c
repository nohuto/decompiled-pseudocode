/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00679D0
 * Callers:
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0067C00 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C009C2D8 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C009C450 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C009C5D4 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0020774 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00207A0 (_TlgWrite.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  __int64 v4; // rcx
  const CHAR *v5; // rdx
  __int64 v6; // r8
  unsigned int i; // edi
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // r10
  __int64 v13; // rax
  char v14; // al
  unsigned __int16 *v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  LPCGUID v18; // r9
  unsigned __int16 *v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  const GUID *v22; // r9
  UINT32 cData; // r11d
  unsigned __int16 *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  const GUID *v27; // r9
  UINT32 v28; // r11d
  __int64 v29; // [rsp+38h] [rbp-79h] BYREF
  __int64 v30; // [rsp+40h] [rbp-71h] BYREF
  const GUID *v31; // [rsp+48h] [rbp-69h] BYREF
  const GUID *v32; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-59h] BYREF
  int *v34; // [rsp+78h] [rbp-39h]
  __int64 v35; // [rsp+80h] [rbp-31h]
  __int64 v36; // [rsp+88h] [rbp-29h]
  int v37; // [rsp+90h] [rbp-21h] BYREF
  int v38; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-19h] BYREF
  __int64 *v40; // [rsp+A8h] [rbp-9h]
  __int64 v41; // [rsp+B0h] [rbp-1h]
  __int64 *v42; // [rsp+B8h] [rbp+7h]
  __int64 v43; // [rsp+C0h] [rbp+Fh]
  const GUID **v44; // [rsp+C8h] [rbp+17h]
  __int64 v45; // [rsp+D0h] [rbp+1Fh]

  if ( *((_BYTE *)this + 24) )
  {
    v4 = *(_QWORD *)this;
    v5 = "Discrete";
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 41200) + 24LL) )
      v5 = "Integrated";
    v6 = qword_1C0035018;
    if ( (unsigned int)hProvider > 5
      && (qword_1C0035010 & 0x400000000008LL) != 0
      && (qword_1C0035018 & 0x400000000008LL) == qword_1C0035018 )
    {
      v15 = *(unsigned __int16 **)(*(_QWORD *)(v4 + 24) + 1072LL);
      v34 = &v37;
      v35 = 2LL;
      v16 = *v15;
      v17 = *((_QWORD *)v15 + 1);
      v37 = v16;
      v36 = v17;
      v38 = 0;
      TlgCreateSz(&pDesc, v5);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002AC7A, a2, v18, 5u, &pData);
      v6 = qword_1C0035018;
    }
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6416LL); ++i )
    {
      v8 = *(_QWORD *)this;
      v9 = 264LL * i;
      v10 = *(_QWORD *)(*(_QWORD *)this + 41200LL);
      v29 = *(_QWORD *)(v10 + v9 + 16);
      v30 = *(_QWORD *)(v10 + v9 + 232);
      if ( (unsigned int)hProvider > 5 )
      {
        if ( (qword_1C0035010 & 0x400000000008LL) == 0 || (v11 = 1, (v6 & 0x400000000008LL) != v6) )
          v11 = 0;
        if ( v11 )
        {
          v19 = *(unsigned __int16 **)(*(_QWORD *)(v8 + 24) + 1072LL);
          v34 = &v37;
          v35 = 2LL;
          v20 = *v19;
          v21 = *((_QWORD *)v19 + 1);
          v37 = v20;
          v36 = v21;
          v38 = 0;
          TlgCreateSz(&pDesc, "Local");
          v41 = 8LL;
          v42 = &v30;
          v40 = &v29;
          v44 = &v31;
          v43 = 8LL;
          v31 = v22;
          v45 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002ABFB, a2, v22, cData, &pData);
          v6 = qword_1C0035018;
        }
      }
      v12 = *(_QWORD *)this;
      v13 = *(_QWORD *)(*(_QWORD *)this + 41200LL);
      if ( *(_QWORD *)(v13 + v9 + 24) )
      {
        v29 = *(_QWORD *)(v13 + v9 + 24);
        v30 = *(_QWORD *)(v10 + v9 + 240);
        if ( (unsigned int)hProvider > 5 )
        {
          if ( (qword_1C0035010 & 0x400000000008LL) == 0 || (v14 = 1, (v6 & 0x400000000008LL) != v6) )
            v14 = 0;
          if ( v14 )
          {
            v24 = *(unsigned __int16 **)(*(_QWORD *)(v12 + 24) + 1072LL);
            v34 = &v37;
            v35 = 2LL;
            v25 = *v24;
            v26 = *((_QWORD *)v24 + 1);
            v37 = v25;
            v36 = v26;
            v38 = 0;
            TlgCreateSz(&pDesc, "NonLocal");
            v41 = 8LL;
            v42 = &v30;
            v40 = &v29;
            v44 = &v32;
            v43 = 8LL;
            v32 = v27;
            v45 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002ABFB, a2, v27, v28, &pData);
            v6 = qword_1C0035018;
          }
        }
      }
    }
  }
}
