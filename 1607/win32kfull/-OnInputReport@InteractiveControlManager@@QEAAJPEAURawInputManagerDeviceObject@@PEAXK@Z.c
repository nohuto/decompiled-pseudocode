/*
 * XREFs of ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C023B958
 * Callers:
 *     ProcessHidInputViaRim @ 0x1C0229C44 (ProcessHidInputViaRim.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C023ABC4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnInputReport(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int Device; // ebx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  struct InteractiveControlDevice *v10[2]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  struct InteractiveControlDevice **v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]

  v10[0] = 0LL;
  Device = InteractiveControlManager::FindDevice(this, 0, a2, v10, 0LL);
  if ( Device >= 0 )
  {
    Device = InteractiveControlDevice::QueueAndGenerateInput(v10[0], a3, a4);
    if ( Device < 0 && (unsigned int)hProvider > 2 )
      goto LABEL_6;
  }
  else if ( (unsigned int)hProvider > 2 )
  {
LABEL_6:
    TlgCreateSz(&pDesc, "Function failed.");
    v15 = 0;
    v13 = v10;
    v14 = 4;
    LODWORD(v10[0]) = Device;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v7, v8, 4u, &pData);
  }
  return (unsigned int)Device;
}
