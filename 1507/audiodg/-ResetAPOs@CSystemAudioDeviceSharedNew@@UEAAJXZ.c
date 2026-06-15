/*
 * XREFs of ?ResetAPOs@CSystemAudioDeviceSharedNew@@UEAAJXZ @ 0x14000E640
 * Callers:
 *     ?PumpPaused@CSystemAudioDeviceSharedNew@@UEAAJXZ @ 0x14000E5F0 (-PumpPaused@CSystemAudioDeviceSharedNew@@UEAAJXZ.c)
 * Callees:
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F460 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::ResetAPOs(CSystemAudioDeviceSharedNew *this)
{
  __int64 (__fastcall *v1)(CAudioDeviceGraph *__hidden); // rdi

  v1 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(**((_QWORD **)this + 45) + 128LL);
  if ( v1 == CAudioDeviceGraph::ResetAPOs )
    return CAudioDeviceGraph::ResetAPOs(*((CAudioDeviceGraph **)this + 45));
  else
    return v1(*((CAudioDeviceGraph **)this + 45));
}
