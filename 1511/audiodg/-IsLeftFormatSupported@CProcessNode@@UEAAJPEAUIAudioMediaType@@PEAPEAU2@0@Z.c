/*
 * XREFs of ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140010F60
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140010440 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017A60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProcessNode::IsLeftFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  CAudioMediaType *v4; // rbx
  __int64 (__fastcall *v8)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *); // rbp
  int UncompressedAudioFormat; // eax
  unsigned int v10; // ebx
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rbx
  int v12; // eax
  __int64 v13; // rax
  CAudioMediaType *v14; // rbx
  unsigned int (__fastcall *v15)(CAudioMediaType *__hidden); // rdi
  struct _UNCOMPRESSEDAUDIOFORMAT v17; // [rsp+20h] [rbp-88h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v18; // [rsp+48h] [rbp-60h] BYREF

  v4 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( !v4 )
    return 0LL;
  v8 = *(__int64 (__fastcall **)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v4 + 48LL);
  if ( v8 == CAudioMediaType::GetUncompressedAudioFormat )
    UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat(v4, &v18);
  else
    UncompressedAudioFormat = ((__int64 (__fastcall *)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *, struct IAudioMediaType **, struct IAudioMediaType *))v8)(
                                v4,
                                &v18,
                                a3,
                                a4);
  v10 = UncompressedAudioFormat;
  if ( UncompressedAudioFormat < 0
    || ((GetUncompressedAudioFormat = a2->lpVtbl->GetUncompressedAudioFormat,
         (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat)
      ? (v12 = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a2, &v17))
      : (v12 = ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
                 a2,
                 &v17)),
        v10 = v12,
        v12 < 0) )
  {
LABEL_26:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids, v10);
    }
    return v10;
  }
  v13 = *(_QWORD *)&v17.guidFormatType.Data1 - *(_QWORD *)&v18.guidFormatType.Data1;
  if ( *(_QWORD *)&v17.guidFormatType.Data1 == *(_QWORD *)&v18.guidFormatType.Data1 )
    v13 = *(_QWORD *)v17.guidFormatType.Data4 - *(_QWORD *)v18.guidFormatType.Data4;
  if ( !v13
    && v17.dwSamplesPerFrame == v18.dwSamplesPerFrame
    && v17.dwBytesPerSampleContainer == v18.dwBytesPerSampleContainer
    && v17.dwValidBitsPerSample == v18.dwValidBitsPerSample
    && v17.fFramesPerSecond == v18.fFramesPerSecond )
  {
    return v10;
  }
  if ( !a3 )
  {
    v10 = -2147467261;
    goto LABEL_26;
  }
  *a3 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  v14 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v14 )
  {
    v15 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v14 + 8LL);
    if ( v15 == CAudioMediaType::AddRef )
      CAudioMediaType::AddRef(v14);
    else
      v15(v14);
  }
  return 1LL;
}
