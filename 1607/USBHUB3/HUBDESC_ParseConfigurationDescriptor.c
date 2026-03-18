/*
 * XREFs of HUBDESC_ParseConfigurationDescriptor @ 0x1C0028C54
 * Callers:
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006328 (HUBPARENT_SetHubConfiguration.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C001EADC (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0021554 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0024028 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0024B78 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 */

unsigned __int8 *__fastcall HUBDESC_ParseConfigurationDescriptor(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _BYTE *a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rdx
  unsigned __int8 *v16; // rcx
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // r9
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( a8 )
    *a8 = 0;
  if ( *(_BYTE *)a1 >= 9u && *(_BYTE *)(a1 + 1) == 2 && *(_WORD *)(a1 + 2) >= 9u )
  {
    while ( 1 )
    {
      v15 = *(unsigned __int16 *)(a1 + 2);
      v16 = a2;
      v17 = 0LL;
      v18 = v15 + a1;
      if ( (unsigned __int64)a2 >= v15 + a1 )
      {
LABEL_11:
        if ( v17 )
        {
          if ( (unsigned __int64)(a1 + v15 - (_QWORD)v17) < 9 )
          {
            v17 = 0LL;
            WPP_RECORDER_SF_(a9, 2u, 5u, 0xCu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
            a4 = v21;
          }
          if ( v17 )
          {
            v12 = v17;
            if ( a3 != -1 )
            {
              if ( v17[2] == a3 )
                ++v14;
              else
                v12 = 0LL;
            }
            if ( a4 != -1 && v17[3] != a4 )
              v12 = 0LL;
            if ( a5 != -1 && v17[5] != a5 )
              v12 = 0LL;
            if ( a6 != -1 && v17[6] != a6 )
              v12 = 0LL;
            if ( a7 != -1 && v17[7] != a7 )
              v12 = 0LL;
            a2 = &v17[*v17];
          }
        }
      }
      else
      {
        while ( v18 - (unsigned __int64)v16 >= 2 )
        {
          if ( !*v16 )
          {
            v19 = 11;
            goto LABEL_21;
          }
          if ( v16[1] == 4 )
          {
            v17 = v16;
            goto LABEL_11;
          }
          v16 += *v16;
          if ( (unsigned __int64)v16 >= v18 )
            goto LABEL_11;
        }
        v19 = 10;
LABEL_21:
        WPP_RECORDER_SF_(a9, 2u, 5u, v19, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
      }
      if ( v13 )
        break;
      if ( v12 )
      {
        v13 = v12;
        if ( !a8 )
          return v13;
        if ( v14 > 1 )
          goto LABEL_44;
      }
      if ( !v17 )
        return v13;
      a4 = v21;
    }
    if ( v14 > 1 && a8 )
LABEL_44:
      *a8 = 1;
  }
  return v13;
}
