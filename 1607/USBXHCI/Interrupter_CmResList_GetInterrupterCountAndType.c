/*
 * XREFs of Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C004C794
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_CmResList_GetInterrupterCountAndType(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  int v5; // ebp
  unsigned int i; // edi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2432))(WdfDriverGlobals, a2);
    if ( i >= (unsigned int)result )
      break;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
            WdfDriverGlobals,
            a2,
            i);
    v11 = v10;
    if ( *(_BYTE *)v10 == 2 )
    {
      LODWORD(v13) = *(unsigned __int16 *)(v10 + 2);
      LODWORD(v12) = i;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        8u,
        0x38u,
        (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
        v12,
        v13);
      if ( *(_BYTE *)v11 == 2 && (*(_BYTE *)(v11 + 2) & 3) == 3 )
      {
        LODWORD(v13) = *(_DWORD *)(v11 + 8);
        LODWORD(v12) = *(unsigned __int16 *)(v11 + 6);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          8u,
          0x39u,
          (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
          v12,
          v13);
        v5 = 1;
        if ( v4 )
          v5 = 2;
        v4 += *(unsigned __int16 *)(v11 + 6);
      }
      else
      {
        ++v4;
      }
    }
  }
  *a3 = v4;
  *a4 = v5;
  return result;
}
