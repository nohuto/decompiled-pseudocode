/*
 * XREFs of HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey @ 0x1C006C1B0
 * Callers:
 *     HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried @ 0x1C001B550 (HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int16 v5; // r9
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                      WdfDriverGlobals,
                      v3,
                      1LL,
                      131097LL,
                      0LL,
                      &v8);
  if ( (int)result < 0 )
  {
    v5 = 55;
LABEL_7:
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             v5,
             (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
             v6);
  }
  v7 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1616), 0xFFFFFDFF);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v8,
             L"(*",
             4LL,
             &v7,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x200u);
    return result;
  }
  if ( (_DWORD)result != -1073741772 )
  {
    v5 = 56;
    goto LABEL_7;
  }
  return result;
}
