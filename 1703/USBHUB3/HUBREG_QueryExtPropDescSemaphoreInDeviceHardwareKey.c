/*
 * XREFs of HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey @ 0x1C0070784
 * Callers:
 *     HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried @ 0x1C001D4B0 (HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int16 v5; // r9
  int v6; // eax
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                      WdfDriverGlobals,
                      v3,
                      1LL,
                      131097LL,
                      0LL,
                      &v11);
  if ( (int)result < 0 )
  {
    v5 = 56;
LABEL_11:
    LODWORD(v7) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             v5,
             (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
             v7);
  }
  v9 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v11,
         &g_RevisionId,
         4LL,
         &v9,
         0LL,
         0LL);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741772 )
  {
    LODWORD(v8) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x39u,
      (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
      v8);
  }
  v10 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1616), 0xFFFFFDFF);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v11,
             L"(*",
             4LL,
             &v10,
             0LL,
             0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
      return result;
    v5 = 58;
    goto LABEL_11;
  }
  result = *(unsigned __int16 *)(a1 + 1984);
  if ( v9 == (_DWORD)result )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x200u);
  return result;
}
