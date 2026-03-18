/*
 * XREFs of ACPISystemPowerProcessRootMapping @ 0x1C008F970
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0027C88 (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     WPP_RECORDER_SF_DLqss @ 0x1C0056814 (WPP_RECORDER_SF_DLqss.c)
 */

__int64 __fastcall ACPISystemPowerProcessRootMapping(_QWORD *a1, __int64 a2)
{
  unsigned int *v3; // rdi
  signed int i; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v11; // r8
  const char *v12; // r9
  const char *v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v3 = (unsigned int *)(a2 + 8);
  for ( i = 2; i <= 6; ++i )
  {
    v5 = AcpiSupportedSystemStates;
    if ( _bittest(&v5, i) )
    {
      v15 = 16;
      v6 = ACPISystemPowerDetermineSupportedDeviceStates((__int64)a1, i, &v15);
      if ( v6 < 0 )
      {
        v11 = 0LL;
        v12 = (const char *)qword_1C0090C20;
        v13 = (const char *)qword_1C0090C20;
        if ( a1 )
        {
          v7 = a1[1];
          v11 = (__int64)a1;
          if ( (v7 & 0x200000000000LL) != 0 )
          {
            v12 = (const char *)a1[70];
            if ( (v7 & 0x400000000000LL) != 0 )
              v13 = (const char *)a1[71];
          }
        }
        WPP_RECORDER_SF_DLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v7,
          v11,
          (__int64)v12,
          v14,
          i - 1,
          v6,
          v11,
          v12,
          v13);
        *v3 = 4;
      }
      else
      {
        v8 = *v3;
        if ( (int)*v3 <= 4 )
        {
          v9 = v15;
          while ( !_bittest(&v9, v8) )
          {
            if ( (int)++v8 > 4 )
              goto LABEL_8;
          }
          *v3 = v8;
        }
      }
    }
LABEL_8:
    ++v3;
  }
  return 0LL;
}
