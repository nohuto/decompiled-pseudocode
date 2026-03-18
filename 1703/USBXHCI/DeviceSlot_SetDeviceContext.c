/*
 * XREFs of DeviceSlot_SetDeviceContext @ 0x1C001CF84
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C001963C (WPP_RECORDER_SF_qdx.c)
 */

__int64 __fastcall DeviceSlot_SetDeviceContext(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v5 = a3;
  v9 = 0;
  if ( Controller_IsControllerAccessible(a1[1]) )
  {
    v10 = *(_QWORD *)(a1[3] + 16);
    if ( *(_QWORD *)(v10 + 8 * v5) )
    {
      v9 = -1073741790;
      v12 = v5;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(a1[1] + 64),
        2u,
        9u,
        0x14u,
        (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
        v12,
        *(_QWORD *)(a1[4] + 8 * v5));
    }
    else
    {
      *(_QWORD *)(a1[4] + 8 * v5) = a2;
      *(_QWORD *)(v10 + 8 * v5) = a4;
      v13 = v5;
      WPP_RECORDER_SF_qdx(
        *(_QWORD *)(a1[1] + 64),
        v8,
        9u,
        0x13u,
        (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
        a2,
        v13,
        a4);
    }
  }
  return v9;
}
