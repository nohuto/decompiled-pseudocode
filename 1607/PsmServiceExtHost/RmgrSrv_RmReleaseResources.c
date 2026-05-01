/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x18001A790
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18000DC0C (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(const struct _TlgProvider_t *a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  struct ExecutionModel::ResourceHandle__ *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-50h] BYREF
  struct ExecutionModel::ResourceHandle__ *v11; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  v10 = 0;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v4 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    v15 = 0;
    v11 = v4;
    v13 = (int *)&v11;
    v14 = 8;
    TlgWrite(a1, &unk_18003ECC2, v2, v3, 3u, &pData);
  }
  if ( a1 )
  {
    v5 = ExecutionModel::ResourceManager::RmReleaseResources(a1, *(struct ExecutionModel::ResourceHandle__ **)a1);
    v6 = v5;
    v10 = v5;
  }
  else
  {
    v6 = 2147942414LL;
    v10 = -2147024882;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v6, 2uLL) )
  {
    v15 = 0;
    v13 = &v10;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)v6, &unk_18003E9B7, v7, v8, 3u, &pData);
    LODWORD(v6) = v10;
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return (unsigned int)v6;
}
