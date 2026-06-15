/*
 * XREFs of ?IsActive@CStreamGroup@@UEAA_NXZ @ 0x140012CD0
 * Callers:
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E160 (-DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CStreamGroup::IsActive(CStreamGroup *this)
{
  return *((_DWORD *)this + 34) != 0;
}
