/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20
 * Callers:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x1800168F0 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18006C018 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x18008B8F0 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x18004F460 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18008F7C0 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4)
{
  HANDLE ProcessHeap; // rax
  float *v8; // rax
  float *v9; // rdi
  WORD wFormatTag; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  WORD nSamplesPerSec_high; // ax
  WORD nChannels; // cx
  int valid; // r8d
  WORD wBitsPerSample; // dx
  int nBlockAlign; // r9d
  DWORD v18; // ecx
  DWORD nAvgBytesPerSec; // r9d
  unsigned int cbSize; // eax
  HANDLE v21; // rax
  int v22; // eax
  unsigned int v23; // esi
  HANDLE v24; // rax
  void *v25; // rax
  __int16 *v26; // rcx
  __int16 v27; // dx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ebx

  if ( a3 )
  {
    *a3 = 0LL;
    ProcessHeap = GetProcessHeap();
    v8 = (float *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
    v9 = v8;
    if ( !v8 )
    {
      v30 = -2147024882;
      goto LABEL_54;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    *(_QWORD *)v8 = &CAudioMediaType::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    v8[6] = 0.0;
    if ( !a1 )
    {
LABEL_40:
      v9[6] = a4;
      v30 = 0;
      *a3 = 0LL;
      *a3 = (struct IAudioMediaType *)v9;
      (*(void (__fastcall **)(float *, _QWORD))(*(_QWORD *)v9 + 8LL))(
        v9,
        *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
      return v30;
    }
    wFormatTag = a1->wFormatTag;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( a1->cbSize < 0x16u )
        goto LABEL_46;
      v11 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
          - *(_QWORD *)&a1[1].nAvgBytesPerSec;
      if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
      {
        v12 = *(unsigned int *)&a1[1].cbSize;
        v11 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v12;
        if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v12 )
          v11 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
              - (unsigned __int64)a1[2].nChannels;
      }
      if ( v11 )
LABEL_46:
        nSamplesPerSec_high = 0;
      else
        nSamplesPerSec_high = HIWORD(a1[1].nSamplesPerSec);
    }
    else
    {
      nSamplesPerSec_high = a1->wFormatTag;
    }
    if ( nSamplesPerSec_high == 1 )
    {
      valid = IsValidPcmWfx(a1);
    }
    else
    {
      if ( nSamplesPerSec_high != 3 )
      {
        valid = 1;
LABEL_19:
        if ( wFormatTag == 0xFFFE )
        {
          valid = 0;
          if ( a1->cbSize >= 0x16u )
            valid = a1[1].wFormatTag <= a1->wBitsPerSample;
        }
        if ( valid )
        {
          cbSize = a1->cbSize;
          if ( cbSize + 18 < cbSize )
          {
            v30 = -2147024362;
LABEL_50:
            CAudioMediaType::`vector deleting destructor'((CAudioMediaType *)v9, 1u);
LABEL_54:
            *a3 = 0LL;
            return v30;
          }
          if ( cbSize + 18 <= a2 )
          {
            v21 = GetProcessHeap();
            HeapFree(v21, 0, 0LL);
            *((_QWORD *)v9 + 2) = 0LL;
            v22 = 18;
            if ( a1->wFormatTag != 1 )
              v22 = a1->cbSize + 18;
            v23 = v22;
            v24 = GetProcessHeap();
            v25 = HeapAlloc(v24, 0, v23);
            *((_QWORD *)v9 + 2) = v25;
            if ( v25 )
            {
              memcpy_0(v25, a1, v23);
              if ( a1->wFormatTag == 1 )
                *(_WORD *)(*((_QWORD *)v9 + 2) + 16LL) = 0;
              v26 = (__int16 *)*((_QWORD *)v9 + 2);
              v27 = *v26;
              if ( *v26 )
              {
                if ( ((v27 - 1) & 0xFFFD) == 0 )
                  goto LABEL_39;
                if ( v27 != -2 )
                  goto LABEL_44;
                v28 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v26 + 3);
                if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v26 + 3) )
                  v28 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v26 + 4);
                if ( !v28 )
                  goto LABEL_39;
                v29 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v26 + 3);
                if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v26 + 3) )
                  v29 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v26 + 4);
                if ( v29 )
LABEL_44:
                  *((_DWORD *)v9 + 3) = 1;
                else
LABEL_39:
                  v9[3] = 0.0;
              }
              goto LABEL_40;
            }
            v30 = -2147024882;
            goto LABEL_50;
          }
        }
LABEL_52:
        v30 = -2147024809;
        goto LABEL_50;
      }
      nChannels = a1->nChannels;
      valid = 0;
      if ( nChannels )
      {
        wBitsPerSample = a1->wBitsPerSample;
        if ( ((wBitsPerSample - 32) & 0xFFDF) == 0 )
        {
          nBlockAlign = a1->nBlockAlign;
          if ( nBlockAlign == nChannels * wBitsPerSample / 8 )
          {
            v18 = nBlockAlign * a1->nSamplesPerSec;
            valid = 1;
            nAvgBytesPerSec = a1->nAvgBytesPerSec;
            if ( nAvgBytesPerSec > v18 / 0x14 + v18 || nAvgBytesPerSec < v18 - v18 / 0x14 )
              valid = 0;
          }
        }
      }
    }
    if ( !valid )
      goto LABEL_52;
    goto LABEL_19;
  }
  return 2147942487LL;
}
