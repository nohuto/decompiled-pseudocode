/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedNew@@UEAAJXZ @ 0x14000E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CSystemAudioDeviceSharedNew@@UEAAJXZ @ 0x14000E640 (-ResetAPOs@CSystemAudioDeviceSharedNew@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::PumpPaused(CSystemAudioDeviceSharedNew *this)
{
  __int64 (__fastcall *v1)(CSystemAudioDeviceSharedNew *__hidden); // rdi
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *__hidden))(*((_QWORD *)this - 34) + 128LL);
  if ( v1 == CSystemAudioDeviceSharedNew::ResetAPOs )
    v2 = CSystemAudioDeviceSharedNew::ResetAPOs((CSystemAudioDeviceSharedNew *)((char *)this - 272));
  else
    v2 = v1((CSystemAudioDeviceSharedNew *)((char *)this - 272));
  v3 = v2;
  if ( v2 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      20LL,
      &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
      (unsigned int)v2);
  }
  return v3;
}
