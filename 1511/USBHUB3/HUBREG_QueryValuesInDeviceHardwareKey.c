/*
 * XREFs of HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C006C2C8
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00664B0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 */

__int64 __fastcall HUBREG_QueryValuesInDeviceHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  PVOID PoolWithTag; // rax
  PVOID v9; // rsi
  __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned __int16 v12; // [rsp+40h] [rbp-18h] BYREF
  void *Src; // [rsp+48h] [rbp-10h]
  int v14; // [rsp+90h] [rbp+38h] BYREF
  __int64 v15; // [rsp+98h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632);
  v17 = 0LL;
  v16 = 0LL;
  v4 = v3(WdfDriverGlobals, v1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v4,
         1LL,
         131097LL,
         0LL,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 57;
LABEL_3:
    LODWORD(v11) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v7,
      (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
      v11);
    goto LABEL_29;
  }
  v14 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v15,
         L"02",
         4LL,
         &v14,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 58;
      goto LABEL_3;
    }
  }
  else if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x400u);
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         0LL,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 59;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
         WdfDriverGlobals,
         v15,
         &g_FriendlyName,
         v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 61;
      goto LABEL_3;
    }
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v16,
      &v12);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v12, 0x64334855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x3Cu,
        (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids);
      goto LABEL_29;
    }
    memmove(PoolWithTag, Src, v12);
    *(_DWORD *)(a1 + 2148) = v12;
    *(_QWORD *)(a1 + 2152) = v9;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v15,
         L"HJ",
         131097LL,
         0LL,
         &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v17,
           &g_D3ColdSupported,
           4LL,
           &v14,
           0LL,
           0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      if ( v5 != -1073741772 )
      {
        v7 = 64;
        goto LABEL_3;
      }
    }
    else if ( v14 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x1000u);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x3Fu,
        (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids);
    }
  }
  else if ( v5 != -1073741772 )
  {
    v7 = 62;
    goto LABEL_3;
  }
  v14 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v15,
         L" \"",
         4LL,
         &v14,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 65;
      goto LABEL_3;
    }
  }
  else if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x4000u);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = 1000;
  v14 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v15,
         L",.",
         4LL,
         &v14,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 66;
      goto LABEL_3;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = v14;
  }
  v6 = 0;
LABEL_29:
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v6;
}
