/*
 * XREFs of ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140015D00
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015B0C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015C20 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017A60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
