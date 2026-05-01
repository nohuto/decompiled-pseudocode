/*
 * XREFs of RmpActivityHostSetStoreHighMemoryPriority @ 0x180023A0C
 * Callers:
 *     RmpActivityHostOnImportanceChange @ 0x18000D0E0 (RmpActivityHostOnImportanceChange.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriority(__int64 a1, __int64 a2, unsigned int a3)
{
  const GUID *v4; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v6; // r8
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  v8 = RmpActivityHostActOnProcesses(
         (struct _RM_ACTIVITY_HOST *)a1,
         0x2000,
         a3,
         (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
         0LL);
  LODWORD(v4) = v8;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v9 = *(_QWORD *)(a1 + 24);
    v14 = &v9;
    v12 = (int)cData;
    v15 = 8;
    TlgWrite(cData, &unk_18005CD19, v6, v4, (UINT32)cData, &pData);
    LODWORD(v4) = v8;
  }
  return (unsigned int)v4;
}
