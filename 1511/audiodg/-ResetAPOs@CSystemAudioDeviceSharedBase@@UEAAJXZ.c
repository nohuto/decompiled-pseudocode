/*
 * XREFs of ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005D30
 * Callers:
 *     ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005CE0 (-PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 * Callees:
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140007190 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetAPOs(CSystemAudioDeviceSharedBase *this)
{
  __int64 (__fastcall *v1)(CAudioDeviceGraph *__hidden); // rdi

  v1 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(**((_QWORD **)this + 38) + 160LL);
  if ( v1 == CAudioDeviceGraph::ResetAPOs )
    return CAudioDeviceGraph::ResetAPOs(*((CAudioDeviceGraph **)this + 38));
  else
    return v1(*((CAudioDeviceGraph **)this + 38));
}
