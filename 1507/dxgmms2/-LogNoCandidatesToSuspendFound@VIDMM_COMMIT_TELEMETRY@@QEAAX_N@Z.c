/*
 * XREFs of ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00733B8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0011DE4 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 *     ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0072ACC (-LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C0072B54 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00730D8 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(VIDMM_COMMIT_TELEMETRY *this, char a2)
{
  ULONGLONG v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  const CHAR *ProcessImageFileName; // rax
  const struct _TlgProvider_t *v11; // rcx
  LPCGUID v12; // r9
  const struct _TlgProvider_t *v13; // [rsp+30h] [rbp-39h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  __int64 v19; // [rsp+80h] [rbp+17h]
  _DWORD v20[2]; // [rsp+88h] [rbp+1Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  const struct _TlgProvider_t **v22; // [rsp+A0h] [rbp+37h]
  int v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  if ( *((_BYTE *)this + 24) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0027010 > 5 )
    {
      if ( TlgKeywordOn(v5, v4) )
      {
        v6 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 976LL);
        v18 = 0;
        v16 = v20;
        v17 = 2;
        v7 = *v6;
        v8 = *((_QWORD *)v6 + 1);
        v20[1] = 0;
        v19 = v8;
        v9 = *((_QWORD *)this + 1);
        v20[0] = v7;
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v9 + 8));
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v11 = **(const struct _TlgProvider_t ***)(*((_QWORD *)this + 1) + 8LL);
        v24 = 0;
        v22 = &v13;
        v13 = v11;
        v23 = 8;
        TlgWrite(v11, &unk_1C0020780, &ActivityId, v12, 6u, &pData);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(this, *((_QWORD *)this + 2), a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((const struct _TlgProvider_t **)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogAllProcesses(this, &ActivityId);
  }
}
