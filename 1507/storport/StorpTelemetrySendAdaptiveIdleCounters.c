/*
 * XREFs of StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0038368
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0037550 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C002B920 (RaidUnitGetMinimumPowerCyclePeriod.c)
 */

void __fastcall StorpTelemetrySendAdaptiveIdleCounters(__int64 a1)
{
  int v2; // ecx
  signed __int64 v3; // rcx
  const GUID *v4; // r9
  int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  int *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL);
    if ( (v2 & 0x80u) != 0 && (v2 & 0x100) != 0 )
    {
      RaidUnitGetMinimumPowerCyclePeriod(a1);
      v18 = MEMORY[0xFFFFF78000000014];
      v3 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2328);
      if ( v3 > 0 )
        v3 = (unsigned __int64)((unsigned __int128)(v3 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
      if ( (unsigned int)dword_1C0044050 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)v3, 0x400000000000uLL) )
        {
          v6 = *(_QWORD *)(a1 + 24);
          v7 = *(_QWORD *)(a1 + 1440);
          v8 = *(_DWORD *)(v6 + 56);
          v10 = *(_BYTE *)(a1 + 88);
          v9 = *(_BYTE *)(a1 + 89);
          v11 = *(_BYTE *)(a1 + 90);
          v17 = v8;
          v14 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 12LL);
          v12 = *(_DWORD *)(v7 + 24);
          v16 = *(_DWORD *)(a1 + 2320);
          v20 = v6 + 5412;
          v22 = a1 + 1672;
          v24 = &v17;
          v26 = &v10;
          v28 = &v9;
          v30 = &v11;
          v32 = &v14;
          v34 = &v12;
          v36 = &v16;
          v38 = &v13;
          v40 = &v15;
          v13 = v5;
          v15 = (int)v4;
          v21 = 16LL;
          v23 = 16LL;
          v25 = 4LL;
          v27 = 1LL;
          v29 = 1LL;
          v31 = 1LL;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          TlgWrite((TraceLoggingHProvider)v14, &unk_1C003DA0E, (LPCGUID)v6, v4, 0xDu, &pData);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
  }
}
