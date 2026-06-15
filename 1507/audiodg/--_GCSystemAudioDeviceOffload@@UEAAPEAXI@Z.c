/*
 * XREFs of ??_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z @ 0x14002E670
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x140001E1C (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
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
