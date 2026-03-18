/*
 * XREFs of ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0067C00
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C00207A0 (_TlgWrite.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C006790C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00679D0 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0067B78 (-LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-9h]
  _DWORD v22[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+ACh] [rbp+13h]
  __int64 *v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B8h] [rbp+1Fh]
  int v28; // [rsp+BCh] [rbp+23h]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C8h] [rbp+2Fh]
  int v31; // [rsp+CCh] [rbp+33h]
  __int64 *v32; // [rsp+D0h] [rbp+37h]
  int v33; // [rsp+D8h] [rbp+3Fh]
  int v34; // [rsp+DCh] [rbp+43h]

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 252LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)hProvider > 5
      && (qword_1C0035010 & 0x400000000008LL) != 0
      && (qword_1C0035018 & 0x400000000008LL) == qword_1C0035018 )
    {
      v4 = *((_QWORD *)a2 + 18);
      v5 = *((_QWORD *)a2 + 17);
      v6 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1072LL);
      v20 = 0;
      v18 = v22;
      v19 = 2;
      v7 = *v6;
      v8 = *((_QWORD *)v6 + 1);
      v22[1] = 0;
      v21 = v8;
      v9 = *((_QWORD *)this + 1);
      v22[0] = v7;
      v10 = **(_QWORD **)(v9 + 8);
      v11 = *((_QWORD *)a2 + 19);
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v12 = v10;
      v23 = &v12;
      v24 = 8;
      v13 = v4 - v5;
      v26 = &v13;
      v27 = 8;
      v14 = v11 - v4;
      v34 = 0;
      v29 = &v14;
      v32 = &v15;
      v30 = 8;
      v15 = v11 - v5;
      v33 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002A929, &ActivityId, (LPCGUID)8, 8u, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogAllProcesses(this, &ActivityId);
  }
}
