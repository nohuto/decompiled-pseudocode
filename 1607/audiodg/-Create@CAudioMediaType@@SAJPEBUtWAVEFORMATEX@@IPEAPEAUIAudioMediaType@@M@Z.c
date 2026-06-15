/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000F060 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x14000FC00 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014E64 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014F78 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002DE80 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x140016A60 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140024BC0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  WORD wFormatTag; // r11
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  WORD nSamplesPerSec_high; // ax
  WORD nChannels; // cx
  int valid; // r8d
  WORD wBitsPerSample; // dx
  int nBlockAlign; // r9d
  DWORD v17; // ecx
  DWORD nAvgBytesPerSec; // r9d
  unsigned int cbSize; // eax
  unsigned int v20; // eax
  unsigned int v21; // esi
  void *v22; // rax
  __int16 *v23; // rcx
  __int16 v24; // dx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned int (__fastcall *v28)(CAudioMediaType *__hidden); // rax

  if ( a3 )
  {
    *a3 = 0LL;
    v7 = operator new(0x20uLL);
    v8 = v7;
    if ( !v7 )
    {
      v27 = -2147024882;
      goto LABEL_56;
    }
    v7[1] = 0LL;
    *v7 = &CAudioMediaType::`vftable';
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    if ( !a1 )
    {
LABEL_40:
      *((float *)v8 + 6) = a4;
      v27 = 0;
      *a3 = 0LL;
      *a3 = (struct IAudioMediaType *)v8;
      v28 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*v8 + 8LL);
      if ( v28 == CAudioMediaType::AddRef )
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
      else
        ((void (__fastcall *)(_QWORD *, _QWORD))v28)(v8, *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
      return v27;
    }
    wFormatTag = a1->wFormatTag;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( a1->cbSize < 0x16u )
        goto LABEL_48;
      v10 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
          - *(_QWORD *)&a1[1].nAvgBytesPerSec;
      if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
      {
        v11 = *(unsigned int *)&a1[1].cbSize;
        v10 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v11;
        if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v11 )
          v10 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
              - (unsigned __int64)a1[2].nChannels;
      }
      if ( v10 )
LABEL_48:
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
            v27 = -2147024362;
LABEL_51:
            CAudioMediaType::`vector deleting destructor'((CAudioMediaType *)v8, 1u);
LABEL_56:
            *a3 = 0LL;
            return v27;
          }
          if ( cbSize + 18 <= a2 )
          {
            operator delete[](0LL);
            v8[2] = 0LL;
            v20 = 18;
            if ( a1->wFormatTag != 1 )
              v20 = a1->cbSize + 18;
            v21 = v20;
            v22 = operator new[](v20);
            v8[2] = v22;
            if ( v22 )
            {
              memcpy_0(v22, a1, v21);
              if ( a1->wFormatTag == 1 )
                *(_WORD *)(v8[2] + 16LL) = 0;
              v23 = (__int16 *)v8[2];
              v24 = *v23;
              if ( *v23 )
              {
                if ( ((v24 - 1) & 0xFFFD) == 0 )
                  goto LABEL_39;
                if ( v24 != -2 )
                  goto LABEL_46;
                v25 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v23 + 3);
                if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v23 + 3) )
                  v25 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v23 + 4);
                if ( !v25 )
                  goto LABEL_39;
                v26 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v23 + 3);
                if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v23 + 3) )
                  v26 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v23 + 4);
                if ( v26 )
LABEL_46:
                  *((_DWORD *)v8 + 3) = 1;
                else
LABEL_39:
                  *((_DWORD *)v8 + 3) = 0;
              }
              goto LABEL_40;
            }
            v27 = -2147024882;
            goto LABEL_51;
          }
        }
LABEL_53:
        v27 = -2147024809;
        goto LABEL_51;
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
            v17 = nBlockAlign * a1->nSamplesPerSec;
            valid = 1;
            nAvgBytesPerSec = a1->nAvgBytesPerSec;
            if ( nAvgBytesPerSec > v17 / 0x14 + v17 || nAvgBytesPerSec < v17 - v17 / 0x14 )
              valid = 0;
          }
        }
      }
    }
    if ( !valid )
      goto LABEL_53;
    goto LABEL_19;
  }
  return 2147942487LL;
}
