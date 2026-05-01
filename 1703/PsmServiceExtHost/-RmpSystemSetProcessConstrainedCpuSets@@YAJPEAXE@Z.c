/*
 * XREFs of ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180037EE8
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800311E0 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031780 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetProcessConstrainedCpuSets(HANDLE Process, char a2)
{
  const struct _TlgProvider_t *v3; // rcx
  unsigned int v4; // r8d
  DWORD ProcessId; // eax
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  char ProcessInformation[8]; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-21h] BYREF
  DWORD v12; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  DWORD *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  char *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  ProcessInformation[0] = a2;
  v4 = NtSetInformationProcess(Process, (PROCESSINFOCLASS)80, ProcessInformation, 1u);
  v11 = v4;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v3, 1uLL) )
  {
    v16 = 0;
    v14 = &v11;
    v15 = 4;
    ProcessId = GetProcessId(Process);
    v19 = 0;
    v22 = 0;
    v12 = ProcessId;
    v17 = &v12;
    v20 = ProcessInformation;
    v18 = 4;
    v21 = 1;
    TlgWrite(v6, &unk_18004459A, v7, v8, 5u, &pData);
    return v11;
  }
  return v4;
}
