/*
 * XREFs of HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002AE70
 * Callers:
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006F134 (HUBREG_QueryUsbflagsValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

void __fastcall HUBREG_QueryUsbflagsAlternateSettingFilter(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r9
  PVOID PoolWithTag; // rax
  unsigned int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, _QWORD, unsigned int *, int *))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         a2,
         L",.",
         0LL,
         0LL,
         &v6,
         &v7) == -2147483643 )
  {
    if ( !v6 || (v6 & 1) != 0 )
    {
      v4 = 18;
      goto LABEL_12;
    }
    if ( v7 != 3 )
    {
      v4 = 19;
LABEL_12:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v4,
        (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids);
      return;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6 + 6LL, 0x64334855u);
    *(_QWORD *)(a1 + 2432) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = 20;
      goto LABEL_12;
    }
    memset(PoolWithTag, 0, v6 + 6LL);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           a2,
           L",.",
           v6,
           *(_QWORD *)(a1 + 2432) + 4LL,
           0LL,
           0LL) >= 0 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x16u,
        (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids);
      **(_DWORD **)(a1 + 2432) = v6 >> 1;
    }
    else
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x15u,
        (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids);
      ExFreePoolWithTag(*(PVOID *)(a1 + 2432), 0x64334855u);
      *(_QWORD *)(a1 + 2432) = 0LL;
    }
  }
}
