/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0073C5C
 * Callers:
 *     RIMValidateAllCollectionUsages @ 0x1C0071D6C (RIMValidateAllCollectionUsages.c)
 *     RIMIsParallelDevice @ 0x1C0074D48 (RIMIsParallelDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        unsigned __int16 *a5,
        _QWORD *a6)
{
  unsigned int SpecificValueCaps; // ebx
  void *v11; // rax
  void *v12; // rax
  unsigned __int16 v14; // r9

  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a1, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == -1072627705 )
  {
    v11 = Win32AllocPoolZInit(72LL * *a3);
    *a4 = v11;
    if ( v11 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a1, 0, (__int64)v11, (__int64)a3, a2);
      if ( SpecificValueCaps != 1114112 )
      {
        v14 = 21;
LABEL_10:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          v14,
          (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
        goto LABEL_12;
      }
      SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, a1, 0, 0LL, (__int64)a5, a2);
      if ( SpecificValueCaps != -1072627705 )
        goto LABEL_12;
      v12 = Win32AllocPoolZInit(72LL * *a5);
      *a6 = v12;
      if ( v12 )
      {
        SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, a1, 0, (__int64)v12, (__int64)a5, a2);
        if ( SpecificValueCaps == 1114112 )
          return SpecificValueCaps;
        v14 = 22;
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
      Win32FreePool();
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool();
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
