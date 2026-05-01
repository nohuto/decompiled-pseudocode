/*
 * XREFs of ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030F20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800301B0 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

void __fastcall RmpGameModeReleaseCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_CPU_SET_ALLOCATION **a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // eax
  int v11; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+64h] [rbp-24h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpCpuSetManagerReleaseAllocation(a2[12], v3, v4, v5);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  a2[12] = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v6, 1uLL) )
    {
      v10 = *((_DWORD *)a2 + 14);
      v15 = 0;
      v11 = v10;
      v13 = &v11;
      v14 = 4;
      TlgWrite(v7, &unk_180041FAE, v8, v9, 3u, &pData);
    }
  }
}
