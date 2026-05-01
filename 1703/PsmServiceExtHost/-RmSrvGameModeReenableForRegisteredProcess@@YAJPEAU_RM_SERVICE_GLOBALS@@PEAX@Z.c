/*
 * XREFs of ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x18002CB64
 * Callers:
 *     RmGameModeSrvReenableForRegisteredProcess @ 0x18002D6B0 (RmGameModeSrvReenableForRegisteredProcess.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180030D54 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 */

__int64 __fastcall RmSrvGameModeReenableForRegisteredProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  struct _RM_SERVICE_GLOBALS *v3; // rdi
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  unsigned int v8; // r8d
  DWORD ProcessId; // eax
  TraceLoggingHProvider v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-39h] BYREF
  DWORD v15; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-29h] BYREF
  unsigned int *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  DWORD *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+27h] BYREF

  v3 = RmSvcGlobals;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v4, &unk_180040593, v5, v6, 2u, &pData);
  v8 = RmpGameModeReenableForRegisteredProcess((struct _RM_SERVICE_GLOBALS *)((char *)v3 + 1104), a2);
  v14 = v8;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v7, 9uLL) )
  {
    v19 = 0;
    v17 = &v14;
    v18 = 4;
    ProcessId = GetProcessId(a2);
    v22 = 0;
    v15 = ProcessId;
    v20 = &v15;
    v21 = 4;
    TlgWrite(v10, &unk_180040AA4, v11, v12, 4u, &v16);
    return v14;
  }
  return v8;
}
