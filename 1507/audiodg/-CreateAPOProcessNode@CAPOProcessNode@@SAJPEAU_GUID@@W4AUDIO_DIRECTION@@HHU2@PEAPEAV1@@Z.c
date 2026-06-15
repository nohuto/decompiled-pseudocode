/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002280 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006D9C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002EEB8 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002F4A0 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14002FC0C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000A070 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     _wcsicmp_0 @ 0x14001907A (_wcsicmp_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF__guid_ @ 0x140030B28 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        int a2,
        int a3,
        int a4,
        __int128 *a5,
        _QWORD *a6)
{
  int v7; // edi
  __int64 v10; // rcx
  int v11; // r14d
  LSTATUS v12; // eax
  int Common; // ebx
  OLECHAR *lpClass; // rcx
  DWORD v15; // edi
  HKEY v16; // rsi
  LSTATUS v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  struct _FILETIME v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _QWORD *v23; // rax
  LSTATUS v25; // eax
  LSTATUS v26; // eax
  CLSID *v27; // rcx
  __int64 v28; // rdx
  APO_REG_PROPERTIES *v29; // rax
  CLSID clsid; // xmm0
  CLSID v31; // xmm1
  CLSID v32; // xmm0
  CLSID v33; // xmm1
  CLSID v34; // xmm0
  CLSID v35; // xmm1
  CLSID v36; // xmm0
  IID v37; // xmm1
  CLSID v38; // xmm1
  CLSID v39; // xmm0
  CLSID v40; // xmm1
  unsigned int v41; // eax
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+50h] [rbp-B0h]
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v48; // [rsp+70h] [rbp-90h]
  DWORD Type; // [rsp+78h] [rbp-88h] BYREF
  __int128 v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+90h] [rbp-70h]
  int v52; // [rsp+4A0h] [rbp+3A0h]
  int v53; // [rsp+4A8h] [rbp+3A8h]
  GUID pclsid; // [rsp+4D0h] [rbp+3D0h] BYREF
  APO_REG_PROPERTIES v55; // [rsp+4E0h] [rbp+3E0h] BYREF
  WCHAR Name[512]; // [rsp+930h] [rbp+830h] BYREF

  v48 = a6;
  v7 = a3;
  v44 = a3;
  v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF__guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      18LL,
      &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
      a1);
    v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  v11 = 0;
  if ( &v50 )
  {
    v12 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
    Common = v12;
    if ( v12 )
    {
      if ( v12 > 0 )
        Common = (unsigned __int16)v12 | 0x80070000;
    }
    else
    {
      lpClass = 0LL;
      v15 = 0;
      do
      {
        v16 = hKey;
        v11 = (int)lpClass;
        lpsz = lpClass;
        cchName = 512;
        v17 = RegEnumKeyExW(hKey, v15, Name, &cchName, (LPDWORD)lpClass, lpClass, (LPDWORD)lpClass, &ftLastWriteTime);
        if ( !v17 || v17 == 234 )
        {
          Common = StringFromCLSID(a1, &lpsz);
          if ( Common >= 0 && !wcsicmp_0(Name, lpsz) )
          {
            v25 = RegOpenKeyExW(v16, Name, 0, 0x20019u, &phkResult);
            Common = v25;
            if ( v25 )
            {
              if ( v25 > 0 )
                Common = (unsigned __int16)v25 | 0x80070000;
            }
            else
            {
              Common = InnerGetCommon(phkResult, a1, &v55);
              if ( Common >= 0 )
              {
                v55.u32NumAPOInterfaces = 1;
                cchName = 1024;
                v26 = RegQueryValueExW(phkResult, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
                Common = v26;
                if ( v26 )
                {
                  if ( v26 > 0 )
                    Common = (unsigned __int16)v26 | 0x80070000;
                }
                else
                {
                  Common = CLSIDFromString(Name, &pclsid);
                  if ( Common >= 0 )
                  {
                    v27 = (CLSID *)&v50;
                    v28 = 8LL;
                    v29 = &v55;
                    v55.iidAPOInterfaceList[0] = pclsid;
                    do
                    {
                      v27 += 8;
                      clsid = v29->clsid;
                      v31 = *(CLSID *)&v29->Flags;
                      v29 = (APO_REG_PROPERTIES *)((char *)v29 + 128);
                      v27[-8] = clsid;
                      v32 = *(CLSID *)&v29[-1].szCopyrightInfo[232];
                      v27[-7] = v31;
                      v33 = *(CLSID *)&v29[-1].szCopyrightInfo[240];
                      v27[-6] = v32;
                      v34 = *(CLSID *)&v29[-1].szCopyrightInfo[248];
                      v27[-5] = v33;
                      v35 = *(CLSID *)&v29[-1].u32MajorVersion;
                      v27[-4] = v34;
                      v36 = *(CLSID *)&v29[-1].u32MinOutputConnections;
                      v27[-3] = v35;
                      v37 = v29[-1].iidAPOInterfaceList[0];
                      v27[-2] = v36;
                      v27[-1] = v37;
                      --v28;
                    }
                    while ( v28 );
                    v11 = 1;
                    v38 = *(CLSID *)&v29->Flags;
                    *v27 = v29->clsid;
                    v39 = *(CLSID *)&v29->szFriendlyName[6];
                    v27[1] = v38;
                    v40 = *(CLSID *)&v29->szFriendlyName[14];
                    v41 = *(_DWORD *)&v29->szFriendlyName[22];
                    v27[2] = v39;
                    v27[3] = v40;
                    v27[4].Data1 = v41;
                  }
                }
              }
              RegCloseKey(phkResult);
            }
          }
        }
        else
        {
          Common = -2005139398;
        }
        lpClass = lpsz;
        if ( lpsz )
        {
          CoTaskMemFree(lpsz);
          lpClass = 0LL;
          lpsz = 0LL;
        }
        if ( Common < 0 )
          break;
        ++v15;
      }
      while ( !v11 );
      RegCloseKey(hKey);
      v7 = v44;
    }
    if ( Common >= 0 )
    {
      if ( !v11 )
        Common = -2005139430;
      if ( Common >= 0 )
      {
        if ( v53 == 1 && v52 == 1 )
        {
          v18 = operator new(0x38uLL);
          ftLastWriteTime = (struct _FILETIME)v18;
          v19 = v18;
          if ( v18 )
          {
            v18[1] = 0LL;
            v18[2] = 0LL;
            *((_DWORD *)v18 + 6) = a2;
            v18[4] = 0LL;
            *((_DWORD *)v18 + 10) = 2;
            *v18 = &CAPOProcessNode::`vftable';
            *((_DWORD *)v18 + 12) = v51;
          }
          else
          {
            v19 = 0LL;
          }
          if ( v19 )
          {
            ftLastWriteTime = (struct _FILETIME)operator new(0x30uLL);
            v20 = ftLastWriteTime;
            if ( ftLastWriteTime )
            {
              v21 = v50;
              v22 = *a5;
              v23 = v48;
              *(_QWORD *)(*(_QWORD *)&ftLastWriteTime + 40LL) = 0LL;
              *(_DWORD *)v20.dwLowDateTime = v7;
              *(_DWORD *)(*(_QWORD *)&v20 + 4LL) = a4;
              *(_OWORD *)(*(_QWORD *)&v20 + 8LL) = v21;
              *(_OWORD *)(*(_QWORD *)&v20 + 24LL) = v22;
              *v23 = v19;
              v19[4] = v20;
              return (unsigned int)Common;
            }
          }
          Common = -2147024882;
          if ( v19 )
            (*(void (__fastcall **)(_QWORD *, __int64))*v19)(v19, 1LL);
        }
        else
        {
          Common = -2005139401;
        }
      }
    }
    v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  else
  {
    Common = -2147467261;
  }
  if ( (unsigned int *)v10 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v10 + 28) & 0x20000) != 0
    && *(_BYTE *)(v10 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v10 + 16), 19LL, &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids, (unsigned int)Common);
  }
  return (unsigned int)Common;
}
