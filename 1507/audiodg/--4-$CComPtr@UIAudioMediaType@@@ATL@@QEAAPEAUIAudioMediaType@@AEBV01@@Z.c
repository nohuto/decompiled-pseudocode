/*
 * XREFs of ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140003A10
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003824 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003938 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x1400189C0 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

CAudioMediaType *__fastcall ATL::CComPtr<IAudioMediaType>::operator=(CAudioMediaType **a1, CAudioMediaType **a2)
{
  CAudioMediaType *result; // rax
  CAudioMediaType *v4; // rbx
  unsigned int (__fastcall *v5)(CAudioMediaType *__hidden); // rdi

  result = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      v5 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v4 + 8LL);
      if ( v5 == CAudioMediaType::AddRef )
        CAudioMediaType::AddRef(v4);
      else
        v5(v4);
    }
    if ( *a1 )
      (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)*a1 + 16LL))(*a1);
    result = v4;
    *a1 = v4;
  }
  return result;
}
