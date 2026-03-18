/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0049190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  const char *v5; // r10
  char v6; // r8
  const char *v8; // r11
  __int64 v9; // rcx

  v4 = *(_QWORD **)(a4 + 40);
  v5 = (const char *)qword_1C002C340;
  v6 = 0;
  v8 = (const char *)qword_1C002C340;
  if ( v4 )
  {
    v9 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v4[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0xDu,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a2,
    v6,
    v5,
    v8);
  ACPIDereferenceWaitWakePowerRequest(a4);
}
