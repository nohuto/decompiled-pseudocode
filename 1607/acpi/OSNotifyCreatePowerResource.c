/*
 * XREFs of OSNotifyCreatePowerResource @ 0x1C0051258
 * Callers:
 *     OSNotifyCreate @ 0x1C000C8D0 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C0044754 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0044860 (ACPIBuildPowerResourceRequest.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(__int64 a1)
{
  char v1; // di
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  v2 = ACPIBuildPowerResourceExtension(a1, &v7);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 15;
LABEL_5:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      v5,
      (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
      v1,
      v2);
    return v4;
  }
  v1 = v7;
  v2 = ACPIBuildPowerResourceRequest(v7);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 16;
    goto LABEL_5;
  }
  return v4;
}
