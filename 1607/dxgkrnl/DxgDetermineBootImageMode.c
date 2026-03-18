/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C00E3760
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00E3564 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00DAF20 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C00E397C (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
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
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v29; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v31; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v33; // [rsp+78h] [rbp-88h]
  _OWORD v34[2]; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+A0h] [rbp-60h]
  _OWORD v36[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v37; // [rsp+130h] [rbp+30h]
  WCHAR v38; // [rsp+134h] [rbp+34h]

  *(_DWORD *)&v29.Length = 8781956;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v36[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v36[1] = v4;
  v28 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_DWORD *)&v30.Length = 2228256;
  v36[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v36[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v36[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v36[5] = v12;
  v36[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v32[1] = *(_OWORD *)L"mageMode";
  v36[7] = v14;
  v37 = *(_DWORD *)L"rs";
  v38 = aRegistryMachin_6[66];
  v29.Buffer = (wchar_t *)v36;
  v33 = aCddbootimagemo[16];
  v30.Buffer = (wchar_t *)v32;
  v32[0] = *(_OWORD *)L"CddBootImageMode";
  v15 = ReadRegistryDwordKeyValue(&v29, &v30, &v28);
  if ( v15 >= 0 )
  {
    v20 = v28;
  }
  else
  {
    v35 = *(_DWORD *)L"e";
    v31.Buffer = (wchar_t *)v34;
    *(_DWORD *)&v31.Length = 2359330;
    v34[0] = *(_OWORD *)L"CddBootScreenMode";
    v34[1] = *(_OWORD *)L"creenMode";
    v15 = ReadRegistryDwordKeyValue(&v29, &v31, &v28);
    v20 = v28;
    if ( v15 < 0 )
      v20 = -1;
  }
  if ( v20 )
  {
    switch ( v20 )
    {
      case 1u:
        goto LABEL_9;
      case 2u:
        *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 224) = 2;
        break;
      case 3u:
        *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 224) = 3;
        break;
      case 0xFFFFFFFF:
LABEL_9:
        v15 = *(_DWORD *)(a1 + 12) - 20;
        if ( (v15 & 0xFFFFFFFD) == 0 )
        {
          if ( a2 )
          {
            Global = DXGGLOBAL::GetGlobal(v17);
            *((_OWORD *)Global + 57) = *(_OWORD *)a1;
            *((_OWORD *)Global + 58) = *(_OWORD *)(a1 + 16);
            *((_QWORD *)DXGGLOBAL::GetGlobal(v22) + 113) = a2;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v23) + 126) = a3;
            *((_DWORD *)DXGGLOBAL::GetGlobal(v24) + 224) = 1;
            LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
            *a4 = 1;
          }
          return v15;
        }
        v25 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v26 = *(int *)(a1 + 12);
LABEL_19:
        *(_QWORD *)(v25 + 24) = v26;
        LOBYTE(v15) = WdLogEvent5_WdWarning(v25);
        return v15;
      default:
        v25 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v26 = v20;
        goto LABEL_19;
    }
    LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
  }
  return v15;
}
