/*
 * XREFs of ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031780
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800302FC (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180037EE8 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180037FC8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 */

void __fastcall RmpGameModeUnapplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]

  if ( (*((_BYTE *)a2 + 92) & 0x10) != 0 )
    v7 = RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 0);
  if ( (*((_BYTE *)a2 + 92) & 4) != 0 )
    v7 = RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpCpuSetManagerReleaseProcessRegistrationEx(
    (struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 648LL),
    *((struct _RM_CPU_SET_PROCESS_REGISTRATION **)a2 + 13),
    1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *((_QWORD *)a2 + 13) = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(0LL, 1uLL) )
    {
      v11 = 4LL;
      v10 = &v7;
      v8 = *((_DWORD *)a2 + 14);
      v12 = &v8;
      v13 = 4LL;
      TlgWrite(v4, &unk_1800423DB, v5, v6, 4u, &pData);
    }
  }
}
