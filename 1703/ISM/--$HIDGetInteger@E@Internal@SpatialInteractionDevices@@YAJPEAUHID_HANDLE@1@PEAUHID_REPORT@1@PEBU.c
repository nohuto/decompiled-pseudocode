/*
 * XREFs of ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x1800682C4
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z @ 0x1800643B4 (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::HIDGetInteger<unsigned char>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        ULONG UsageValue)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v11; // ecx
  NTSTATUS ScaledUsageValue; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a1 )
  {
    v8 = 207LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\onecoreuapanalog\\inc\\SpatialInteractionHIDParser.h",
      (const char *)v9);
    return v9;
  }
  if ( !a2 )
  {
    v8 = 208LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v8 = 209LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v9 = -2147467261;
    v8 = 210LL;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a3 + 12) )
  {
    v8 = 211LL;
    goto LABEL_3;
  }
  v11 = *(_DWORD *)(a3 + 48);
  *a4 = 0;
  if ( !v11 && !*(_DWORD *)(a3 + 52) )
  {
    ScaledUsageValue = HidP_GetUsageValue(
                         HidP_Feature,
                         *(_WORD *)a3,
                         *(_WORD *)(a3 + 6),
                         *(_WORD *)(a3 + 56),
                         &UsageValue,
                         *(PHIDP_PREPARSED_DATA *)(a1 + 96),
                         *(PCHAR *)(a2 + 8),
                         *(_DWORD *)a2);
    if ( ScaledUsageValue < 0 )
    {
      v13 = 228LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v13,
               (__int64)"internal\\onecoreuapanalog\\inc\\SpatialInteractionHIDParser.h",
               (const char *)(unsigned int)ScaledUsageValue);
    }
LABEL_23:
    *a4 = UsageValue;
    return 0LL;
  }
  if ( *(_DWORD *)(a3 + 40) != *(_DWORD *)(a3 + 44) || v11 != *(_DWORD *)(a3 + 52) )
  {
    ScaledUsageValue = HidP_GetScaledUsageValue(
                         HidP_Feature,
                         *(_WORD *)a3,
                         *(_WORD *)(a3 + 6),
                         *(_WORD *)(a3 + 56),
                         (PLONG)&UsageValue,
                         *(PHIDP_PREPARSED_DATA *)(a1 + 96),
                         *(PCHAR *)(a2 + 8),
                         *(_DWORD *)a2);
    if ( ScaledUsageValue < 0 )
    {
      v13 = 249LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v13,
               (__int64)"internal\\onecoreuapanalog\\inc\\SpatialInteractionHIDParser.h",
               (const char *)(unsigned int)ScaledUsageValue);
    }
    goto LABEL_23;
  }
  *a4 = v11;
  return 0LL;
}
