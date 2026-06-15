/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000F0E0
 * Callers:
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DF70 (-GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400092D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1400189E0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v5; // rbx
  CProcessNode *v6; // rbx
  __int64 (__fastcall *v7)(CProcessNode *, struct IAudioMediaType **); // rdi
  int LeftFormat; // eax
  int v9; // edi
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rdi
  const struct tWAVEFORMATEX *AudioFormat; // rax
  __int64 cbSize; // rbx
  const struct tWAVEFORMATEX *v13; // rdi
  struct tWAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // rsi
  ULONG (__stdcall *Release)(IAudioMediaType *); // rsi
  struct IAudioMediaType *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  if ( *((_DWORD *)this + 52) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 16LL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = *(CProcessNode **)(v5 + 16);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(CProcessNode *, struct IAudioMediaType **))(*(_QWORD *)v6 + 8LL);
      if ( v7 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat(v6, &v18);
      else
        LeftFormat = v7(v6, &v18);
      v9 = LeftFormat;
      if ( LeftFormat >= 0 )
      {
        GetAudioFormat = v18->lpVtbl->GetAudioFormat;
        if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
          AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v18);
        else
          AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v18);
        cbSize = AudioFormat->cbSize;
        v13 = AudioFormat;
        v14 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
        v15 = v14;
        if ( v14 )
        {
          memcpy_0(v14, v13, cbSize + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        *a2 = v15;
      }
    }
    else
    {
      v9 = -2005139430;
    }
  }
  else
  {
    v9 = -2005139437;
  }
  LeaveCriticalSection(v2);
  if ( v9 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      57LL,
      &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      (unsigned int)v9);
  }
  if ( v18 )
  {
    Release = v18->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v18);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))Release)(v18);
  }
  return (unsigned int)v9;
}
