/*
 * XREFs of ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x180066468
 * Callers:
 *     ?SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z @ 0x180067C3C (-SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     HidStatus @ 0x1800656A8 (HidStatus.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::HIDSetInteger(
        PHIDP_PREPARSED_DATA *this,
        PCHAR *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        USAGE a4,
        ULONG UsageValue)
{
  __int64 v5; // rdx
  NTSTATUS v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !this )
  {
    v5 = 559LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a2 )
  {
    v5 = 560LL;
    goto LABEL_3;
  }
  v7 = HidP_SetUsageValue(HidP_Output, 0xEu, 0, a4, UsageValue, this[12], a2[1], *(_DWORD *)a2);
  v8 = HidStatus(v7);
  if ( v8 >= 0 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x232,
             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
             (const char *)(unsigned int)v8);
}
