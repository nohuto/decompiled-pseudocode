/*
 * XREFs of Interrupter_FilterMessageDescriptors @ 0x1C0049730
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C004AE70 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_FilterMessageDescriptors(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int i; // esi
  _OWORD *v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int128 v14; // xmm1
  __int64 v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-88h]
  _OWORD v17[2]; // [rsp+40h] [rbp-78h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 2328))(WdfDriverGlobals);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2384))(WdfDriverGlobals, v7);
  v9 = 0;
  for ( i = result; v9 < i; ++v9 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2392))(
               WdfDriverGlobals,
               v7,
               v9);
    v11 = (_OWORD *)result;
    if ( *(_BYTE *)(result + 1) == 2 && (*(_BYTE *)(result + 4) & 3) == 3 )
    {
      if ( a4 )
      {
        v12 = *(_DWORD *)(result + 12) - *(_DWORD *)(result + 8) + 1;
        if ( a4 >= v12 )
        {
          a4 -= v12;
        }
        else
        {
          LODWORD(v16) = v9;
          LODWORD(v15) = a3;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            4u,
            8u,
            0x35u,
            (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
            v15,
            v16);
          _BitScanReverse(&v13, 2 * a4 - 1);
          v17[0] = *v11;
          v14 = v11[1];
          HIDWORD(v17[0]) = -2;
          DWORD2(v17[0]) = -1 - (1 << v13);
          v17[1] = v14;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD))(WdfFunctions_01015 + 2376))(
                     WdfDriverGlobals,
                     v7,
                     v17,
                     v9);
          a4 = 0;
        }
      }
      else
      {
        LODWORD(v16) = v9;
        LODWORD(v15) = a3;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          8u,
          0x34u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          v15,
          v16);
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2400))(
                   WdfDriverGlobals,
                   v7,
                   v9--);
        --i;
      }
    }
  }
  return result;
}
