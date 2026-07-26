/*
 * XREFs of ndisStartNsiClient @ 0x1C0012D44
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 */

__int64 ndisStartNsiClient()
{
  int v0; // ebx
  int v2; // [rsp+20h] [rbp-40h] BYREF
  const NPI_MODULEID *v3; // [rsp+28h] [rbp-38h]
  int v4; // [rsp+30h] [rbp-30h]
  void *v5; // [rsp+38h] [rbp-28h]
  char v6; // [rsp+40h] [rbp-20h]
  __int64 v7; // [rsp+48h] [rbp-18h]
  void *v8; // [rsp+50h] [rbp-10h]

  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(29LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  v2 = 0;
  v3 = &NPI_MS_NDIS_MODULEID;
  v6 = 1;
  v5 = &ndisNsiClientParameterChangeHandler;
  v4 = 7;
  v7 = 7LL;
  v8 = &ndisNsiClientCompartmentChangeNotificationHandle;
  v0 = NsiRegisterChangeNotificationEx(&v2);
  if ( v0 >= 0 )
  {
    v4 = 6;
    v7 = 6LL;
    v8 = &ndisNsiClientNetworkChangeNotificationHandle;
    v0 = NsiRegisterChangeNotificationEx(&v2);
    if ( v0 >= 0 )
    {
      v4 = 1;
      v8 = &ndisNsiClientInterfaceEnumChangeNotificationHandle;
      v7 = 1LL;
      v0 = NsiRegisterChangeNotificationEx(&v2);
      if ( v0 >= 0 )
      {
        v4 = 0;
        v7 = 0LL;
        v8 = &ndisNsiClientInterfaceChangeNotificationHandle;
        v0 = NsiRegisterChangeNotificationEx(&v2);
      }
    }
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_d(30LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (unsigned int)v0);
  return (unsigned int)v0;
}
