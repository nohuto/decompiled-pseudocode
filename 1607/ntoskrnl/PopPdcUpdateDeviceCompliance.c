/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x1406701F4
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140207E60 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 */

__int64 PopPdcUpdateDeviceCompliance()
{
  _DWORD *v0; // rax
  unsigned int v1; // ebx
  int v2; // esi
  int v3; // ebp
  int v4; // edx
  int *v5; // rdi
  int v6; // edx

  v0 = PopPdcDeviceList;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  while ( v0 != (_DWORD *)&PopPdcDeviceList )
  {
    v4 = 1 << v0[6];
    v3 |= v4;
    if ( *((_BYTE *)v0 + 32) )
      v2 |= v4;
    v0 = *(_DWORD **)v0;
  }
  PopAcquirePolicyLock();
  v5 = PopCsDeviceCompliance;
  do
  {
    if ( ((1 << v1) & v2) != 0 )
      v6 = 1;
    else
      v6 = -((v3 & (1 << v1)) != 0);
    if ( v6 != *v5 )
    {
      *v5 = v6;
      PopDiagTraceDeviceComplianceUpdate(v1, v6);
    }
    ++v1;
    ++v5;
  }
  while ( v1 < 5 );
  return PopReleasePolicyLock();
}
