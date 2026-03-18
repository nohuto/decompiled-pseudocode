/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0010910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  char v3; // r10
  const char *v4; // rcx
  const char *v5; // r8
  __int64 v6; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v4 = (const char *)qword_1C002C340;
  v5 = (const char *)qword_1C002C340;
  if ( v1 )
  {
    v6 = v1[1];
    v3 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x34u,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v3,
    v4,
    v5);
  if ( (*(_DWORD *)(a1 + 232) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 256) = 0;
    *(_DWORD *)(a1 + 212) = 2;
  }
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  return 0LL;
}
