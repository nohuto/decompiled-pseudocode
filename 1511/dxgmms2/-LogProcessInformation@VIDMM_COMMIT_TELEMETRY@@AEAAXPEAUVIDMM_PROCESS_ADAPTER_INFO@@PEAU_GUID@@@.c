/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C0087658
 * Callers:
 *     ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0086AA4 (-LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0086CF0 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C0086F2C (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0087068 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00878B8 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0056550 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        const struct _TlgProvider_t **this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  const struct _TlgProvider_t *v6; // rcx
  unsigned int v7; // ebx
  VIDMM_PROCESS_BUDGET_STATE *v8; // rsi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  int v11; // ecx
  _QWORD *v12; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 *v14; // rcx
  const CHAR *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  bool v19; // zf
  LPCGUID v20; // r9
  BOOL v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  _DWORD v28[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+B0h] [rbp-50h] BYREF
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  BOOL *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  char *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  char *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  char *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  char *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]

  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v6 = *this;
      v7 = 0;
      if ( *((_DWORD *)v6 + 1604) )
      {
        do
        {
          v8 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a2 + 6) + 240LL * v7);
          if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(v6, 0x400000000000uLL) )
          {
            v10 = *(unsigned __int16 **)(*(_QWORD *)(v9 + 24) + 984LL);
            v25 = v28;
            v26 = 2LL;
            v11 = *v10;
            v27 = *((_QWORD *)v10 + 1);
            v12 = (_QWORD *)*((_QWORD *)a2 + 5);
            v28[0] = v11;
            v28[1] = 0;
            ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v12);
            TlgCreateSz(&pDesc, ProcessImageFileName);
            v14 = (__int64 *)*((_QWORD *)a2 + 5);
            v22 = *v14;
            v30 = &v22;
            v31 = 8LL;
            if ( *((_BYTE *)this + 24) )
            {
              LOBYTE(v16) = 0;
              if ( v14 )
              {
                v17 = v14[4];
                if ( v17 )
                  v16 = *(_DWORD *)(v17 + 316);
              }
              if ( (v16 & 1) != 0 )
              {
                v15 = "Focus";
              }
              else
              {
                v15 = "Visible";
                if ( (v16 & 2) == 0 )
                  v15 = "Occluded";
              }
            }
            else
            {
              v15 = 0LL;
            }
            TlgCreateSz(&v32, v15);
            v34 = 8LL;
            v35 = (char *)v8 + 72;
            v33 = (char *)v8 + 176;
            v37 = (char *)v8 + 136;
            v36 = 8LL;
            v39 = (char *)v8 + 24;
            v38 = 8LL;
            v40 = 8LL;
            v18 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v8);
            v19 = *(_QWORD *)v8 == 0LL;
            v23 = v18;
            v41 = &v23;
            v43 = &v21;
            v45 = (char *)v8 + 184;
            v47 = (char *)v8 + 80;
            v49 = (char *)v8 + 144;
            v51 = (char *)v8 + 32;
            v42 = 8LL;
            v21 = !v19;
            v44 = 4LL;
            v46 = 8LL;
            v48 = 8LL;
            v50 = 8LL;
            v52 = 8LL;
            TlgWrite((TraceLoggingHProvider)!v19, &unk_1C0025C10, a3, v20, 0x11u, &pData);
          }
          v6 = *this;
          ++v7;
        }
        while ( v7 < *((_DWORD *)*this + 1604) );
      }
    }
  }
}
