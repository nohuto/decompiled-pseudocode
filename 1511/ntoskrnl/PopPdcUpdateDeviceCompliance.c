/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x140637D34
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140637B24 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 */

__int64 PopPdcUpdateDeviceCompliance()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  int v2; // edi
  int v3; // esi
  int v4; // edx
  int *v5; // rdx

  v0 = PopPdcDeviceList;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  while ( (__int64 *)v0 != &PopPdcDeviceList )
  {
    v4 = 1 << *(_DWORD *)(v0 + 24);
    v3 |= v4;
    if ( *(_BYTE *)(v0 + 32) )
      v2 |= v4;
    v0 = *(_QWORD *)v0;
  }
  PopAcquirePolicyLock();
  v5 = &PopCsDeviceCompliance;
  do
  {
    if ( ((1 << v1) & v2) != 0 )
      *v5 = 1;
    else
      *v5 = -((v3 & (1 << v1)) != 0);
    ++v1;
    ++v5;
  }
  while ( v1 < 5 );
  return PopReleasePolicyLock();
}
