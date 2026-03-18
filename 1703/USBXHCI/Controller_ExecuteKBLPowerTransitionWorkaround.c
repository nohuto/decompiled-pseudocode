/*
 * XREFs of Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C005325C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C002323C (Register_UpdateKBLUSB2PMCTRLRegister.c)
 */

void __fastcall Controller_ExecuteKBLPowerTransitionWorkaround(__int64 a1, char a2)
{
  __int64 v2; // rcx
  int v3; // edx
  __int64 *v4; // r10

  v2 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    Register_UpdateKBLUSB2PMCTRLRegister(v2, 0);
    Controller_ExecuteDSM(v4, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, v3 + 1, v3 + 2);
  }
  else
  {
    Register_UpdateKBLUSB2PMCTRLRegister(v2, 3u);
  }
}
