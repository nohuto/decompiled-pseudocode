/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C0009EAC
 * Callers:
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 * Callees:
 *     RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0009FBC (RIMInitializePointerDeviceFrameContactIdMgr.c)
 *     rimHidP_GetUsageValue @ 0x1C000A018 (rimHidP_GetUsageValue.c)
 *     RIMGetFeatureReport @ 0x1C000A080 (RIMGetFeatureReport.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C00D16D4 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSettings @ 0x1C00D1B74 (RIMExtractCustomPTPSettings.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, __int64 a5, char a6)
{
  union _LARGE_INTEGER *v9; // rax
  int v10; // edx
  union _LARGE_INTEGER *v11; // rdi
  __int64 v12; // r13
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int UsageValue; // ebx
  unsigned int v17; // eax
  int v19; // ecx
  int v20; // eax
  __int16 v21[2]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v22; // [rsp+44h] [rbp-34h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-30h] BYREF
  char v24; // [rsp+90h] [rbp+18h] BYREF

  v9 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a3[4], 1768321874LL);
  v11 = v9;
  if ( !v9 )
  {
    UsageValue = -1073741668;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      3,
      27,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
    goto LABEL_9;
  }
  v12 = a5;
  v13 = RIMGetFeatureReport(v9, a5);
  if ( v13 )
  {
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      3,
      25,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
      v13);
    goto LABEL_12;
  }
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, a1 + 720, a2, (__int64)v11, (unsigned __int16)a3[4]);
  if ( UsageValue < 0 || (v17 = *(_DWORD *)(a1 + 720)) == 0 )
  {
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      3,
      26,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
      UsageValue);
    UsageValue = -1073741668;
    goto LABEL_7;
  }
  if ( v17 > 0x100 || !(unsigned int)RIMInitializePointerDeviceFrameContactIdMgr(a1, a3) )
  {
LABEL_12:
    UsageValue = -1073741668;
    goto LABEL_9;
  }
LABEL_7:
  if ( UsageValue >= 0 && *a3 == 5 )
  {
    *(_DWORD *)(a1 + 1560) = 3;
    UsageValue = rimHidP_GetUsageValue(2, 13, 0, 89, (__int64)v23, a2, (__int64)v11, (unsigned __int16)a3[4]);
    if ( UsageValue >= 0 )
      *(_DWORD *)(a1 + 1560) = ((v23[0] & 1) != 0) + 1;
    v20 = RIMDiscoverCustomPTPSettings(v19, *(_QWORD *)(a1 + 712), a2, (unsigned int)&v24, (__int64)&v22, (__int64)v21);
    if ( v20 >= 0 )
    {
      if ( v24 != a6 )
        v20 = RIMGetFeatureReport(v11, v12);
      if ( v20 >= 0 )
        RIMExtractCustomPTPSettings(a1, a2, (_DWORD)a3, (_DWORD)v11, v22, v21[0]);
    }
  }
LABEL_9:
  if ( v11 )
    Win32FreePool(v11);
  return (unsigned int)UsageValue;
}
