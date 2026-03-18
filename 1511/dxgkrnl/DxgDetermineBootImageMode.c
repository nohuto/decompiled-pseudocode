/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C00CFDDC
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00C6110 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C00CFFC8 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 */

char __fastcall DxgDetermineBootImageMode(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v27; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v28; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v29; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v30; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v31[2]; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t v32; // [rsp+80h] [rbp-88h]
  _OWORD v33[2]; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+A8h] [rbp-60h]
  _OWORD v35[8]; // [rsp+B8h] [rbp-50h] BYREF
  int v36; // [rsp+138h] [rbp+30h]
  WCHAR v37; // [rsp+13Ch] [rbp+34h]

  v27 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v35[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v35[1] = v4;
  *(_DWORD *)&v28.Length = 8781956;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_DWORD *)&v30.Length = 2228256;
  v35[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v35[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v35[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v35[5] = v12;
  v35[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v31[1] = *(_OWORD *)L"mageMode";
  v35[7] = v14;
  v36 = *(_DWORD *)L"rs";
  v37 = aRegistryMachin_5[66];
  v28.Buffer = (wchar_t *)v35;
  v32 = aCddbootimagemo[16];
  v30.Buffer = (wchar_t *)v31;
  v31[0] = *(_OWORD *)L"CddBootImageMode";
  if ( ReadRegistryDwordKeyValue(&v28, &v30, &v27) < 0 )
  {
    v34 = *(_DWORD *)L"e";
    v29.Buffer = (wchar_t *)v33;
    *(_DWORD *)&v29.Length = 2359330;
    v33[0] = *(_OWORD *)L"CddBootScreenMode";
    v33[1] = *(_OWORD *)L"creenMode";
    ReadRegistryDwordKeyValue(&v28, &v29, &v27);
  }
  if ( v27 > 1 )
  {
    v24 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v25 = v27;
LABEL_10:
    *(_QWORD *)(v24 + 24) = v25;
    LOBYTE(v19) = WdLogEvent5_WdWarning(v24);
    return v19;
  }
  v19 = *(_DWORD *)(a1 + 12) - 20;
  if ( (v19 & 0xFFFFFFFD) != 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v25 = *(int *)(a1 + 12);
    goto LABEL_10;
  }
  if ( a2 )
  {
    Global = DXGGLOBAL::GetGlobal(v16);
    *(_OWORD *)((char *)Global + 1096) = *(_OWORD *)a1;
    *(_OWORD *)((char *)Global + 1112) = *(_OWORD *)(a1 + 16);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v21) + 136) = a2;
    *((_QWORD *)DXGGLOBAL::GetGlobal(v22) + 152) = a3;
    *((_DWORD *)DXGGLOBAL::GetGlobal(v23) + 270) = 1;
    LOBYTE(v19) = DxgkSetBootAnimationRelayState(1LL);
    *a4 = 1;
  }
  return v19;
}
