/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x18001CFE0
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z @ 0x180048FF0 (--_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x1800207D0 (--1CAudioStream@@MEAA@XZ.c)
 */

CPerStreamVolumeAudioStream *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        CPerStreamVolumeAudioStream *this,
        char a2)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax

  v2 = (void *)*((_QWORD *)this + 40);
  *(_QWORD *)this = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
  *((_QWORD *)this + 40) = 0LL;
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
  {
    v6 = GetProcessHeap();
    HeapFree(v6, 0, this);
  }
  return this;
}
