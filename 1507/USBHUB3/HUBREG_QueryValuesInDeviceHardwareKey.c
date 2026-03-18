/*
 * XREFs of HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C006B658
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 */

__int64 __fastcall HUBREG_QueryValuesInDeviceHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  PVOID PoolWithTag; // rax
  PVOID v8; // rsi
  __int64 v10; // [rsp+28h] [rbp-30h]
  unsigned __int16 v11; // [rsp+40h] [rbp-18h] BYREF
  void *Src; // [rsp+48h] [rbp-10h]
  int v13; // [rsp+90h] [rbp+38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+40h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v3,
         1LL,
         131097LL,
         0LL,
         &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 57;
LABEL_3:
    LODWORD(v10) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids,
      v10);
    goto LABEL_29;
  }
  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         L"02",
         4LL,
         &v13,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 58;
      goto LABEL_3;
    }
  }
  else if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x400u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         0LL,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 59;
    goto LABEL_3;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
         WdfDriverGlobals,
         v14,
         &g_FriendlyName,
         v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 61;
      goto LABEL_3;
    }
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v15,
      &v11);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v11, 0x64334855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x3Cu,
        (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids);
      goto LABEL_29;
    }
    memmove(PoolWithTag, Src, v11);
    *(_DWORD *)(a1 + 2148) = v11;
    *(_QWORD *)(a1 + 2152) = v8;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v14,
         L"HJ",
         131097LL,
         0LL,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v13 = 0;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v16,
           &g_D3ColdSupported,
           4LL,
           &v13,
           0LL,
           0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741772 )
      {
        v6 = 64;
        goto LABEL_3;
      }
    }
    else if ( v13 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x1000u);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x3Fu,
        (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids);
    }
  }
  else if ( v4 != -1073741772 )
  {
    v6 = 62;
    goto LABEL_3;
  }
  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         L" \"",
         4LL,
         &v13,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 65;
      goto LABEL_3;
    }
  }
  else if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x4000u);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = 1000;
  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         L",.",
         4LL,
         &v13,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 66;
      goto LABEL_3;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = v13;
  }
  v5 = 0;
LABEL_29:
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v14 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v5;
}
