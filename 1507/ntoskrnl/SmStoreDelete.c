/*
 * XREFs of SmStoreDelete @ 0x1406DA214
 * Callers:
 *     SmcCacheCleanup @ 0x1406DAEB8 (SmcCacheCleanup.c)
 *     SmcStoreDelete @ 0x1406DBA20 (SmcStoreDelete.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401821B0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1406DA294 (SmStorePhysicalRequestIssue.c)
 */

int __fastcall SmStoreDelete(int a1, int a2)
{
  int *v2; // rax
  _QWORD SystemInformation[4]; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+70h] [rbp+20h] BYREF
  int v6; // [rsp+74h] [rbp+24h]
  __int64 v7; // [rsp+78h] [rbp+28h] BYREF

  v6 = a2;
  SystemInformation[0] = 0x400000001LL;
  SystemInformation[2] = 8LL;
  v2 = &v5;
  SystemInformation[1] = &v5;
  v5 = 1;
  if ( a1 )
  {
    if ( a1 == 1 )
      LODWORD(v2) = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18uLL);
  }
  else
  {
    LODWORD(v2) = SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v7);
  }
  return (int)v2;
}
