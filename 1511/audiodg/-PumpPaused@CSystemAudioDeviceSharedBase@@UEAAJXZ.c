/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005D30 (-ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  __int64 (__fastcall *v1)(CSystemAudioDeviceSharedBase *__hidden); // rdi
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden))(*((_QWORD *)this - 34) + 160LL);
  if ( v1 == CSystemAudioDeviceSharedBase::ResetAPOs )
    v2 = CSystemAudioDeviceSharedBase::ResetAPOs((CSystemAudioDeviceSharedBase *)((char *)this - 272));
  else
    v2 = v1((CSystemAudioDeviceSharedBase *)((char *)this - 272));
  v3 = v2;
  if ( v2 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      28LL,
      &WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids,
      (unsigned int)v2);
  }
  return v3;
}
