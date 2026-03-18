/*
 * XREFs of ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00878B8
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

void __fastcall VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(struct VIDMM_ALLOC **this, char a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r9
  unsigned __int16 *v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rax
  GUID ActivityId; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 v14; // [rsp+70h] [rbp+37h]
  _DWORD v15[2]; // [rsp+78h] [rbp+3Fh] BYREF

  if ( *((_BYTE *)this + 24) && _InterlockedIncrement((volatile signed __int32 *)this[1] + 56) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C002F020 > 5 )
    {
      if ( TlgKeywordOn(v4, 0x400000000000uLL) )
      {
        v6 = *(unsigned __int16 **)(*((_QWORD *)*this + 3) + 984LL);
        v13 = 0;
        v11 = v15;
        v12 = 2;
        v7 = (const struct _TlgProvider_t *)*v6;
        v8 = *((_QWORD *)v6 + 1);
        v15[1] = 0;
        v14 = v8;
        v15[0] = (_DWORD)v7;
        TlgWrite(v7, &unk_1C0025A53, &ActivityId, v5, 4u, &pData);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((VIDMM_COMMIT_TELEMETRY *)this, this[2], a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *((struct VIDMM_PROCESS_ADAPTER_INFO **)this[1] + 2),
      &ActivityId);
  }
}
