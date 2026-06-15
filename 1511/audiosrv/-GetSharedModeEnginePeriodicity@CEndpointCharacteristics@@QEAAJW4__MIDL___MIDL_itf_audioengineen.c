/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000EBE0 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007F914 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180089970 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180089FA0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180090028 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180048C3E (memcmp_0.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180069C8C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        CEndpointCharacteristics *this,
        unsigned int wFormatTag,
        const struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  struct _GUID *v8; // rsi
  char *v10; // rax
  int v11; // ebx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // r15d
  __int64 v16; // r14
  unsigned __int16 **v17; // r13
  unsigned __int16 *v18; // rax
  bool v19; // zf
  __int128 v20; // xmm1
  __int16 v21; // si
  __int64 v22; // xmm0_8
  int v23; // r11d
  GUID v24; // xmm1
  WORD nChannels; // r8
  WORD wBitsPerSample; // r9
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int16 v29; // r10
  __int64 v30; // xmm0_8
  int v31; // r9d
  unsigned __int16 v32; // r8
  __int128 v33; // xmm0
  int v34; // eax
  __int16 v35; // cx
  unsigned __int8 v37; // [rsp+20h] [rbp-89h]
  int v38; // [rsp+24h] [rbp-85h]
  char *v39; // [rsp+28h] [rbp-81h]
  __int128 Buf2; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v42[24]; // [rsp+70h] [rbp-39h]
  __int128 Buf1; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v44[24]; // [rsp+98h] [rbp-11h]

  v8 = a4;
  v10 = (char *)this + 424;
  if ( wFormatTag != 3 )
    v10 = (char *)this + 416;
  v11 = 0;
  LOBYTE(wFormatTag) = 0;
  v39 = v10;
  v12 = 0;
  v13 = *(_QWORD *)v10;
  v37 = 0;
  v38 = 0;
  if ( *(int *)(v13 + 8) <= 0 )
  {
LABEL_71:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LOBYTE(v11) = (_BYTE)wFormatTag != 0;
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_3a6e6d7d967de63f72de1f5a056e09fa_Traceguids,
        (unsigned int)(v11 - 2005139366));
    }
    return 2290679816LL;
  }
  while ( 1 )
  {
    if ( v12 < 0 || v12 >= *(_DWORD *)(v13 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v14 = *(_QWORD *)(*(_QWORD *)v13 + 8LL * v12);
    if ( *(_QWORD *)v14 != *(_QWORD *)&v8->Data1 || *(_QWORD *)(v14 + 8) != *(_QWORD *)v8->Data4 )
    {
LABEL_69:
      wFormatTag = v37;
      goto LABEL_70;
    }
    LOBYTE(wFormatTag) = 1;
    v37 = 1;
    v15 = 0;
    v16 = 0LL;
    if ( *(int *)(v14 + 24) > 0LL )
      break;
LABEL_70:
    v12 = v38 + 1;
    v38 = v12;
    v13 = *(_QWORD *)v39;
    if ( v12 >= *(_DWORD *)(*(_QWORD *)v39 + 8LL) )
      goto LABEL_71;
  }
  while ( 1 )
  {
    if ( v16 < 0 || v15 >= *(_DWORD *)(v14 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, wFormatTag);
      JUMPOUT(0x180013331LL);
    }
    v17 = *(unsigned __int16 ***)(*(_QWORD *)(v14 + 16) + 8 * v16);
    v18 = *v17;
    if ( !a3 )
    {
      v19 = v18 == 0LL;
      goto LABEL_66;
    }
    if ( v18 && &Buf1 )
    {
      wFormatTag = a3->wFormatTag;
      if ( (_WORD)wFormatTag == 0xFFFE )
      {
        if ( a3->cbSize != 22
          && (*(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
           || *(_QWORD *)&a3[1].wBitsPerSample != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
          && (*(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
           || *(_QWORD *)&a3[1].wBitsPerSample != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
        {
          goto LABEL_67;
        }
        v20 = *(_OWORD *)&a3->cbSize;
        Buf1 = *(_OWORD *)&a3->wFormatTag;
        v21 = Buf1;
        v22 = *(_QWORD *)&a3[1].wBitsPerSample;
        *(_OWORD *)v44 = v20;
        v23 = DWORD1(v20);
        v24 = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_WORD *)v44 = 22;
        *(_QWORD *)&v44[16] = v22;
      }
      else
      {
        if ( a3->cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
          goto LABEL_67;
        nChannels = a3->nChannels;
        if ( (unsigned __int16)(nChannels - 1) > 1u )
          goto LABEL_67;
        wBitsPerSample = a3->wBitsPerSample;
        if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
          goto LABEL_67;
        v27 = *(_OWORD *)&a3->wFormatTag;
        v24 = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_WORD *)v44 = 22;
        Buf1 = v27;
        LOWORD(Buf1) = -2;
        v23 = (nChannels == 1) + 3;
        *(GUID *)&v44[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v44[8] = (unsigned __int16)wFormatTag;
        v21 = -2;
        *(_WORD *)&v44[2] = wBitsPerSample;
      }
      if ( &Buf2 )
        break;
    }
LABEL_67:
    ++v15;
    if ( ++v16 >= *(int *)(v14 + 24) )
    {
      v8 = a4;
      goto LABEL_69;
    }
  }
  wFormatTag = *v18;
  if ( (_WORD)wFormatTag == 0xFFFE )
  {
    if ( v18[8] != 22
      && (*((_QWORD *)v18 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
       || *((_QWORD *)v18 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
      && (*((_QWORD *)v18 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
       || *((_QWORD *)v18 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
    {
      goto LABEL_67;
    }
    v28 = *((_OWORD *)v18 + 1);
    Buf2 = *(_OWORD *)v18;
    v29 = Buf2;
    v30 = *((_QWORD *)v18 + 4);
    *(_OWORD *)v42 = v28;
    v31 = DWORD1(v28);
    *(_QWORD *)&v42[16] = v30;
    *(_WORD *)v42 = 22;
  }
  else
  {
    if ( v18[8] && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
      goto LABEL_67;
    v32 = v18[1];
    if ( (unsigned __int16)(v32 - 1) > 1u )
      goto LABEL_67;
    v29 = -2;
    if ( ((v18[7] - 8) & 0xFFE7) != 0 )
      goto LABEL_67;
    v33 = *(_OWORD *)v18;
    *(_WORD *)&v42[2] = v18[7];
    Buf2 = v33;
    LOWORD(Buf2) = -2;
    v31 = (v32 == 1) + 3;
    *(GUID *)&v42[8] = v24;
    *(_WORD *)v42 = 22;
    *(_DWORD *)&v42[8] = (unsigned __int16)wFormatTag;
  }
  if ( WORD1(Buf1) )
  {
    wFormatTag = WORD1(Buf2);
  }
  else
  {
    wFormatTag = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v34 = DWORD1(Buf2);
  }
  else
  {
    v34 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v35 = HIWORD(Buf2);
  }
  else
  {
    v35 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v23 )
    v31 = 0;
  *(_DWORD *)&v42[4] = v31;
  if ( !v21 )
  {
    v29 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !(_WORD)wFormatTag )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v34 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v35 )
    HIDWORD(Buf1) = 0;
  if ( !v31 )
    v23 = 0;
  *(_DWORD *)&v44[4] = v23;
  if ( !v29 )
    LOWORD(Buf1) = 0;
  if ( *(_OWORD *)&v44[8] != *(_OWORD *)&v42[8] )
    goto LABEL_67;
  v19 = memcmp_0(&Buf1, &Buf2, 0x28uLL) == 0;
LABEL_66:
  if ( !v19 )
    goto LABEL_67;
  if ( a5 )
    *a5 = *((_DWORD *)v17 + 3);
  if ( a6 )
    *a6 = *((_DWORD *)v17 + 2);
  if ( a7 )
    *a7 = *((_DWORD *)v17 + 4);
  if ( a8 )
    *a8 = *((_DWORD *)v17 + 5);
  return 0LL;
}
