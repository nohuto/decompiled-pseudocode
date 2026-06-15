/*
 * XREFs of ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x18006A8D4
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x18006AE80 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall AudioDeviceInterfaceGetContainerId(const unsigned __int16 *a1, struct _GUID *a2)
{
  int ObjectProperties; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v9; // [rsp+40h] [rbp-19h]
  __int128 v10; // [rsp+50h] [rbp-9h]

  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    if ( v9 < 2 || MEMORY[0x10] != 4 )
      return (unsigned int)-2147024894;
    v4 = MEMORY[0] - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
    if ( MEMORY[0] == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
      v4 = MEMORY[8] - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
    if ( v4 || MEMORY[0x20] != 13 || MEMORY[0x24] != 16 )
      return (unsigned int)-2147024894;
    v5 = *MEMORY[0x28] - *(_QWORD *)&DEVINTERFACE_AUDIO_CAPTURE.Data1;
    v10 = *MEMORY[0x28];
    if ( !v5 )
      v5 = *((_QWORD *)&v10 + 1) - *(_QWORD *)DEVINTERFACE_AUDIO_CAPTURE.Data4;
    if ( !v5 )
      goto LABEL_15;
    v6 = *MEMORY[0x28] - *(_QWORD *)&DEVINTERFACE_AUDIO_RENDER.Data1;
    if ( !v6 )
      v6 = *((_QWORD *)&v10 + 1) - *(_QWORD *)DEVINTERFACE_AUDIO_RENDER.Data4;
    if ( v6 )
    {
      return (unsigned int)-2147024894;
    }
    else
    {
LABEL_15:
      if ( MEMORY[0x40] != 2 )
        return (unsigned int)-2147023728;
      v7 = MEMORY[0x30] - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( MEMORY[0x30] == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v7 = MEMORY[0x38] - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( !v7 && MEMORY[0x50] == 13 && MEMORY[0x54] == 16 )
      {
        ObjectProperties = 0;
        *a2 = *(struct _GUID *)MEMORY[0x58];
      }
      else
      {
        return (unsigned int)-2147023728;
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
