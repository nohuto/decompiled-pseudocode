/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C000F950
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C001034C (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  char v4; // al
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (_QWORD *)(a1 + 216);
  v4 = 0;
  v5 = qword_1C002C340;
  v6 = qword_1C002C340;
  if ( v1 )
  {
    v7 = v1[1];
    v4 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (__int64 *)v1[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (__int64 *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    78,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v4,
    (__int64)v5,
    (__int64)v6);
  *(_DWORD *)(a1 + 212) = 8;
  v8 = v2[2];
  if ( (v8 & 9) == 9 && ((v8 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    memset(v2, 0, 0x28uLL);
    ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common(a1 + 208, 2LL);
  }
  return 0LL;
}
