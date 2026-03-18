/*
 * XREFs of ACPIInitializeAMLI @ 0x1C00A7CA0
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     ACPIInitGlobalHeapSize @ 0x1C008D3F4 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00A749C (OSReadAcpiConfigurationData.c)
 *     OSInitializeCallbacks @ 0x1C00A8F0C (OSInitializeCallbacks.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // eax
  int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  __int64 v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v9) = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, (unsigned int *)&v9) < 0 )
    gAMLIInitFlags = 0;
  LODWORD(v9) = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, (unsigned int *)&v9) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v1 = OSReadAcpiConfigurationData(&v9);
  v3 = v1;
  if ( v1 < 0 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      36,
      (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
      v1);
  }
  else
  {
    E820Info = v9 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v4, v0, v5, v6, v8);
  }
  return v3;
}
