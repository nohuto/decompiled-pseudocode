/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x180029750
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z @ 0x18000218C (-RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18002CFF4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(void *a1, unsigned __int64 a2, unsigned int *a3)
{
  BOOL v5; // eax
  unsigned int v6; // ecx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  if ( a3 )
  {
    v11 = RmpQueryRpcClientInformation(a1, 0LL, a3, &v12, &v13);
    LODWORD(v7) = v11;
    if ( v11 >= 0 )
    {
      v5 = RmSrvHostTrySetCommitTargetForPple((struct _RM_SERVICE_GLOBALS *)(unsigned int)v11, v13, v12, a2) >= 0;
      v6 = 0;
    }
    else
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v11, 9uLL) )
      {
        v17 = 0;
        v15 = &v11;
        v16 = 4;
        TlgWrite(v7, &unk_18003F13B, v8, v9, 3u, &pData);
        LODWORD(v7) = v11;
      }
      v5 = 0;
      v6 = (unsigned int)v7 | 0x10000000;
    }
  }
  else
  {
    v5 = 0;
    v6 = -2147024809;
  }
  *a3 = v5;
  return v6;
}
