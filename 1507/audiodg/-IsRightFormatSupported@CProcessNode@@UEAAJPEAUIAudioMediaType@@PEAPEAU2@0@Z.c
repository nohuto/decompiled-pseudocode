/*
 * XREFs of ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140008D60
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140008900 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x1400189C0 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProcessNode::IsRightFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  CAudioMediaType *v7; // rbx
  __int64 (__fastcall *v8)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *); // rbp
  int UncompressedAudioFormat; // eax
  unsigned int v10; // ebx
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int (__fastcall *v15)(CAudioMediaType *__hidden); // rdi
  struct _UNCOMPRESSEDAUDIOFORMAT v17; // [rsp+20h] [rbp-88h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v18; // [rsp+48h] [rbp-60h] BYREF

  if ( !a2 )
    return 0LL;
  v7 = (CAudioMediaType *)*((_QWORD *)this + 2);
  v8 = *(__int64 (__fastcall **)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v7 + 48LL);
  if ( v8 == CAudioMediaType::GetUncompressedAudioFormat )
    UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat(v7, &v18);
  else
    UncompressedAudioFormat = ((__int64 (__fastcall *)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *, struct IAudioMediaType **, struct IAudioMediaType *))v8)(
                                v7,
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
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        12LL,
        &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
        v10);
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
  *a3 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    v15 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v14 + 8LL);
    if ( v15 == CAudioMediaType::AddRef )
      CAudioMediaType::AddRef(*((CAudioMediaType **)this + 2));
    else
      v15(*((CAudioMediaType **)this + 2));
  }
  return 1LL;
}
