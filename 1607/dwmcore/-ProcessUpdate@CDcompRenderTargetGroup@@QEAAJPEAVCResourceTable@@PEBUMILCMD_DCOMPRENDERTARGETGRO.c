/*
 * XREFs of ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800B66EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008DCF0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800B6660 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CDcompRenderTargetGroup::ProcessUpdate(
        CDcompRenderTargetGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGETGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // eax
  struct CResource **v9; // rdx
  int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-58h]
  unsigned int *v14; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v14 = a4;
  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  v8 = UnmarshalResourceArray(&v14, &a5, v5, 40LL, v13, (unsigned int *)this + 28, (__int64 **)&v15, (__int64)a2, 0);
  v9 = v15;
  v10 = v8;
  *((_QWORD *)this + 15) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x90Du);
    goto LABEL_8;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 28));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x92Au);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x910u);
LABEL_8:
    CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
