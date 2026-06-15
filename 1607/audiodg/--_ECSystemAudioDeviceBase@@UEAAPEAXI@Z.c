/*
 * XREFs of ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x140029C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140003468 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CSystemAudioDeviceBase *__fastcall CSystemAudioDeviceBase::`vector deleting destructor'(
        CSystemAudioDeviceBase *this,
        char a2)
{
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
