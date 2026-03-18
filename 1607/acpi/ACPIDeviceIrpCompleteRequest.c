/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x1C0029A80
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x1C0046B90 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 */

LONG __fastcall ACPIDeviceIrpCompleteRequest(_QWORD *a1, IRP *a2, int a3)
{
  const char *v4; // r10
  char v5; // cl
  const char *v8; // r11
  __int64 v9; // rax

  v4 = (const char *)qword_1C002C340;
  v5 = 0;
  v8 = (const char *)qword_1C002C340;
  if ( a1 )
  {
    v9 = a1[1];
    v5 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)a1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)a1[71];
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x1Au,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    (char)a2,
    a3,
    v5,
    v4,
    v8);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount((__int64)a1);
}
