/*
 * XREFs of ndisStartNsiClient @ 0x1C0020D34
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 */

__int64 ndisStartNsiClient()
{
  __int64 v0; // r8
  int v1; // ebx
  _QWORD v3[8]; // [rsp+20h] [rbp-40h] BYREF

  LODWORD(v3[0]) = 0;
  memset(&v3[1], 0, 0x38uLL);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(29LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v0);
  LODWORD(v3[0]) = 0;
  v3[1] = &NPI_MS_NDIS_MODULEID;
  LOBYTE(v3[4]) = 1;
  v3[3] = &ndisNsiClientParameterChangeHandler;
  LODWORD(v3[2]) = 7;
  v3[5] = 7LL;
  v3[7] = &ndisNsiClientCompartmentChangeNotificationHandle;
  v1 = NsiRegisterChangeNotificationEx(v3);
  if ( v1 >= 0 )
  {
    LODWORD(v3[2]) = 6;
    v3[5] = 6LL;
    v3[7] = &ndisNsiClientNetworkChangeNotificationHandle;
    v1 = NsiRegisterChangeNotificationEx(v3);
    if ( v1 >= 0 )
    {
      LODWORD(v3[2]) = 1;
      v3[7] = &ndisNsiClientInterfaceEnumChangeNotificationHandle;
      v3[5] = 1LL;
      v1 = NsiRegisterChangeNotificationEx(v3);
      if ( v1 >= 0 )
      {
        LODWORD(v3[2]) = 0;
        v3[5] = 0LL;
        v3[7] = &ndisNsiClientInterfaceChangeNotificationHandle;
        v1 = NsiRegisterChangeNotificationEx(v3);
      }
    }
  }
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_d(30LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (unsigned int)v1);
  return (unsigned int)v1;
}
