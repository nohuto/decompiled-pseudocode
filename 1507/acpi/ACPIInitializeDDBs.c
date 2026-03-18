/*
 * XREFs of ACPIInitializeDDBs @ 0x1C0085FB4
 * Callers:
 *     ACPIInitialize @ 0x1C0086558 (ACPIInitialize.c)
 * Callees:
 *     ACPITableLoad @ 0x1C0006510 (ACPITableLoad.c)
 *     AMLILoadDDB @ 0x1C008606C (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1C0086290 (ACPILoadTableCheckSum.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C0088660 (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  unsigned int v0; // esi
  __int64 *i; // rdi
  ULONG_PTR v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    for ( i = (__int64 *)AcpiDynamicDataBlockTableList; i != &AcpiDynamicDataBlockTableList; i = (__int64 *)*i )
    {
      v2 = i[3];
      if ( !(unsigned __int8)ACPILoadTableCheckSum(v2, *(unsigned int *)(v2 + 4)) )
        KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, v2, *(unsigned int *)(v2 + 32));
      if ( (int)AMLILoadDDB(v2, &v4) < 0 )
        KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, v2, *(unsigned int *)(v2 + 32));
      i[2] = v4;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return v0;
}
