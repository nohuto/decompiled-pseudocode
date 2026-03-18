/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x18009D734
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008DCF0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x18009D6B0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_ATLASEDRECTSGROUP *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v7; // eax
  struct CResource **v8; // rdx
  int v9; // ebx
  int v10; // eax
  const void *v12; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v13; // [rsp+90h] [rbp+18h]

  v5 = *((_DWORD *)a3 + 2);
  v12 = a4;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v7 = UnmarshalResourceArray(&v12, &a5, v5, 4LL);
  v8 = v13;
  v9 = v7;
  *((_QWORD *)this + 28) = v13;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2E6u);
    goto LABEL_8;
  }
  v10 = CResource::RegisterNNotifiersInternal(this, v8, *((_DWORD *)this + 54));
  v9 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x303u);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2E9u);
LABEL_8:
    CAtlasedRectsGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v9;
}
