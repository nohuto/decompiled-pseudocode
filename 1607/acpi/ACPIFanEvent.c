/*
 * XREFs of ACPIFanEvent @ 0x1C004DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIFanLoop @ 0x1C004E2AC (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  const char *v5; // r8
  __int64 v6; // rbx
  const char *v7; // r10
  __int64 v8; // rax
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v4) = 0;
  v5 = (const char *)qword_1C002C340;
  v6 = DeviceExtension;
  v7 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v4 + 568);
    }
  }
  result = WPP_RECORDER_SF_Dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             4u,
             0x10u,
             0xEu,
             (__int64)&WPP_89e67fd0699430ed71704d47006f9e9f_Traceguids,
             a2,
             v4,
             v5,
             v7);
  if ( a2 == 128 )
    return ACPIFanLoop(v6, 1LL, 0LL);
  return result;
}
