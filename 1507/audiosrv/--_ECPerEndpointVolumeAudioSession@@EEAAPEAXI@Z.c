/*
 * XREFs of ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x180076F48
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@GCA@EAAPEAXI@Z @ 0x180044B70 (--_ECPerEndpointVolumeAudioSession@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180076D64 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 */

CPerEndpointVolumeAudioSession *__fastcall CPerEndpointVolumeAudioSession::`vector deleting destructor'(
        CPerEndpointVolumeAudioSession *this,
        char a2)
{
  CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
