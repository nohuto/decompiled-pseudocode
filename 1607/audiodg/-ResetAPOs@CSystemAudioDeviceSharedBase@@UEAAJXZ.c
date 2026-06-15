/*
 * XREFs of ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x1400058C0
 * Callers:
 *     ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005870 (-PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetAPOs(CSystemAudioDeviceSharedBase *this)
{
  CAudioDeviceGraph *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CAudioDeviceGraph *)*((_QWORD *)this + 38);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 160LL);
  if ( (char *)v2 == (char *)CAudioDeviceGraph::ResetAPOs )
    return CAudioDeviceGraph::ResetAPOs(v1);
  else
    return v2();
}
