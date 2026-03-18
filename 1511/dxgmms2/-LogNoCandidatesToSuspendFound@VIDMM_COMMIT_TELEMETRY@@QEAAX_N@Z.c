/*
 * XREFs of ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0087510
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0086AA4 (-LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C0086B2C (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0087210 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(VIDMM_COMMIT_TELEMETRY *this, char a2)
{
  const struct _TlgProvider_t *v4; // rcx
  unsigned __int16 *v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  const CHAR *ProcessImageFileName; // rax
  const struct _TlgProvider_t *v10; // rcx
  LPCGUID v11; // r9
  const struct _TlgProvider_t *v12; // [rsp+30h] [rbp-39h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  __int64 v18; // [rsp+80h] [rbp+17h]
  _DWORD v19[2]; // [rsp+88h] [rbp+1Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  const struct _TlgProvider_t **v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  if ( *((_BYTE *)this + 24) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C002F020 > 5 )
    {
      if ( TlgKeywordOn(v4, 0x400000000000uLL) )
      {
        v5 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 984LL);
        v17 = 0;
        v15 = v19;
        v16 = 2;
        v6 = *v5;
        v7 = *((_QWORD *)v5 + 1);
        v19[1] = 0;
        v18 = v7;
        v8 = *((_QWORD *)this + 1);
        v19[0] = v6;
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v8 + 8));
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v10 = **(const struct _TlgProvider_t ***)(*((_QWORD *)this + 1) + 8LL);
        v23 = 0;
        v21 = &v12;
        v12 = v10;
        v22 = 8;
        TlgWrite(v10, &unk_1C00258F0, &ActivityId, v11, 6u, &pData);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(this, *((struct VIDMM_ALLOC **)this + 2), a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((const struct _TlgProvider_t **)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogAllProcesses(this, &ActivityId);
  }
}
