/*
 * XREFs of ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000AFA0
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800070C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 * Callees:
 *     ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000BC40 (-IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000C340 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHH@Z @ 0x18008D684 (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHH@Z.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupConnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  bool (__fastcall *v4)(CBaseStreamGroupProxy *__hidden); // rbx
  bool IsFormatSensitive; // al
  int v6; // ebp
  bool (__fastcall *v7)(CBaseStreamGroupProxy *__hidden); // rbx
  bool IsPeriodicitySensitive; // al
  BOOL v9; // edi

  v4 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 216LL);
  if ( v4 == CBaseStreamGroupProxy::IsFormatSensitive )
    IsFormatSensitive = CBaseStreamGroupProxy::IsFormatSensitive(a2);
  else
    IsFormatSensitive = v4(a2);
  v6 = 0;
  if ( IsFormatSensitive
    || ((v7 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 208LL),
         v7 != CBaseStreamGroupProxy::IsPeriodicitySensitive)
      ? (IsPeriodicitySensitive = v7(a2))
      : (IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(a2)),
        IsPeriodicitySensitive) )
  {
    v9 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 208LL))(a2) != 0;
    LOBYTE(v6) = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2) != 0;
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), v6, v9);
  }
}
