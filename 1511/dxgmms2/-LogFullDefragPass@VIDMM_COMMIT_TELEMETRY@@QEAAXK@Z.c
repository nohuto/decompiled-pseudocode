/*
 * XREFs of ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C0086F2C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C0086B2C (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0087210 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C0087658 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(struct VIDMM_ALLOC **this, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r9
  struct VIDMM_ALLOC *v6; // rax
  unsigned __int16 *v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  _DWORD *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 v20; // [rsp+90h] [rbp+27h]
  _DWORD v21[2]; // [rsp+98h] [rbp+2Fh] BYREF
  int *v22; // [rsp+A0h] [rbp+37h]
  int v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  if ( *((_BYTE *)this + 24) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C002F020 > 5 )
    {
      if ( TlgKeywordOn(v4, 0x200000000000uLL) )
      {
        v16 = 0;
        v14 = &v11;
        v6 = *this;
        v11 = 1;
        v15 = 4;
        v7 = *(unsigned __int16 **)(*((_QWORD *)v6 + 3) + 984LL);
        v19 = 0;
        v17 = v21;
        v18 = 2;
        v8 = (const struct _TlgProvider_t *)*v7;
        v9 = *((_QWORD *)v7 + 1);
        v21[1] = 0;
        v24 = 0;
        v20 = v9;
        v22 = &v10;
        v21[0] = (_DWORD)v8;
        v10 = a2;
        v23 = 4;
        TlgWrite(v8, &unk_1C0025A03, &ActivityId, v5, 6u, &pData);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((VIDMM_COMMIT_TELEMETRY *)this, this[2], 0, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((VIDMM_COMMIT_TELEMETRY *)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (VIDMM_COMMIT_TELEMETRY *)this,
      *((struct VIDMM_PROCESS_ADAPTER_INFO **)this[1] + 2),
      &ActivityId);
  }
}
