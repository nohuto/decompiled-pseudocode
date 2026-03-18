/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0007948
 * Callers:
 *     RIMValidateAllCollectionUsages @ 0x1C0005D80 (RIMValidateAllCollectionUsages.c)
 *     RIMIsParallelDevice @ 0x1C0008A30 (RIMIsParallelDevice.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0007A8C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 *a4,
        unsigned __int16 *a5,
        __int64 *a6)
{
  unsigned int SpecificValueCaps; // ebx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v15; // r9d

  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a1, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == -1072627705 )
  {
    v11 = Win32AllocPoolZInit(72LL * *a3);
    *a4 = v11;
    if ( v11 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a1, 0, v11, (__int64)a3, a2);
      if ( SpecificValueCaps != 1114112 )
      {
        v15 = 21;
LABEL_10:
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          v15,
          (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
        goto LABEL_12;
      }
      SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, a1, 0, 0LL, (__int64)a5, a2);
      if ( SpecificValueCaps != -1072627705 )
        goto LABEL_12;
      v13 = Win32AllocPoolZInit(72LL * *a5);
      *a6 = v13;
      if ( v13 )
      {
        SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, a1, 0, v13, (__int64)a5, a2);
        if ( SpecificValueCaps == 1114112 )
          return SpecificValueCaps;
        v15 = 22;
        goto LABEL_10;
      }
    }
    SpecificValueCaps = -1073741801;
  }
LABEL_12:
  if ( SpecificValueCaps != 1114112 )
  {
    if ( *a4 )
    {
      Win32FreePool(*a4);
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool(*a6);
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
