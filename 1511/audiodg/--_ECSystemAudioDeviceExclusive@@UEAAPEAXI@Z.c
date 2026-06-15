/*
 * XREFs of ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x14002B060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14002AEE8 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CSystemAudioDeviceExclusive::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
