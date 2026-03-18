/*
 * XREFs of ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800B2A38
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800B2B00 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
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
         0x27u,
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x957u);
LABEL_8:
    CDcompRenderTargetGroup::UnRegisterNotifiers(this);
    goto LABEL_5;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 10));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x974u);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x95Au);
    goto LABEL_8;
  }
LABEL_5:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
