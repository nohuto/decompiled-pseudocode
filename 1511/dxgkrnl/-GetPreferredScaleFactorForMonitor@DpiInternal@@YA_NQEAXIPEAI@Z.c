/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z @ 0x1C00ACC74
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C00ACDF8 (MonitorGetPreferredScaleFactor.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C00CFFC8 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0165028 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(
        DpiInternal *this,
        void *const a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  int PreferredScaleFactor; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // xmm0
  int v20; // esi
  _QWORD *v21; // rax
  unsigned __int8 v23[4]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-DCh] BYREF
  struct _UNICODE_STRING v25; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v26; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  WCHAR v29; // [rsp+70h] [rbp-90h]
  _OWORD v30[10]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]

  *a3 = 0;
  v5 = (unsigned int)a2;
  v23[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v23);
  if ( v23[0] )
  {
    *(_DWORD *)&v26.Length = 11272362;
    v12 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
    *(_DWORD *)&v25.Length = 2752552;
    v30[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
    v13 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
    v30[1] = v12;
    v14 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
    v30[2] = v13;
    v15 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
    v30[3] = v14;
    v16 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
    v30[4] = v15;
    v17 = *(_OWORD *)L"ol\\GraphicsDrivers\\ScaleFactors\\Cache";
    v30[5] = v16;
    v30[6] = v17;
    v30[7] = *(_OWORD *)L"icsDrivers\\ScaleFactors\\Cache";
    v18 = *(_QWORD *)L"Cache";
    v19 = *(_OWORD *)L"Factors\\Cache";
    v30[8] = *(_OWORD *)L"rs\\ScaleFactors\\Cache";
    v30[9] = v19;
    v31 = v18;
    v32 = *(_DWORD *)L"e";
    v26.Buffer = (wchar_t *)v30;
    v29 = aPreferredscale[20];
    v27[0] = *(_OWORD *)L"PreferredScaleFactor";
    v25.Buffer = (wchar_t *)v27;
    v27[1] = *(_OWORD *)L"dScaleFactor";
    v28 = *(_QWORD *)L"ctor";
    PreferredScaleFactor = ReadRegistryDwordKeyValue(&v26, &v25, &v24);
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, (unsigned int)v5, &v24);
  }
  v20 = PreferredScaleFactor;
  if ( PreferredScaleFactor >= 0 )
  {
    *a3 = v24;
    return 1;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v21[3] = this;
    v21[4] = v5;
    v21[5] = v20;
    return 0;
  }
}
