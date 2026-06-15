/*
 * XREFs of ?GetOta@CStreamInstanceNew@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14001403C
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400117A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400308F0 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstanceNew::GetOta(
        CStreamInstanceNew *this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // esi
  int v7; // edx
  struct IUnknown **v8; // rdi
  struct IUnknown *v9; // rdx
  struct IUnknown **v11; // r14
  CPipeInstance *v12; // rcx
  int PlaybackProtectionApo; // eax
  struct IUnknown *v14[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IAudioProcessingObject *v15; // [rsp+68h] [rbp+20h] BYREF

  v14[1] = (struct IUnknown *)-2LL;
  v6 = 0;
  v14[0] = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 != 3 )
    {
      v6 = -2147467263;
      goto LABEL_8;
    }
    v8 = (struct IUnknown **)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
      v6 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, char *))(*(_QWORD *)a3 + 24LL))(
             a3,
             0LL,
             (char *)this + 32);
    v9 = *v8;
  }
  else
  {
    v11 = (struct IUnknown **)((char *)this + 24);
    if ( !*((_QWORD *)this + 3) )
    {
      v15 = 0LL;
      v12 = *(CPipeInstance **)this;
      if ( v12 )
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v12, &v15);
      else
        PlaybackProtectionApo = 0;
      if ( PlaybackProtectionApo < 0
        && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          10LL,
          &WPP_abbc9616773bff2d22868d6a38e1f1c8_Traceguids,
          (unsigned int)PlaybackProtectionApo);
      }
      v6 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, struct IUnknown **))(*(_QWORD *)a3 + 24LL))(
             a3,
             v15,
             v11);
      if ( v15 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v15->lpVtbl->Release)(v15);
    }
    v9 = *v11;
  }
  if ( v9 )
    ATL::AtlComPtrAssign(v14, v9);
LABEL_8:
  *a4 = (struct IAudioVirtualProtectedOutput *)v14[0];
  if ( v6 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      11LL,
      &WPP_abbc9616773bff2d22868d6a38e1f1c8_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
