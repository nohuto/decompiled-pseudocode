/*
 * XREFs of ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0086CF0
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0061470 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C007F9A4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C0087658 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
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
  const struct _TlgProvider_t *v15; // rcx
  unsigned __int16 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  const CHAR *v20; // rax
  const struct _TlgProvider_t *v21; // rcx
  LPCGUID v22; // r9
  GUID v23; // xmm0
  const struct _TlgProvider_t *v24; // [rsp+30h] [rbp-59h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v27; // [rsp+70h] [rbp-19h]
  int v28; // [rsp+78h] [rbp-11h]
  int v29; // [rsp+7Ch] [rbp-Dh]
  __int64 v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h] BYREF
  int v32; // [rsp+8Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  const struct _TlgProvider_t **v34; // [rsp+A0h] [rbp+17h]
  int v35; // [rsp+A8h] [rbp+1Fh]
  int v36; // [rsp+ACh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+B0h] [rbp+27h] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 232);
    if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(this, 0x400000000000uLL) )
    {
      v6 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 984LL);
      v29 = 0;
      v27 = &v31;
      v28 = 2;
      v7 = *v6;
      v8 = *((_QWORD *)v6 + 1);
      v32 = 0;
      v30 = v8;
      v9 = (_QWORD *)*((_QWORD *)a2 + 1);
      v31 = v7;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v9);
      TlgCreateSz(&pDesc, ProcessImageFileName);
      v11 = "AddedToPenaltyBox";
      v12 = (const struct _TlgProvider_t *)**((_QWORD **)a2 + 1);
      v36 = 0;
      v24 = v12;
      v35 = 8;
      v34 = &v24;
      if ( !a3 )
        v11 = "RemovedFromPenaltyBox";
      TlgCreateSz(&v37, v11);
      TlgWrite(v13, &unk_1C002599E, &ActivityId, v14, 7u, &pData);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)dword_1C002F020 > 5 )
      {
        if ( TlgKeywordOn(v15, 0x400000000000uLL) )
        {
          v16 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 984LL);
          v29 = 0;
          v27 = &v31;
          v28 = 2;
          v17 = *v16;
          v18 = *((_QWORD *)v16 + 1);
          v32 = 0;
          v30 = v18;
          v19 = *((_QWORD *)this + 1);
          v31 = v17;
          v20 = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v19 + 8));
          TlgCreateSz(&pDesc, v20);
          v21 = **(const struct _TlgProvider_t ***)(*((_QWORD *)this + 1) + 8LL);
          v36 = 0;
          v34 = &v24;
          v24 = v21;
          v35 = 8;
          TlgWrite(v21, &unk_1C0025945, &ActivityId, v22, 6u, &pData);
        }
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v23 = ActivityId;
    }
    else
    {
      v23 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 232) = v23;
  }
}
