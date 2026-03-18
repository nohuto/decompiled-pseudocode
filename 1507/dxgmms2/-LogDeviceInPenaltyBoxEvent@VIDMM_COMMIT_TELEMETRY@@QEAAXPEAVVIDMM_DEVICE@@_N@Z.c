/*
 * XREFs of ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0072D10
 * Callers:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058B5C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005936C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0011DE4 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00734F8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_DEVICE *a2,
        char a3)
{
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  _QWORD *v9; // rax
  const CHAR *ProcessImageFileName; // rax
  const CHAR *v11; // rdx
  const struct _TlgProvider_t *v12; // rax
  TraceLoggingHProvider v13; // rcx
  LPCGUID v14; // r9
  ULONGLONG v15; // rdx
  const struct _TlgProvider_t *v16; // rcx
  unsigned __int16 *v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  const CHAR *v21; // rax
  const struct _TlgProvider_t *v22; // rcx
  LPCGUID v23; // r9
  GUID v24; // xmm0
  const struct _TlgProvider_t *v25; // [rsp+30h] [rbp-59h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v28; // [rsp+70h] [rbp-19h]
  int v29; // [rsp+78h] [rbp-11h]
  int v30; // [rsp+7Ch] [rbp-Dh]
  __int64 v31; // [rsp+80h] [rbp-9h]
  int v32; // [rsp+88h] [rbp-1h] BYREF
  int v33; // [rsp+8Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  const struct _TlgProvider_t **v35; // [rsp+A0h] [rbp+17h]
  int v36; // [rsp+A8h] [rbp+1Fh]
  int v37; // [rsp+ACh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+B0h] [rbp+27h] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 232);
    if ( (unsigned int)dword_1C0027010 > 5 && TlgKeywordOn(this, (ULONGLONG)a2) )
    {
      v6 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 976LL);
      v30 = 0;
      v28 = &v32;
      v29 = 2;
      v7 = *v6;
      v8 = *((_QWORD *)v6 + 1);
      v33 = 0;
      v31 = v8;
      v9 = (_QWORD *)*((_QWORD *)a2 + 1);
      v32 = v7;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v9);
      TlgCreateSz(&pDesc, ProcessImageFileName);
      v11 = "AddedToPenaltyBox";
      v12 = (const struct _TlgProvider_t *)**((_QWORD **)a2 + 1);
      v37 = 0;
      v25 = v12;
      v36 = 8;
      v35 = &v25;
      if ( !a3 )
        v11 = "RemovedFromPenaltyBox";
      TlgCreateSz(&v38, v11);
      TlgWrite(v13, &unk_1C002082E, &ActivityId, v14, 7u, &pData);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)dword_1C0027010 > 5 )
      {
        if ( TlgKeywordOn(v16, v15) )
        {
          v17 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 976LL);
          v30 = 0;
          v28 = &v32;
          v29 = 2;
          v18 = *v17;
          v19 = *((_QWORD *)v17 + 1);
          v33 = 0;
          v31 = v19;
          v20 = *((_QWORD *)this + 1);
          v32 = v18;
          v21 = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v20 + 8));
          TlgCreateSz(&pDesc, v21);
          v22 = **(const struct _TlgProvider_t ***)(*((_QWORD *)this + 1) + 8LL);
          v37 = 0;
          v35 = &v25;
          v25 = v22;
          v36 = 8;
          TlgWrite(v22, &unk_1C00207D5, &ActivityId, v23, 6u, &pData);
        }
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v24 = ActivityId;
    }
    else
    {
      v24 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 232) = v24;
  }
}
