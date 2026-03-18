/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180016CE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x180017380 (-UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180048104 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_ATLASEDRECTSGROUP *a3,
        const void *a4,
        ...)
{
  unsigned int v4; // ebx
  int v6; // eax
  struct CResource **v7; // rdx
  int v8; // ebx
  int v9; // eax
  const void *v11; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v12; // [rsp+90h] [rbp+18h]
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = *((_DWORD *)a3 + 2);
  v11 = a4;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v6 = UnmarshalResourceArray(&v11, va, v4, 4LL);
  v7 = v12;
  v8 = v6;
  *((_QWORD *)this + 19) = v12;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2E6u);
LABEL_8:
    CAtlasedRectsGroup::UnRegisterNotifiers(this);
    goto LABEL_5;
  }
  v9 = CResource::RegisterNNotifiersInternal(this, v7, *((_DWORD *)this + 36));
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x303u);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2E9u);
    goto LABEL_8;
  }
LABEL_5:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v8;
}
