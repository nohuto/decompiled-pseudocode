/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C0022464
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C00220C8 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00016E0 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0022024 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  int v0; // eax
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  int v4; // eax
  unsigned int i; // ecx
  unsigned int v6; // r10d
  __int64 v8[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+18h] BYREF

  qword_1C000E208 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C000DD18, 32, (__int64)v8);
  ResetEnumerationContext(v8);
  v0 = EnumerateNextDevice((__int64)v8, &v10);
  v1 = &qword_1C000E208;
  while ( !v0 )
  {
    v2 = v10;
    if ( (int)GetProcessorEfficiencyClass(v10, &v9) < 0 )
    {
      InitializeEnumerationContext((__int64)&qword_1C000DD18, 32, (__int64)v8);
      ResetEnumerationContext(v8);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v8, &v10) )
        *(_BYTE *)(v10 + 320) = 0;
      dword_1C000E204 = 1;
      qword_1C000E208 = 0LL;
      LODWORD(qword_1C000E208) = dword_1C000DD04;
      return v6;
    }
    v3 = v9;
    *(_BYTE *)(v2 + 320) = v9;
    ++*((_DWORD *)&qword_1C000E208 + v3);
    v0 = EnumerateNextDevice((__int64)v8, &v10);
  }
  v4 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_DWORD *)v1 )
      break;
    ++v4;
    v1 = (__int64 *)((char *)v1 + 4);
  }
  dword_1C000E204 = v4;
  return 0;
}
