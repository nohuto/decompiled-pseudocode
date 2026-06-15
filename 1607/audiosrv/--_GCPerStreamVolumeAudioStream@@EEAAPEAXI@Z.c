/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x1800167A0
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z @ 0x1800392B0 (--_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019C60 (--1CAudioStream@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerStreamVolumeAudioStream *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        CPerStreamVolumeAudioStream *this,
        char a2)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (void *)*((_QWORD *)this + 62);
  *(_QWORD *)this = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
  *((_QWORD *)this + 62) = 0LL;
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
