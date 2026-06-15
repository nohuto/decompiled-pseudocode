/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003150
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400092C0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003240 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  HRESULT Instance; // ebx
  LPVOID v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[1] = (LPVOID)-2LL;
  v11[0] = 0LL;
  a5 = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v11);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v11[0] + 40LL))(v11[0], a1, &a5);
    if ( Instance >= 0 )
      Instance = TrackSystemEffectBehavior(a5, a2, a3, a4);
  }
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v11[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return (unsigned int)Instance;
}
