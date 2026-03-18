/*
 * XREFs of EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000DBB0
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00EFF58 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 *     ?FindMonitorSourceMode@@YA_KPEAU_VideoModeDescriptor@@_K0@Z @ 0x1C000DF20 (-FindMonitorSourceMode@@YA_KPEAU_VideoModeDescriptor@@_K0@Z.c)
 *     ?EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIMING@@EW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000DF54 (-EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIM.c)
 *     ?EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@1@Z @ 0x1C000E4A8 (-EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STA.c)
 *     ?EDID_V1_PopulateSupportedMonitorSourceModeFromDetailedTimingBlock@@YAJPEBU_EDID_V1_DETAILED_TIMING@@W4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAU_VideoModeDescriptor@@@Z @ 0x1C000E5E0 (-EDID_V1_PopulateSupportedMonitorSourceModeFromDetailedTimingBlock@@YAJPEBU_EDID_V1_DETAILED_TIM.c)
 *     ?EDID_V1_PopulateSupportedMonitorSourceModesFromEstablishedTimingsBlock@@YAJPEBT_EDID_V1_ESTABLISHED_TIMING@@GG_KW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAU_VideoModeDescriptor@@@Z @ 0x1C000E8F4 (-EDID_V1_PopulateSupportedMonitorSourceModesFromEstablishedTimingsBlock@@YAJPEBT_EDID_V1_ESTABLI.c)
 *     EDIDV1_ObtainMonitorBasicDisplayParams @ 0x1C000E9D0 (EDIDV1_ObtainMonitorBasicDisplayParams.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall EDIDV1_ObtainSupportedMonitorSourceModes(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        struct _VideoModeDescriptor *a5)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  const void *v10; // r10
  char v11; // r13
  unsigned __int16 v12; // di
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // r12
  unsigned __int16 v15; // r15
  __int64 v16; // r9
  struct _VideoModeDescriptor *v17; // r10
  struct _VideoModeDescriptor *v18; // r8
  unsigned __int16 v19; // bx
  unsigned __int16 v20; // si
  unsigned __int16 v21; // ax
  unsigned __int16 i; // di
  char *v23; // rcx
  unsigned __int64 MonitorSourceMode; // rax
  _WORD *v25; // r11
  unsigned __int16 v26; // bx
  int v27; // edi
  struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v28; // r12
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  unsigned __int16 v32[2]; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int16 v33; // [rsp+34h] [rbp-3Dh] BYREF
  unsigned __int16 v34[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v35; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-31h]
  struct _VideoModeDescriptor *v37; // [rsp+48h] [rbp-29h]
  _QWORD *v38; // [rsp+50h] [rbp-21h]
  struct _VideoModeDescriptor *v39; // [rsp+58h] [rbp-19h]
  unsigned __int16 *v40; // [rsp+60h] [rbp-11h]
  struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v41; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int16 *v42; // [rsp+70h] [rbp-1h]
  _BYTE v43[16]; // [rsp+78h] [rbp+7h] BYREF

  v40 = a4;
  v39 = a5;
  v42 = a3;
  v36 = a2;
  v38 = a1;
  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( !a3 || (!v8 || !v9) && *a3 )
      return 3221225485LL;
    v41 = 0LL;
    v33 = 0;
    v34[0] = 0;
    v35 = 0;
    v32[0] = 0;
    v11 = 0;
    result = EDID_V1_CountListedSupportedMonitorSourceModes(v10, &v33, v34, &v35, &v41, v32);
    if ( (int)result >= 0 )
    {
      v12 = v33;
      if ( v33 > 0x11u )
        return 3223126018LL;
      v13 = v34[0];
      if ( v34[0] > 8u )
        return 3223126018LL;
      v14 = v35;
      if ( v35 > 6u )
        return 3223126018LL;
      v15 = v32[0];
      if ( v32[0] > 4u )
        return 3223126018LL;
      if ( !*a3 )
      {
        *a3 = v33 + v34[0] + v35 + v32[0];
        v11 = 1;
        return v11 != 0 ? 0x80000005 : 0;
      }
      result = EDIDV1_ObtainMonitorBasicDisplayParams(v38, v43);
      if ( (int)result >= 0 )
      {
        memset(v39, 0, 56LL * *a3);
        v17 = v39;
        v37 = v39;
        *a4 = -1;
        v18 = v17;
        v19 = *a3;
        v20 = 0;
        if ( v19 < v12 )
        {
          v11 = 1;
          v12 = v19;
        }
        if ( !v12 )
        {
LABEL_20:
          if ( v19 < v15 )
          {
            v11 = 1;
            v15 = v19;
          }
          v32[0] = 0;
          v21 = 0;
          for ( i = 0; i < v15; v21 = ++v32[0] )
          {
            if ( v21 >= 4u )
              break;
            v23 = (char *)v38 + 18 * v21 + 54;
            if ( *(_WORD *)v23 || v23[2] )
            {
              result = EDID_V1_PopulateSupportedMonitorSourceModeFromDetailedTimingBlock(v23, v36, v18);
              if ( (_DWORD)result != -1071841271 )
              {
                if ( (int)result < 0 )
                  return result;
                if ( !i )
                  *v40 = v20;
                if ( v20 && (MonitorSourceMode = FindMonitorSourceMode(v39, v20, v18), MonitorSourceMode != -1LL) )
                {
                  if ( !i )
                    *v25 = MonitorSourceMode;
                }
                else
                {
                  ++i;
                  --v19;
                  ++v20;
                  v37 = ++v18;
                }
              }
            }
          }
          if ( v19 < v13 )
          {
            v13 = v19;
            v14 = 0;
          }
          else
          {
            if ( v19 >= v13 + v14 )
            {
LABEL_35:
              v26 = 0;
              v27 = v13 + v14;
              if ( v27 > 0 )
              {
                v28 = v41;
                do
                {
                  v29 = v38;
                  if ( v26 >= v13 )
                    v30 = (__int64)v28 + 2 * (v26 - v13);
                  else
                    v30 = (__int64)v38 + 2 * v26 + 38;
                  v31 = *((_BYTE *)v38 + 18);
                  LOBYTE(v29) = v31 == 1 && *((_BYTE *)v38 + 19) >= 3u || v31 >= 3u;
                  LOBYTE(v16) = v26 >= v13;
                  result = EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock(v30, v29, v36, v16, v18);
                  if ( (_DWORD)result == -1071841276 )
                  {
                    v18 = v37;
                  }
                  else
                  {
                    if ( (int)result < 0 )
                      return result;
                    v18 = v37;
                    if ( !v20 || FindMonitorSourceMode(v39, v20, v37) == -1LL )
                    {
                      ++v20;
                      v37 = ++v18;
                    }
                  }
                  ++v26;
                }
                while ( v26 < v27 );
              }
              *v42 = v20;
              return v11 != 0 ? 0x80000005 : 0;
            }
            v14 = v19 - v13;
          }
          v11 = 1;
          goto LABEL_35;
        }
        result = EDID_V1_PopulateSupportedMonitorSourceModesFromEstablishedTimingsBlock(
                   (char *)v38 + 35,
                   v43[1],
                   v43[2],
                   v12,
                   v36,
                   v17);
        if ( (int)result >= 0 )
        {
          v19 -= v12;
          v20 = v12;
          v18 = &v39[v16];
          v37 = v18;
          goto LABEL_20;
        }
      }
    }
  }
  return result;
}
