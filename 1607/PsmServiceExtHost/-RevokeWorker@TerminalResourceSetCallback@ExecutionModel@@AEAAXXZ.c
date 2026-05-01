/*
 * XREFs of ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180037304
 * Callers:
 *     ?RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180037460 (-RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpSystemTerminateHost @ 0x180037FB8 (RmpSystemTerminateHost.c)
 */

void __fastcall ExecutionModel::TerminalResourceSetCallback::RevokeWorker(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rax
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  __int64 v8; // [rsp+38h] [rbp-9h] BYREF
  __int64 v9; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  __int64 *v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  v8 = -1LL;
  v3 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v1[171] + 88LL))(v1 + 171) )
  {
    v3 = v1[175];
    RmpObjectAddRef(v3);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v8 = *(_QWORD *)(v3 + 24);
    RmpSystemTerminateHost(v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1 + 32LL))(v1, 0LL);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( v3 )
    RmpObjectRelease((volatile signed __int32 *)v3);
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v4, 9uLL) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 1368LL) + 64LL))(*((_QWORD *)this + 1) + 1368LL);
      v13 = 0;
      v16 = 0;
      v9 = v5;
      v11 = &v9;
      v14 = &v8;
      v12 = 8;
      v15 = 8;
      TlgWrite((TraceLoggingHProvider)8, &unk_180043085, v6, v7, 4u, &pData);
    }
  }
}
