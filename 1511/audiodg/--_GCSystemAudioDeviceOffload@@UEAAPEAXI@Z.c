/*
 * XREFs of ??_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z @ 0x14002D290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14002D08C (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffload *__fastcall CSystemAudioDeviceOffload::`scalar deleting destructor'(
        CSystemAudioDeviceOffload *this,
        char a2)
{
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
