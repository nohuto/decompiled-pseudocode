/*
 * XREFs of ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140015050
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014E64 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014F78 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017050 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

CAudioMediaType *__fastcall ATL::CComPtr<IAudioMediaType>::operator=(CAudioMediaType **a1, CAudioMediaType **a2)
{
  CAudioMediaType *result; // rax
  CAudioMediaType *v4; // rbx
  unsigned int (__fastcall *v5)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v6; // rcx

  result = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      v5 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v4 + 8LL);
      v6 = *a2;
      if ( v5 == CAudioMediaType::AddRef )
        CAudioMediaType::AddRef(v6);
      else
        v5(v6);
    }
    if ( *a1 )
      (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    return v4;
  }
  return result;
}
