/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076340
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E70 (-QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E80 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E90 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048EA0 (-QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GDKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048EB0 (-QueryInterface@CPerEndpointVolumeAudioSession@@GDKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028A20 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  char *v4; // rcx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1
      && *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 == *(_QWORD *)a2->Data4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 10);
      if ( this )
        v4 = (char *)this + 936;
      else
        v4 = 0LL;
      *a3 = v4;
    }
    else
    {
      return (unsigned int)CAudioSession::QueryInterface(this, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
