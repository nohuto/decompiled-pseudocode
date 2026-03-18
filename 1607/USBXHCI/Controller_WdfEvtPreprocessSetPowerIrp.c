/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C00040A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0004C0C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C00359E4 (Crashdump_ProcessSystemPowerAction.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // edx
  unsigned int v14; // ebx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043318);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( !*(_DWORD *)(v5 + 16) )
  {
    v8 = *(_DWORD *)(v5 + 8);
    v9 = (v8 >> 8) & 0xF;
    if ( v9 == 1 )
    {
      if ( (v8 & 0xF0000) == 0x50000 )
        *(_DWORD *)(v7 + 308) = 2;
      else
        *(_DWORD *)(v7 + 308) = 1;
    }
    else if ( v9 == 6 )
    {
      if ( (v8 & 0xF000) == 0x5000 )
        *(_DWORD *)(v7 + 308) = 5;
      else
        *(_DWORD *)(v7 + 308) = 6;
    }
    else if ( v9 >= 2 )
    {
      if ( v9 <= 4 )
      {
        *(_DWORD *)(v7 + 308) = ((v8 & 0xF000) == 20480) + 3;
      }
      else if ( v9 == 5 )
      {
        *(_DWORD *)(v7 + 308) = 5;
      }
    }
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_L(
      *(_QWORD *)(v4 + 16),
      v9,
      3,
      197,
      (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      *(_DWORD *)(v7 + 308));
    v10 = *(_QWORD *)(v7 + 312);
    if ( v10 )
      Crashdump_ProcessSystemPowerAction(v10, *(unsigned int *)(v7 + 308));
  }
  v11 = WdfFunctions_01015;
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v11 + 272))(WdfDriverGlobals, a1, a2);
  v14 = result;
  if ( (int)result < 0 )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 16),
      v13,
      3,
      198,
      (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      result);
    return v14;
  }
  return result;
}
