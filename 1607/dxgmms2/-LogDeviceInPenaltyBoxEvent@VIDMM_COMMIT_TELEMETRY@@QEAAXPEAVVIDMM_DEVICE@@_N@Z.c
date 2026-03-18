/*
 * XREFs of ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C006AA24
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B9A0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006A894 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0020774 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00207A0 (_TlgWrite.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C006790C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_DEVICE *a2,
        char a3)
{
  GUID v6; // xmm0
  unsigned __int16 *v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  _QWORD *v10; // rax
  const CHAR *ProcessImageFileName; // rax
  const CHAR *v12; // rdx
  __int64 v13; // rax
  LPCGUID v14; // r9
  unsigned __int16 *v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  const CHAR *v19; // rax
  __int64 v20; // rcx
  LPCGUID v21; // r9
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  _DWORD v40[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+110h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 260LL)) <= 6 )
  {
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 268);
    if ( (unsigned int)hProvider > 5
      && (qword_1C0035010 & 0x400000000008LL) != 0
      && (qword_1C0035018 & 0x400000000008LL) == qword_1C0035018 )
    {
      v7 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1072LL);
      v38 = 0;
      v36 = v40;
      v37 = 2;
      v8 = *v7;
      v9 = *((_QWORD *)v7 + 1);
      v40[1] = 0;
      v39 = v9;
      v10 = (_QWORD *)*((_QWORD *)a2 + 1);
      v40[0] = v8;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v10);
      TlgCreateSz(&pDesc, ProcessImageFileName);
      v12 = "AddedToPenaltyBox";
      v13 = **((_QWORD **)a2 + 1);
      v44 = 0;
      v22 = v13;
      v43 = 8;
      v42 = &v22;
      if ( !a3 )
        v12 = "RemovedFromPenaltyBox";
      TlgCreateSz(&v45, v12);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002AA4E, &ActivityId, v14, 7u, &pData);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)hProvider > 5
        && (qword_1C0035010 & 0x400000000008LL) != 0
        && (qword_1C0035018 & 0x400000000008LL) == qword_1C0035018 )
      {
        v15 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1072LL);
        v28 = 0;
        v26 = v30;
        v27 = 2;
        v16 = *v15;
        v17 = *((_QWORD *)v15 + 1);
        v30[1] = 0;
        v29 = v17;
        v18 = *((_QWORD *)this + 1);
        v30[0] = v16;
        v19 = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v18 + 8));
        TlgCreateSz(&v31, v19);
        v20 = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
        v34 = 0;
        v32 = &v23;
        v23 = v20;
        v33 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002A9F5, &ActivityId, v21, 6u, &v25);
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v6 = ActivityId;
    }
    else
    {
      v6 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 268) = v6;
  }
}
