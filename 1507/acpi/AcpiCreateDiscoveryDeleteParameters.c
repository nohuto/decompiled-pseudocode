/*
 * XREFs of AcpiCreateDiscoveryDeleteParameters @ 0x1C003F5F0
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004A44 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C003F9F0 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall AcpiCreateDiscoveryDeleteParameters(_QWORD *a1, char a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4E706341u);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    v8[1] = v8;
    *v8 = v8;
    *a1 = v8;
    a1[1] = v8;
    if ( (_QWORD *)*v8 != v8 )
      __fastfail(3u);
    *v8 = a1;
    v8[1] = a1;
    *((_BYTE *)v8 + 16) = a2;
    v8[3] = qword_1C0059628;
    v8[4] = AcpiNotifyDiscoverDeleteMainCompletion;
    v8[5] = v8;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
