/*
 * XREFs of ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0049C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x1C0059888 (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // r8
  const char *v4; // rcx
  const char *v5; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1[1];
    v4 = (const char *)qword_1C002C340;
    v5 = (const char *)qword_1C002C340;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[70];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x35u,
      (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
      a1,
      (char)v1,
      v4,
      v5);
  }
  *(_DWORD *)(a1 + 212) = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
