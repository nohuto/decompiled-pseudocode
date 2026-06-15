/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x18002F460
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z @ 0x180044DD0 (--_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x18001E0B0 (--1CAudioStream@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax

  DebugInfo = this[8].DebugInfo;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)&this->LockCount = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  this->OwningThread = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, DebugInfo);
  this[8].DebugInfo = 0LL;
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
  {
    v6 = GetProcessHeap();
    HeapFree(v6, 0, this);
  }
  return this;
}
