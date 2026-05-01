/*
 * XREFs of RmpSystemSetProcessHighGraphicsPriority @ 0x180037ED4
 * Callers:
 *     ?RmpGameModeTryApplyHighGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180031E20 (-RmpGameModeTryApplyHighGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPI.c)
 *     ?RmpGameModeUnapplyHighGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x1800320A0 (-RmpGameModeUnapplyHighGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIE.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetProcessHighGraphicsPriority(HANDLE Process, char a2)
{
  const struct _TlgProvider_t *v3; // rcx
  unsigned int v4; // r8d
  DWORD ProcessId; // eax
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  char ProcessInformation[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-11h] BYREF
  DWORD v12; // [rsp+3Ch] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  DWORD *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]
  char *v20; // [rsp+80h] [rbp+37h]
  int v21; // [rsp+88h] [rbp+3Fh]
  int v22; // [rsp+8Ch] [rbp+43h]

  ProcessInformation[0] = a2;
  v4 = NtSetInformationProcess(Process, ProcessLdtInformation|0x40, ProcessInformation, 1u);
  v11 = v4;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v3, 1uLL) )
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
    TlgWrite(v6, &unk_1800435AF, v7, v8, 5u, &pData);
    return v11;
  }
  return v4;
}
