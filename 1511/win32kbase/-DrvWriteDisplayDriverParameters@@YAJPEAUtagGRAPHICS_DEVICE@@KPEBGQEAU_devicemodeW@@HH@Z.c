/*
 * XREFs of ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0053914
 * Callers:
 *     DrvUpdateDisplayDriverParameters @ 0x1C0053820 (DrvUpdateDisplayDriverParameters.c)
 * Callees:
 *     ?DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z @ 0x1C0053DB8 (-DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z.c)
 *     ?AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z @ 0x1C0053E70 (-AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DrvWriteDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct _devicemodeW *const a4,
        int a5,
        int a6)
{
  __int64 result; // rax
  NTSTATUS v10; // esi
  bool v11; // bl
  PCWSTR *p_Name; // rcx
  wchar_t **v13; // rdx
  __int64 v14; // r8
  const WCHAR *v15; // rax
  unsigned int v16; // r15d
  NTSTATUS v17; // eax
  WORD dmDriverExtra; // ax
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  struct _devicemodeW *v21; // [rsp+38h] [rbp-C8h]
  _devicemodeW v22; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v23[12]; // [rsp+120h] [rbp+20h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+150h] [rbp+50h] BYREF
  __int64 v25; // [rsp+188h] [rbp+88h]
  int v26; // [rsp+190h] [rbp+90h]
  __int64 v27; // [rsp+198h] [rbp+98h]
  DWORD *p_dmPelsWidth; // [rsp+1A0h] [rbp+A0h]
  int v29; // [rsp+1A8h] [rbp+A8h]
  __int64 v30; // [rsp+1B0h] [rbp+B0h]
  int v31; // [rsp+1B8h] [rbp+B8h]
  __int64 v32; // [rsp+1C0h] [rbp+C0h]
  int v33; // [rsp+1C8h] [rbp+C8h]
  __int64 v34; // [rsp+1D0h] [rbp+D0h]
  DWORD *p_dmPelsHeight; // [rsp+1D8h] [rbp+D8h]
  int v36; // [rsp+1E0h] [rbp+E0h]
  __int64 v37; // [rsp+1E8h] [rbp+E8h]
  int v38; // [rsp+1F0h] [rbp+F0h]
  __int64 v39; // [rsp+1F8h] [rbp+F8h]
  int v40; // [rsp+200h] [rbp+100h]
  __int64 v41; // [rsp+208h] [rbp+108h]
  DWORD *p_dmDisplayFrequency; // [rsp+210h] [rbp+110h]
  int v43; // [rsp+218h] [rbp+118h]
  __int64 v44; // [rsp+220h] [rbp+120h]
  int v45; // [rsp+228h] [rbp+128h]
  __int64 v46; // [rsp+230h] [rbp+130h]
  int v47; // [rsp+238h] [rbp+138h]
  __int64 v48; // [rsp+240h] [rbp+140h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+248h] [rbp+148h]
  int v50; // [rsp+250h] [rbp+150h]
  __int64 v51; // [rsp+258h] [rbp+158h]
  int v52; // [rsp+260h] [rbp+160h]
  __int64 v53; // [rsp+268h] [rbp+168h]
  int v54; // [rsp+270h] [rbp+170h]
  __int64 v55; // [rsp+278h] [rbp+178h]
  DWORD *p_dmPanningWidth; // [rsp+280h] [rbp+180h]
  int v57; // [rsp+288h] [rbp+188h]
  __int64 v58; // [rsp+290h] [rbp+190h]
  int v59; // [rsp+298h] [rbp+198h]
  __int64 v60; // [rsp+2A0h] [rbp+1A0h]
  int v61; // [rsp+2A8h] [rbp+1A8h]
  __int64 v62; // [rsp+2B0h] [rbp+1B0h]
  DWORD *p_dmPanningHeight; // [rsp+2B8h] [rbp+1B8h]
  int v64; // [rsp+2C0h] [rbp+1C0h]
  __int64 v65; // [rsp+2C8h] [rbp+1C8h]
  int v66; // [rsp+2D0h] [rbp+1D0h]
  __int64 v67; // [rsp+2D8h] [rbp+1D8h]
  int v68; // [rsp+2E0h] [rbp+1E0h]
  __int64 v69; // [rsp+2E8h] [rbp+1E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+2F0h] [rbp+1F0h]
  int v71; // [rsp+2F8h] [rbp+1F8h]
  __int64 v72; // [rsp+300h] [rbp+200h]
  int v73; // [rsp+308h] [rbp+208h]
  __int64 v74; // [rsp+310h] [rbp+210h]
  int v75; // [rsp+318h] [rbp+218h]
  __int64 v76; // [rsp+320h] [rbp+220h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+328h] [rbp+228h]
  int v78; // [rsp+330h] [rbp+230h]
  __int64 v79; // [rsp+338h] [rbp+238h]
  int v80; // [rsp+340h] [rbp+240h]
  __int64 (__fastcall *v81)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+348h] [rbp+248h]
  int v82; // [rsp+350h] [rbp+250h]
  const wchar_t *v83; // [rsp+358h] [rbp+258h]
  _devicemodeW *v84; // [rsp+360h] [rbp+260h]
  int v85; // [rsp+368h] [rbp+268h]
  int *v86; // [rsp+370h] [rbp+270h]
  int v87; // [rsp+378h] [rbp+278h]
  __int64 v88; // [rsp+380h] [rbp+280h]
  int v89; // [rsp+388h] [rbp+288h]
  __int64 v90; // [rsp+390h] [rbp+290h]
  _BYTE v91[32]; // [rsp+398h] [rbp+298h] BYREF

  v21 = a4;
  v19 = 11;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    return 0LL;
  result = DrvWriteAttachedSettings(0xFFFDu, a3, a4, a5, &v19);
  v10 = result;
  if ( !a5 )
  {
    if ( a4 )
    {
      v11 = 0;
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
      {
        memset(&v22, 0, sizeof(v22));
        v20 = 0;
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Flags = 288;
        QueryTable.EntryContext = &v22.dmBitsPerPel;
        p_dmPelsWidth = &v22.dmPelsWidth;
        p_dmPelsHeight = &v22.dmPelsHeight;
        p_dmDisplayFrequency = &v22.dmDisplayFrequency;
        p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&v22.dmDisplayFlags;
        p_dmPanningWidth = &v22.dmPanningWidth;
        p_dmPanningHeight = &v22.dmPanningHeight;
        p_dmDisplayOrientation = &v22.dmDisplayOrientation;
        p_dmDisplayFixedOutput = &v22.dmDisplayFixedOutput;
        QueryTable.Name = 0LL;
        QueryTable.DefaultType = 0x4000000;
        QueryTable.DefaultData = 0LL;
        QueryTable.DefaultLength = 0;
        v25 = 0LL;
        v26 = 288;
        v27 = 0LL;
        v29 = 0x4000000;
        v30 = 0LL;
        v31 = 0;
        v32 = 0LL;
        v33 = 288;
        v34 = 0LL;
        v36 = 0x4000000;
        v37 = 0LL;
        v38 = 0;
        v39 = 0LL;
        v40 = 288;
        v41 = 0LL;
        v43 = 0x4000000;
        v44 = 0LL;
        v45 = 0;
        v46 = 0LL;
        v47 = 288;
        v48 = 0LL;
        v50 = 0x4000000;
        v51 = 0LL;
        v52 = 0;
        v53 = 0LL;
        v54 = 288;
        v55 = 0LL;
        v57 = 0x4000000;
        v58 = 0LL;
        v59 = 0;
        v60 = 0LL;
        v61 = 288;
        v62 = 0LL;
        v64 = 0x4000000;
        v65 = 0LL;
        v66 = 0;
        v67 = 0LL;
        v68 = 288;
        v69 = 0LL;
        v71 = 0x4000000;
        v72 = 0LL;
        v73 = 0;
        v74 = 0LL;
        v75 = 288;
        v76 = 0LL;
        v78 = 0x4000000;
        v81 = DrvDriverExtraSizeCallback;
        v85 = 4;
        v84 = &v22;
        v87 = 4;
        v86 = &v20;
        v79 = 0LL;
        v80 = 0;
        v82 = 0;
        v88 = 0LL;
        v89 = 0;
        v90 = 0LL;
        memset(v91, 0, sizeof(v91));
        p_Name = &QueryTable.Name;
        v13 = off_1C00ECE10;
        v14 = 9LL;
        do
        {
          v15 = *v13++;
          *p_Name = v15;
          p_Name += 7;
          --v14;
        }
        while ( v14 );
        v83 = L"DefaultSettings.DriverExtra";
        v10 = RtlQueryRegistryValues(0x40000000u, a3, &QueryTable, 0LL, 0LL);
        v11 = v10 >= 0 && (v22.dmDriverExtra & 0xFFFB) != 0 && (!(unsigned int)AreEquivalentDevModes(a4, &v22) || a6);
      }
      v16 = 0;
      v23[0] = a4->dmBitsPerPel;
      v23[1] = a4->dmPelsWidth;
      v23[2] = a4->dmPelsHeight;
      v23[3] = a4->dmDisplayFrequency;
      v23[4] = a4->dmDisplayFlags;
      v23[5] = a4->dmPanningWidth;
      v23[6] = a4->dmPanningHeight;
      v23[7] = a4->dmDisplayOrientation;
      v23[8] = a4->dmDisplayFixedOutput;
      v23[9] = a4->dmPosition.x;
      v23[10] = a4->dmPosition.y;
      if ( v10 >= 0 )
      {
        do
        {
          if ( v16 >= v19 )
            break;
          v17 = RtlWriteRegistryValue(0x40000000u, a3, off_1C00ECE10[v16], 4u, &v23[v16], 4u);
          ++v16;
          v10 = v17;
        }
        while ( v17 >= 0 );
        if ( v10 >= 0 )
        {
          dmDriverExtra = v21->dmDriverExtra;
          if ( dmDriverExtra )
          {
            return (unsigned int)RtlWriteRegistryValue(
                                   0x40000000u,
                                   a3,
                                   L"DefaultSettings.DriverExtra",
                                   3u,
                                   (char *)v21 + v21->dmSize,
                                   dmDriverExtra);
          }
          else if ( v11 )
          {
            RtlDeleteRegistryValue(0x40000000u, a3, L"DefaultSettings.DriverExtra");
          }
        }
      }
      return (unsigned int)v10;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
