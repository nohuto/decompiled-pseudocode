/*
 * XREFs of ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x180013F04
 * Callers:
 *     ??_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z @ 0x180044B80 (--_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180013F3C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 */

CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::`scalar deleting destructor'(
        CPerStreamVolumeAudioSession *this,
        char a2)
{
  CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
