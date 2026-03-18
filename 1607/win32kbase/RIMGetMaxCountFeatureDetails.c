/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C00062DC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C0006454 (rimHidP_GetUsageValue.c)
 *     RIMGetFeatureReport @ 0x1C00064BC (RIMGetFeatureReport.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C00E1EC4 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSettings @ 0x1C00E2368 (RIMExtractCustomPTPSettings.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5, __int64 a6)
{
  int SpecificValueCaps; // ebx
  union _LARGE_INTEGER *v10; // rax
  int v11; // edx
  union _LARGE_INTEGER *v12; // rdi
  int v13; // eax
  int v14; // edx
  unsigned int *v15; // r15
  int UsageValue; // eax
  int v17; // edx
  unsigned int v18; // ecx
  int v20; // ecx
  int v21; // eax
  char v22; // [rsp+40h] [rbp-69h] BYREF
  __int16 v23; // [rsp+44h] [rbp-65h] BYREF
  __int16 v24[2]; // [rsp+48h] [rbp-61h] BYREF
  __int16 v25; // [rsp+4Ch] [rbp-5Dh] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v27[80]; // [rsp+60h] [rbp-49h] BYREF

  v23 = 1;
  v26[0] = a1;
  v26[1] = a5;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v27, (__int64)&v23, a3);
  if ( SpecificValueCaps < 0 )
    return (unsigned int)SpecificValueCaps;
  v10 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a4[4], 1768321874LL);
  v12 = v10;
  if ( v10 )
  {
    v13 = RIMGetFeatureReport(v10, a6);
    if ( v13 )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        3,
        29,
        (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids,
        v13);
    }
    else
    {
      v15 = (unsigned int *)(a2 + 688);
      UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, a2 + 688, a3, (__int64)v12, (unsigned __int16)a4[4]);
      SpecificValueCaps = UsageValue;
      if ( UsageValue < 0 || (v18 = *v15) == 0 )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          3,
          30,
          (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids,
          UsageValue);
        SpecificValueCaps = -1073741668;
        goto LABEL_9;
      }
      if ( v18 <= 0x100 )
      {
        if ( *a4 == 5 )
        {
          *v15 = v18 + 1;
          goto LABEL_9;
        }
        if ( *(_DWORD *)(v26[0] + 660LL) + v18 <= 0xA00 )
        {
LABEL_9:
          if ( SpecificValueCaps >= 0 && *a4 == 5 )
          {
            *(_DWORD *)(a2 + 1520) = 3;
            SpecificValueCaps = rimHidP_GetUsageValue(
                                  2,
                                  13,
                                  0,
                                  89,
                                  (__int64)v26,
                                  a3,
                                  (__int64)v12,
                                  (unsigned __int16)a4[4]);
            if ( SpecificValueCaps >= 0 )
            {
              v20 = ((v26[0] & 1) != 0) + 1;
              *(_DWORD *)(a2 + 1520) = v20;
            }
            v21 = RIMDiscoverCustomPTPSettings(
                    v20,
                    *(_QWORD *)(a2 + 680),
                    a3,
                    (unsigned int)&v22,
                    (__int64)&v25,
                    (__int64)v24);
            if ( v21 >= 0 )
            {
              if ( v22 != v27[2] )
                v21 = RIMGetFeatureReport(v12, a6);
              if ( v21 >= 0 )
                RIMExtractCustomPTPSettings(a2, a3, (_DWORD)a4, (_DWORD)v12, v25, v24[0]);
            }
          }
          goto LABEL_11;
        }
      }
    }
    SpecificValueCaps = -1073741668;
  }
  else
  {
    SpecificValueCaps = -1073741668;
    LOBYTE(v11) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      3,
      31,
      (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
  }
LABEL_11:
  if ( v12 )
    Win32FreePool(v12);
  return (unsigned int)SpecificValueCaps;
}
