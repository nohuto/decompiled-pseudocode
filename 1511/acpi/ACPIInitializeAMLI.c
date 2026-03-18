/*
 * XREFs of ACPIInitializeAMLI @ 0x1C0085294
 * Callers:
 *     ACPIInitialize @ 0x1C0086574 (ACPIInitialize.c)
 * Callees:
 *     ACPIInitGlobalHeapSize @ 0x1C006625C (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C006630C (OSReadRegValue.c)
 *     OSInitializeCallbacks @ 0x1C0084000 (OSInitializeCallbacks.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C0085630 (OSReadAcpiConfigurationData.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // ebx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // r9d
  __int64 v5; // [rsp+20h] [rbp-18h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v6) = 4;
  if ( OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, (unsigned int *)&v6) < 0 )
    gAMLIInitFlags = 0;
  LODWORD(v6) = 4;
  if ( OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, (unsigned int *)&v6) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  result = OSReadAcpiConfigurationData(&v6);
  if ( (int)result >= 0 )
  {
    E820Info = v6 + 44;
    OSInitializeCallbacks();
    return AMLIInitialize(v2, v0, v3, v4, v5);
  }
  return result;
}
