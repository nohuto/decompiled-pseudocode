/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x1C0021FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C0025CBC (WPP_RECORDER_SF_dddL.c)
 *     Etw_EndpointUpdate @ 0x1C00343A8 (Etw_EndpointUpdate.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax

  v2 = *(__int64 **)(a1 + 56);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 88LL), v2[1]);
  v5 = 0;
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)*v2 + 64LL),
      4u,
      0xCu,
      0x1Au,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16) + 135LL),
      *(_DWORD *)(*v2 + 144));
LABEL_6:
    v5 = -1073741823;
    goto LABEL_7;
  }
  v6 = *(_BYTE *)(a1 + 68);
  if ( v6 != 1 )
  {
    v8 = v6;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_dddL(
      *(_QWORD *)(*(_QWORD *)*v2 + 64LL),
      v8,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16) + 135LL),
      28);
    goto LABEL_6;
  }
  *(_WORD *)(*v2 + 100) = *((_WORD *)v2 + 8);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)*v2 + 64LL),
    4u,
    0xCu,
    0x1Bu,
    (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16) + 135LL),
    *(_DWORD *)(*v2 + 144),
    *((_DWORD *)v2 + 4));
  Etw_EndpointUpdate(v7, *v2);
LABEL_7:
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v9,
           v5);
}
