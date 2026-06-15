/*
 * XREFs of ?IsLoopback@CStreamGroup@@UEAA_NXZ @ 0x140011780
 * Callers:
 *     ?StopStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E250 (-StopStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E340 (-StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CStreamGroup::IsLoopback(CStreamGroup *this)
{
  return *((_DWORD *)this + 58) == 2;
}
