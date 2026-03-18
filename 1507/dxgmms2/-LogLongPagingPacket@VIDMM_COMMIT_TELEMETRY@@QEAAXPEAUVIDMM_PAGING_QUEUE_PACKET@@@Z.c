/*
 * XREFs of ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0072F38
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 *     ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0072ACC (-LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00730D8 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00734F8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  ULONGLONG v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int16 *v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  __int64 v23; // [rsp+90h] [rbp-9h]
  _DWORD v24[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]
  __int64 *v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+BCh] [rbp+23h]
  __int64 *v31; // [rsp+C0h] [rbp+27h]
  int v32; // [rsp+C8h] [rbp+2Fh]
  int v33; // [rsp+CCh] [rbp+33h]
  __int64 *v34; // [rsp+D0h] [rbp+37h]
  int v35; // [rsp+D8h] [rbp+3Fh]
  int v36; // [rsp+DCh] [rbp+43h]

  if ( *((_BYTE *)this + 24) && _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 228LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0027010 > 5 )
    {
      if ( TlgKeywordOn(v5, v4) )
      {
        v6 = *((_QWORD *)a2 + 17);
        v7 = *((_QWORD *)a2 + 16);
        v8 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 976LL);
        v22 = 0;
        v20 = v24;
        v21 = 2;
        v9 = *v8;
        v10 = *((_QWORD *)v8 + 1);
        v24[1] = 0;
        v23 = v10;
        v11 = *((_QWORD *)this + 1);
        v24[0] = v9;
        v12 = **(_QWORD **)(v11 + 8);
        v13 = *((_QWORD *)a2 + 18);
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v17 = v12;
        v25 = &v17;
        v26 = 8;
        v16 = v6 - v7;
        v28 = &v16;
        v29 = 8;
        v14 = v13 - v6;
        v36 = 0;
        v31 = &v14;
        v34 = &v15;
        v32 = 8;
        v15 = v13 - v7;
        v35 = 8;
        TlgWrite((TraceLoggingHProvider)(v13 - v7), &unk_1C0020709, &ActivityId, (LPCGUID)8, 8u, &pData);
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
