/*
 * XREFs of ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0087068
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0086AA4 (-LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0087210 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C0087658 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int16 *v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v19; // [rsp+80h] [rbp-19h]
  int v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+8Ch] [rbp-Dh]
  __int64 v22; // [rsp+90h] [rbp-9h]
  _DWORD v23[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  __int64 *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  __int64 *v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C8h] [rbp+2Fh]
  int v32; // [rsp+CCh] [rbp+33h]
  __int64 *v33; // [rsp+D0h] [rbp+37h]
  int v34; // [rsp+D8h] [rbp+3Fh]
  int v35; // [rsp+DCh] [rbp+43h]

  if ( *((_BYTE *)this + 24) && _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 228LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C002F020 > 5 )
    {
      if ( TlgKeywordOn(v4, 0x400000000000uLL) )
      {
        v5 = *((_QWORD *)a2 + 17);
        v6 = *((_QWORD *)a2 + 16);
        v7 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 984LL);
        v21 = 0;
        v19 = v23;
        v20 = 2;
        v8 = *v7;
        v9 = *((_QWORD *)v7 + 1);
        v23[1] = 0;
        v22 = v9;
        v10 = *((_QWORD *)this + 1);
        v23[0] = v8;
        v11 = **(_QWORD **)(v10 + 8);
        v12 = *((_QWORD *)a2 + 18);
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v16 = v11;
        v24 = &v16;
        v25 = 8;
        v15 = v5 - v6;
        v27 = &v15;
        v28 = 8;
        v13 = v12 - v5;
        v35 = 0;
        v30 = &v13;
        v33 = &v14;
        v31 = 8;
        v14 = v12 - v6;
        v34 = 8;
        TlgWrite((TraceLoggingHProvider)(v12 - v6), &unk_1C0025879, &ActivityId, (LPCGUID)8, 8u, &pData);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogAllProcesses(this, &ActivityId);
  }
}
