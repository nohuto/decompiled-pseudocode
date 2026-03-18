/*
 * XREFs of DeviceSlot_SetDeviceContext @ 0x1C0017004
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C00138F0 (WPP_RECORDER_SF_qdx.c)
 */

__int64 __fastcall DeviceSlot_SetDeviceContext(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v5 = a3;
  v8 = 0;
  if ( Controller_IsControllerAccessible(a1[1]) )
  {
    v9 = *(_QWORD *)(a1[3] + 16);
    if ( *(_QWORD *)(v9 + 8 * v5) )
    {
      v8 = -1073741790;
      v11 = v5;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(a1[1] + 64),
        2u,
        9u,
        0x14u,
        (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
        v11,
        *(_QWORD *)(a1[4] + 8 * v5));
    }
    else
    {
      *(_QWORD *)(a1[4] + 8 * v5) = a2;
      *(_QWORD *)(v9 + 8 * v5) = a4;
      v12 = v5;
      WPP_RECORDER_SF_qdx(
        *(_QWORD *)(a1[1] + 64),
        v7,
        9u,
        0x13u,
        (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
        a2,
        v12,
        a4);
    }
  }
  return v8;
}
