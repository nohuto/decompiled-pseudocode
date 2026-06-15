/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140007030
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140008900 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
    goto LABEL_22;
  v11 = a2->lpVtbl->GetUncompressedAudioFormat;
  v12 = (char *)v11 == (char *)CAudioMediaType::GetUncompressedAudioFormat
      ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a2, &v15)
      : ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))v11)(a2, &v15);
  v10 = v12;
  if ( v12 < 0 )
    goto LABEL_22;
  if ( v16.fFramesPerSecond == v15.fFramesPerSecond )
  {
    v13 = *((_DWORD *)this + 32);
    if ( (v13 & 8) == 0 )
    {
      if ( v16.dwSamplesPerFrame == v15.dwSamplesPerFrame )
      {
        if ( (v13 & 1) != 0 )
        {
          *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
          return v10;
        }
      }
      else if ( (v13 & 4) != 0 )
      {
        *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
        *((_DWORD *)this + 32) &= ~4u;
        return v10;
      }
      goto LABEL_18;
    }
  }
  if ( (*((_BYTE *)this + 128) & 2) == 0 )
  {
LABEL_18:
    v10 = -2005139408;
LABEL_22:
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        42LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        v10);
    }
    return v10;
  }
  *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
  if ( (*((_BYTE *)this + 128) & 8) != 0 )
    *a4 = 0;
  *((_DWORD *)this + 32) &= 0xFFFFFFF5;
  return v10;
}
