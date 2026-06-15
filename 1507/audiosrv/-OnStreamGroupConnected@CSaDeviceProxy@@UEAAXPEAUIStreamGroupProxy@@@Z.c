/*
 * XREFs of ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026CE0
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800297F0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 * Callees:
 *     ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x1800264A0 (-IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180026B80 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHH@Z @ 0x18008FDFC (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHH@Z.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupConnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  _BOOL8 (__fastcall *v4)(CBaseStreamGroupProxy *); // rbx
  bool IsFormatSensitive; // al
  int v6; // ebp
  _BOOL8 (__fastcall *v7)(CBaseStreamGroupProxy *); // rbx
  bool IsPeriodicitySensitive; // al
  BOOL v9; // edi

  v4 = *(_BOOL8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a2 + 192LL);
  if ( v4 == CBaseStreamGroupProxy::IsFormatSensitive )
    IsFormatSensitive = CBaseStreamGroupProxy::IsFormatSensitive(a2);
  else
    IsFormatSensitive = v4(a2);
  v6 = 0;
  if ( IsFormatSensitive
    || ((v7 = *(_BOOL8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a2 + 184LL),
         v7 != CBaseStreamGroupProxy::IsPeriodicitySensitive)
      ? (IsPeriodicitySensitive = v7(a2))
      : (IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(a2)),
        IsPeriodicitySensitive) )
  {
    v9 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 184LL))(a2) != 0;
    LOBYTE(v6) = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 192LL))(a2) != 0;
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), v6, v9);
  }
}
