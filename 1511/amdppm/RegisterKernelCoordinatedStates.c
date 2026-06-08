/*
 * XREFs of RegisterKernelCoordinatedStates @ 0x1C001657C
 * Callers:
 *     RegisterIdleComplete @ 0x1C0016230 (RegisterIdleComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0014A14 (ProcLibTraceCoordinatedIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00192FC (PepNotifyQueryCoordinatedStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedStates(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  _QWORD *v3; // rbx
  PVOID v4; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  if ( dword_1C0009878 )
  {
    v2 = PepNotifyQueryCoordinatedStates(a1, &P);
    v3 = P;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = P;
      *(_DWORD *)P = dword_1C0009878;
      v3[4] = PepQueryPlatformStateResidency;
      v3[1] = AmdPpmDeviceStart;
      v3[2] = PepIdlePreExecute;
      v3[3] = PepIdleComplete;
      v1 = ((__int64 (__fastcall *)(PVOID))qword_1C00095B8)(v4);
      if ( v1 >= 0 )
      {
        qword_1C0009888 = (__int64)v3;
        v3 = 0LL;
        ProcLibTraceCoordinatedIdleStates(0);
        v1 = 0;
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v1;
}
