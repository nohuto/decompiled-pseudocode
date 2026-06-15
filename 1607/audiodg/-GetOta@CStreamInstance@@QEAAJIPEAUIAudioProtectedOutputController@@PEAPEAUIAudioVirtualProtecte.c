/*
 * XREFs of ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400316F4
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140031890 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14002E650 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::GetOta(
        CStreamInstance *this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // ebx
  int v7; // edx
  struct IUnknown **v8; // rdi
  CPipeInstance *v9; // rcx
  int PlaybackProtectionApo; // eax
  struct IUnknown *v12[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IAudioProcessingObject *v13; // [rsp+68h] [rbp+20h] BYREF

  v12[1] = (struct IUnknown *)-2LL;
  v6 = 0;
  v12[0] = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 != 3 )
    {
      v6 = -2147467263;
      goto LABEL_19;
    }
    v8 = (struct IUnknown **)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
      v6 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, char *))(*(_QWORD *)a3 + 24LL))(
             a3,
             0LL,
             (char *)this + 32);
  }
  else
  {
    v8 = (struct IUnknown **)((char *)this + 24);
    if ( !*((_QWORD *)this + 3) )
    {
      v13 = 0LL;
      v9 = *(CPipeInstance **)this;
      if ( v9 )
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v9, &v13);
      else
        PlaybackProtectionApo = 0;
      if ( PlaybackProtectionApo < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xAu,
          (__int64)&WPP_038ebcd9436636c4ced351fd008a2e04_Traceguids,
          PlaybackProtectionApo);
      }
      v6 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, struct IUnknown **))(*(_QWORD *)a3 + 24LL))(
             a3,
             v13,
             v8);
      if ( v13 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
    }
  }
  if ( *v8 )
    ATL::AtlComPtrAssign(v12, *v8);
LABEL_19:
  *a4 = (struct IAudioVirtualProtectedOutput *)v12[0];
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_038ebcd9436636c4ced351fd008a2e04_Traceguids, v6);
    }
    AudDGTraceLoggingErrorHelper("CStreamInstance::GetOta", 210, v6);
  }
  return (unsigned int)v6;
}
