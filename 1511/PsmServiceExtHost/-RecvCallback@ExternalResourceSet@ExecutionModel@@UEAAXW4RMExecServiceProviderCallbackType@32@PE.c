/*
 * XREFs of ?RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180044FC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18003C414 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180044AB8 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

int __fastcall ExecutionModel::ExternalResourceSet::RecvCallback(__int64 a1)
{
  DWORD v2; // edi
  DWORD v3; // esi
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  HANDLE v7; // rax
  void *v8; // rbx
  DWORD v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  DWORD *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  v2 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *(_DWORD *)(a1 - 16) )
  {
    v3 = *(_DWORD *)(a1 - 1360);
    if ( !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v3) )
      v2 = v3;
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
    {
      v15 = 0;
      v18 = 0;
      v11 = a1 - 1368;
      v13 = &v11;
      v16 = &v10;
      v14 = 8;
      v10 = v3;
      v17 = (int)cData;
      TlgWrite(cData, &unk_180063F41, v5, v6, (UINT32)cData, &pData);
    }
  }
  *(_QWORD *)(a1 + 96) = 0LL;
  LODWORD(v7) = RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 25) == 1 )
    {
      RtlEnterCriticalSection(&RmpGlobalLock);
      ExecutionModel::ResourceManager::ForceReleaseExternalResources(
        *(ExecutionModel::ResourceManager **)(a1 - 1344),
        v2);
      LODWORD(v7) = RtlLeaveCriticalSection(&RmpGlobalLock);
    }
    else
    {
      v7 = OpenProcess(0x1FFFFFu, 0, v2);
      v8 = v7;
      if ( v7 )
      {
        TerminateProcess(v7, 0x80004004);
        LODWORD(v7) = CloseHandle(v8);
      }
    }
  }
  return (int)v7;
}
