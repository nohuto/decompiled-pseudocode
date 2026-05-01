/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F750
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F6DC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18001F804 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  __int16 v16; // dx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  __int16 *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  _OWORD *v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  _OWORD SystemInformation[10]; // [rsp+A0h] [rbp-60h] BYREF

  if ( *((_DWORD *)a1 + 110) >= *((_DWORD *)a1 + 109) && *((_DWORD *)a1 + 108) == -1 )
  {
    v20 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v1, 1uLL) )
    {
      v25 = 0;
      v23 = &v20;
      v24 = 4;
      TlgWrite(v2, &unk_180041DE2, v3, v4, 3u, &pData);
    }
  }
  else
  {
    v6 = *(_OWORD *)((char *)a1 + 264);
    SystemInformation[0] = *(_OWORD *)((char *)a1 + 248);
    v7 = *(_OWORD *)((char *)a1 + 280);
    SystemInformation[1] = v6;
    v8 = *(_OWORD *)((char *)a1 + 296);
    SystemInformation[2] = v7;
    v9 = *(_OWORD *)((char *)a1 + 312);
    SystemInformation[3] = v8;
    v10 = *(_OWORD *)((char *)a1 + 328);
    SystemInformation[4] = v9;
    v11 = *(_OWORD *)((char *)a1 + 344);
    SystemInformation[5] = v10;
    v12 = *(_OWORD *)((char *)a1 + 376);
    SystemInformation[6] = v11;
    SystemInformation[7] = *(_OWORD *)((char *)a1 + 360);
    v13 = *(_OWORD *)((char *)a1 + 392);
    v14 = *((_DWORD *)a1 + 108);
    SystemInformation[8] = v12;
    SystemInformation[9] = v13;
    if ( v14 != -1 )
      *((_QWORD *)SystemInformation + ((unsigned __int64)(unsigned int)(v14 - 256) >> 16)) &= ~(1LL << v14);
    v20 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v15, 1uLL) )
    {
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v23 = &v20;
      v21 = v16 + 19;
      v26 = &v21;
      v29 = SystemInformation;
      v24 = 4;
      v27 = 2;
      v30 = 160;
      TlgWrite(v17, &unk_180041EEC, v18, v19, 5u, &pData);
    }
  }
  return v20;
}
