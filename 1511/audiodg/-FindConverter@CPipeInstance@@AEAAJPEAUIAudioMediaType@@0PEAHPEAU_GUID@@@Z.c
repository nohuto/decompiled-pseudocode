/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000E800
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140010440 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::FindConverter(
        CPipeInstance *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        int *a4,
        struct _GUID *a5)
{
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rbp
  int UncompressedAudioFormat; // eax
  unsigned int v10; // ebx
  HRESULT (__stdcall *v11)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rbx
  int v12; // eax
  int v13; // ecx
  struct _UNCOMPRESSEDAUDIOFORMAT v15; // [rsp+20h] [rbp-98h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v16; // [rsp+48h] [rbp-70h] BYREF

  *a4 = 1;
  GetUncompressedAudioFormat = a3->lpVtbl->GetUncompressedAudioFormat;
  if ( (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat )
    UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a3, &v16);
  else
    UncompressedAudioFormat = ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
                                a3,
                                &v16);
  v10 = UncompressedAudioFormat;
  if ( UncompressedAudioFormat < 0 )
    goto LABEL_24;
  v11 = a2->lpVtbl->GetUncompressedAudioFormat;
  v12 = (char *)v11 == (char *)CAudioMediaType::GetUncompressedAudioFormat
      ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a2, &v15)
      : ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))v11)(a2, &v15);
  v10 = v12;
  if ( v12 < 0 )
    goto LABEL_24;
  if ( v16.fFramesPerSecond != v15.fFramesPerSecond || (v13 = *((_DWORD *)this + 33), (v13 & 8) != 0) )
  {
    if ( (*((_BYTE *)this + 132) & 2) != 0 )
    {
      *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
      if ( (*((_BYTE *)this + 132) & 8) != 0 )
        *a4 = 0;
      *((_DWORD *)this + 33) &= 0xFFFFFFF5;
LABEL_12:
      if ( (v10 & 0x80000000) == 0 )
        return v10;
      goto LABEL_24;
    }
LABEL_19:
    v10 = -2005139408;
    goto LABEL_12;
  }
  if ( v16.dwSamplesPerFrame != v15.dwSamplesPerFrame )
  {
    if ( (v13 & 4) != 0 )
    {
      *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *((_DWORD *)this + 33) &= ~4u;
      goto LABEL_12;
    }
    goto LABEL_19;
  }
  if ( (v13 & 1) != 0 )
  {
    *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
    goto LABEL_12;
  }
  v10 = -2005139408;
LABEL_24:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v10);
  }
  return v10;
}
