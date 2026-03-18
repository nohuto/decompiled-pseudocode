/*
 * XREFs of ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0073750
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C0072B54 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00730D8 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00734F8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(VIDMM_COMMIT_TELEMETRY *this, char a2)
{
  ULONGLONG v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r9
  unsigned __int16 *v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rax
  GUID ActivityId; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  _DWORD *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  __int64 v15; // [rsp+70h] [rbp+37h]
  _DWORD v16[2]; // [rsp+78h] [rbp+3Fh] BYREF

  if ( *((_BYTE *)this + 24) && _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 224LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0027010 > 5 )
    {
      if ( TlgKeywordOn(v5, v4) )
      {
        v7 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 976LL);
        v14 = 0;
        v12 = v16;
        v13 = 2;
        v8 = (const struct _TlgProvider_t *)*v7;
        v9 = *((_QWORD *)v7 + 1);
        v16[1] = 0;
        v15 = v9;
        v16[0] = (_DWORD)v8;
        TlgWrite(v8, &unk_1C0020893, &ActivityId, v6, 4u, &pData);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(this, *((_QWORD *)this + 2), a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((const struct _TlgProvider_t **)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (const struct _TlgProvider_t **)this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
