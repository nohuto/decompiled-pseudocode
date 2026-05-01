/*
 * XREFs of RmpActivityHostSetStoreHighMemoryPriority @ 0x180003804
 * Callers:
 *     RmpActivityHostNewProcessNotification @ 0x180003578 (RmpActivityHostNewProcessNotification.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriority(__int64 a1)
{
  const GUID *v2; // r8
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v4; // r9
  int v6; // [rsp+30h] [rbp-9h] BYREF
  __int64 v7; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int64 *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v6 = RmpActivityHostActOnProcesses((struct _RM_ACTIVITY_HOST *)a1, 0LL);
  LODWORD(v2) = v6;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v6;
    v7 = *(_QWORD *)(a1 + 24);
    v12 = &v7;
    v10 = (int)cData;
    v13 = 8;
    TlgWrite(cData, &unk_180043466, v2, v4, (UINT32)cData, &pData);
    LODWORD(v2) = v6;
  }
  return (unsigned int)v2;
}
