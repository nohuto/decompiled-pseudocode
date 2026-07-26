/*
 * XREFs of ndisStartNsiClient @ 0x1C001D5F8
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 */

__int64 ndisStartNsiClient()
{
  __int64 v0; // r8
  int v1; // ebx
  _QWORD v3[8]; // [rsp+20h] [rbp-40h] BYREF

  LODWORD(v3[0]) = 0;
  memset(&v3[1], 0, 0x38uLL);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(29LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v0);
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
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_d(30LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (unsigned int)v1);
  return (unsigned int)v1;
}
