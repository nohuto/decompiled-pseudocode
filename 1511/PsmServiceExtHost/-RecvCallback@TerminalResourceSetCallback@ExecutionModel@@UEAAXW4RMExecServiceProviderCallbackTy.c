/*
 * XREFs of ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800434E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x18003E2B8 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 *     ??_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z @ 0x18004333C (--_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z.c)
 */

ExecutionModel::TerminalSetRevokeData *__fastcall ExecutionModel::TerminalResourceSetCallback::RecvCallback(
        __int64 a1,
        __int64 a2,
        ExecutionModel::TerminalSetRevokeData *a3)
{
  __int64 v3; // rdi
  ExecutionModel::ResourceSet *v5; // rsi
  int v7; // eax
  __int64 v8; // rcx
  const WCHAR *v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 cData; // r10
  TraceLoggingHProvider v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v21; // [rsp+30h] [rbp-99h] BYREF
  __int64 v22; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-89h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h] BYREF
  __int64 v25; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v27; // [rsp+80h] [rbp-49h]
  __int64 v28; // [rsp+88h] [rbp-41h]
  int *v29; // [rsp+90h] [rbp-39h]
  __int64 v30; // [rsp+98h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int *v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  __int64 *v36; // [rsp+D0h] [rbp+7h]
  __int64 v37; // [rsp+D8h] [rbp+Fh]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(ExecutionModel::ResourceSet **)a3;
  v22 = a1;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 1368) + 64LL))(v3 + 1368);
  v8 = *(_QWORD *)(a1 + 8);
  v21 = v7;
  v9 = *(const WCHAR **)(v8 + 32);
  v10 = *(_DWORD *)(v8 + 132);
  v11 = *(_DWORD *)(v8 + 136);
  v24 = *(_QWORD *)(v8 + 144);
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v5 + 171) + 88LL))((_QWORD *)v5 + 171) )
  {
    if ( !ExecutionModel::ResourceSet::IsLegacy(v5) )
    {
      RtlLeaveCriticalSection(&RmpGlobalLock);
      ExecutionModel::ResourceManager::TerminateModernHost(v9, v10, v11, v24);
      goto LABEL_8;
    }
    v12 = *((_QWORD *)v5 + 175);
    if ( v12 )
      NtTerminateJobObject(*(HANDLE *)(v12 + 712), -1073741756);
  }
  else
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, 0LL);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
LABEL_8:
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v13, 9uLL) )
  {
    v28 = (unsigned int)(v14 + 4);
    v30 = v14;
    v25 = *(_QWORD *)(v22 + 8);
    v27 = &v25;
    v29 = &v21;
    TlgCreateWsz(&pDesc, v9);
    v23 = v10;
    v32 = &v23;
    v34 = &v22;
    v36 = &v24;
    v33 = v15;
    LODWORD(v22) = v11;
    v35 = v15;
    v37 = cData;
    TlgWrite(v17, &unk_180063CA2, v18, v19, cData, &pData);
  }
  return ExecutionModel::TerminalSetRevokeData::`scalar deleting destructor'(a3);
}
