/*
 * XREFs of PopEsUpdateState @ 0x14058201C
 * Callers:
 *     PopEsWorker @ 0x140581C48 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsState @ 0x1401480C0 (PopTraceEsState.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceEsState @ 0x14023DCF4 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x1404E965C (PopCurrentPowerState.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 */

char __fastcall PopEsUpdateState(char a1)
{
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  __int64 v6; // rbp
  char v8; // [rsp+40h] [rbp-28h] BYREF
  char v9; // [rsp+41h] [rbp-27h]
  unsigned int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  int Buffer; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+7Ch] [rbp+14h]

  PopCurrentPowerState((bool *)&v8);
  LOBYTE(v2) = PopEsMode;
  v3 = 0;
  v4 = 0;
  if ( PopEsMode == 1 )
  {
    v3 = 1;
    v4 = 1;
  }
  else if ( PopEsMode == 2 )
  {
    if ( dword_14032E890 )
    {
      if ( v9 )
      {
        if ( v10 )
        {
          v2 = 100 * v11 / v10;
          if ( v2 <= dword_14032E890 )
          {
            v3 = 1;
            v4 = 2;
          }
        }
      }
    }
  }
  if ( a1 || v3 != PopEsState || v4 != PopEsReason )
  {
    PopDiagTraceEsState();
    v5 = 0;
    v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    if ( v9 )
      v5 = v11;
    if ( PopEsLastStateChangeTimeStamp )
      PopTraceEsState();
    PopEsAcOnline = v8;
    PopEsLastBatteryThreshold = dword_14032E890;
    LOBYTE(v2) = byte_14032E894;
    PopEsLastUserAwaySetting = byte_14032E894;
    PopEsLastStateChangeTimeStamp = v6;
    PopEsLastBatteryCharge = v5;
    if ( v3 != PopEsState )
    {
      v13 = -1;
      PopEsState = v3;
      Buffer = Buffer & 0x800000 | 1 | (2 * (v3 == 1));
      ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
      LOBYTE(v2) = PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
    }
    PopEsReason = v4;
  }
  return v2;
}
