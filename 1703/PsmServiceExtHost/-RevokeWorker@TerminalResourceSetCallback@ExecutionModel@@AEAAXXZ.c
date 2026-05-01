/*
 * XREFs of ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180035350
 * Callers:
 *     ?RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180035480 (-RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003809C (-RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall ExecutionModel::TerminalResourceSetCallback::RevokeWorker(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  const struct _TlgProvider_t *v4; // rcx
  unsigned int v5; // edx
  int v6; // edx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  __int64 *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]

  v1 = *((_QWORD *)this + 1);
  v10 = -1LL;
  v3 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *(_BYTE *)(v1 + 12) )
  {
    v3 = *(_QWORD *)(v1 + 1392);
    RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v3);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v10 = *(_QWORD *)(v3 + 24);
    RmpSystemTerminateHost((struct _RM_ACTIVITY_HOST *)v3, v5);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, 0LL);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( v3 )
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v3);
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v4, 9uLL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 1840LL);
      v15 = 0;
      v18 = 0;
      v13 = &v11;
      v11 = v9;
      v16 = &v10;
      v14 = v6 - 1;
      v17 = v6 - 1;
      TlgWrite((TraceLoggingHProvider)(unsigned int)(v6 - 1), &unk_180043510, v7, v8, 4u, &pData);
    }
  }
}
