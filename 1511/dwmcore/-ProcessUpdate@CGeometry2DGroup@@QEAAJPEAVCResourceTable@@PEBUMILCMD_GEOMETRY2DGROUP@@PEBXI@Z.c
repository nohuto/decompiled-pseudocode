/*
 * XREFs of ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1800F33BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x18012FFF0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::ProcessUpdate(
        CGeometry2DGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_GEOMETRY2DGROUP *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // eax
  struct CResource **v9; // rdx
  int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-58h]
  const void *v14; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v14 = a4;
  CGeometry2DGroup::UnRegisterNotifiers(this);
  v8 = UnmarshalResourceArray(
         (WPF *)&v14,
         &a5,
         v5,
         1u,
         v13,
         (unsigned int *)this + 20,
         (__int64 **)&v15,
         (__int64)a2,
         1);
  v9 = v15;
  v10 = v8;
  *((_QWORD *)this + 11) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1D4u);
LABEL_7:
    CGeometry2DGroup::UnRegisterNotifiers(this);
    goto LABEL_8;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 20));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1F1u);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1D7u);
    goto LABEL_7;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
