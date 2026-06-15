/*
 * XREFs of ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140003178
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400035A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14000C550 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140016E60 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::GetOta(
        struct IAudioVirtualProtectedOutput **this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // esi
  int v7; // edx
  struct IUnknown **v8; // rbx
  __int64 (__fastcall *v9)(CProtectedOutputController *__hidden, struct IAudioProcessingObject *, struct IAudioVirtualProtectedOutput **); // rdi
  int VirtualProtectedOutput; // eax
  struct IUnknown *v11; // rdx
  struct IUnknown **v13; // r14
  CPipeInstance *v14; // rcx
  int PlaybackProtectionApo; // eax
  struct IUnknown *v16[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IAudioProcessingObject *v17; // [rsp+68h] [rbp+20h] BYREF

  v16[1] = (struct IUnknown *)-2LL;
  v6 = 0;
  v16[0] = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 != 3 )
    {
      v6 = -2147467263;
      goto LABEL_10;
    }
    v8 = (struct IUnknown **)(this + 4);
    if ( !this[4] )
    {
      v9 = *(__int64 (__fastcall **)(CProtectedOutputController *__hidden, struct IAudioProcessingObject *, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)a3 + 24LL);
      if ( v9 == CProtectedOutputController::CreateVirtualProtectedOutput )
        VirtualProtectedOutput = CProtectedOutputController::CreateVirtualProtectedOutput(a3, 0LL, this + 4);
      else
        VirtualProtectedOutput = v9(a3, 0LL, this + 4);
      v6 = VirtualProtectedOutput;
    }
    v11 = *v8;
  }
  else
  {
    v13 = (struct IUnknown **)(this + 3);
    if ( !this[3] )
    {
      v17 = 0LL;
      v14 = *this;
      if ( v14 )
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v14, &v17);
      else
        PlaybackProtectionApo = 0;
      if ( PlaybackProtectionApo < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_076b1de22f212f5ff1194b9e602964d1_Traceguids,
          (unsigned int)PlaybackProtectionApo);
      }
      v6 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, struct IUnknown **))(*(_QWORD *)a3 + 24LL))(
             a3,
             v17,
             v13);
      if ( v17 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v17->lpVtbl->Release)(v17);
    }
    v11 = *v13;
  }
  if ( v11 )
    ATL::AtlComPtrAssign(v16, v11);
LABEL_10:
  *a4 = (struct IAudioVirtualProtectedOutput *)v16[0];
  if ( v6 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_076b1de22f212f5ff1194b9e602964d1_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
