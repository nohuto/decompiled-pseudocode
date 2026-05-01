/*
 * XREFs of ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18003DF10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x180038D10 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 *     ??_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z @ 0x18003DDE8 (--_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z.c)
 */

ExecutionModel::TerminalSetRevokeData *__fastcall ExecutionModel::TerminalResourceSetCallback::RecvCallback(
        __int64 a1,
        __int64 a2,
        ExecutionModel::TerminalSetRevokeData *a3)
{
  __int64 v3; // rdi
  ExecutionModel::ResourceSet *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  char v8; // r14
  const WCHAR *v9; // r15
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r11
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v20; // [rsp+30h] [rbp-A9h] BYREF
  int v21; // [rsp+34h] [rbp-A5h] BYREF
  __int64 v22; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-99h] BYREF
  __int64 v24; // [rsp+48h] [rbp-91h] BYREF
  __int64 v25; // [rsp+50h] [rbp-89h] BYREF
  ExecutionModel::TerminalSetRevokeData *v26; // [rsp+58h] [rbp-81h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-79h] BYREF
  int *v28; // [rsp+80h] [rbp-59h]
  __int64 v29; // [rsp+88h] [rbp-51h]
  __int64 *v30; // [rsp+90h] [rbp-49h]
  __int64 v31; // [rsp+98h] [rbp-41h]
  int *v32; // [rsp+A0h] [rbp-39h]
  __int64 v33; // [rsp+A8h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-29h] BYREF
  unsigned int *v35; // [rsp+C0h] [rbp-19h]
  __int64 v36; // [rsp+C8h] [rbp-11h]
  __int64 *v37; // [rsp+D0h] [rbp-9h]
  __int64 v38; // [rsp+D8h] [rbp-1h]
  __int64 *v39; // [rsp+E0h] [rbp+7h]
  __int64 v40; // [rsp+E8h] [rbp+Fh]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(ExecutionModel::ResourceSet **)a3;
  v22 = a1;
  v26 = a3;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 1368) + 64LL))(v3 + 1368);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 1;
  v21 = v6;
  v9 = *(const WCHAR **)(v7 + 32);
  v10 = *(_DWORD *)(v7 + 132);
  v11 = *(_DWORD *)(v7 + 136);
  v24 = *(_QWORD *)(v7 + 144);
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v5 + 171) + 88LL))((_QWORD *)v5 + 171) )
  {
    v20 = ExecutionModel::ResourceSet::ReleaseResourcesForceOptionally(v5, 1);
LABEL_9:
    RtlLeaveCriticalSection(&RmpGlobalLock);
    goto LABEL_10;
  }
  if ( ExecutionModel::ResourceSet::IsLegacy(v5) )
  {
    v12 = *((_QWORD *)v5 + 175);
    if ( !v12 )
    {
      v20 = 0;
      goto LABEL_9;
    }
    NtTerminateJobObject(*(HANDLE *)(v12 + 704), -1073741756);
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v8 = 0;
    ExecutionModel::ResourceManager::TerminateModernHost(v9, v10, v11, v24);
  }
  v20 = 0;
  if ( v8 )
    goto LABEL_9;
LABEL_10:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v13, 9uLL) )
  {
    v29 = v14;
    v28 = &v20;
    v31 = 8LL;
    v33 = v14;
    v25 = *(_QWORD *)(v22 + 8);
    v30 = &v25;
    v32 = &v21;
    TlgCreateWsz(&pDesc, v9);
    v23 = v10;
    v35 = &v23;
    v37 = &v22;
    v39 = &v24;
    v36 = v15;
    LODWORD(v22) = v11;
    v38 = v15;
    v40 = 8LL;
    TlgWrite(v16, &unk_18005C095, v17, v18, 9u, &pData);
  }
  return ExecutionModel::TerminalSetRevokeData::`scalar deleting destructor'(v26);
}
