/*
 * XREFs of ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800607A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180048104 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x180060870 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDcompRenderTargetGroup::ProcessUpdate(
        CDcompRenderTargetGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGETGROUP *a3,
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
  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  v8 = UnmarshalResourceArray(
         (WPF *)&v14,
         &a5,
         v5,
         0x26u,
         v13,
         (unsigned int *)this + 10,
         (__int64 **)&v15,
         (__int64)a2,
         0);
  v9 = v15;
  v10 = v8;
  *((_QWORD *)this + 6) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x955u);
LABEL_8:
    CDcompRenderTargetGroup::UnRegisterNotifiers(this);
    goto LABEL_5;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 10));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x972u);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x958u);
    goto LABEL_8;
  }
LABEL_5:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
