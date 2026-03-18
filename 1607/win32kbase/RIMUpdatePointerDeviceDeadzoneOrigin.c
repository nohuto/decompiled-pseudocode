/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C00D1E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v3 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    38,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 316) )
  {
    if ( v3 < 5 && (_mm_lfence(), (v7 = *(_QWORD *)(a1 + 8LL * v3 + 416)) != 0) )
    {
      if ( *(_DWORD *)(v7 + 16) )
        *(_QWORD *)(v7 + 44) = a3;
      else
        v6 = -1073741823;
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741811;
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      3,
      39,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  }
  v9 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x28u,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
    v9);
  return v6;
}
