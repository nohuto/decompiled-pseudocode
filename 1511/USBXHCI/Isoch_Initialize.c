/*
 * XREFs of Isoch_Initialize @ 0x1C0052280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Isoch_CalculatePacketsPerFrame @ 0x1C002A980 (Isoch_CalculatePacketsPerFrame.c)
 */

__int64 __fastcall Isoch_Initialize(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v6[7]; // [rsp+58h] [rbp+1Fh] BYREF

  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 360) = a1 + 352;
  *(_QWORD *)(a1 + 352) = a1 + 352;
  *(_QWORD *)(a1 + 376) = a1 + 368;
  *(_QWORD *)(a1 + 368) = a1 + 368;
  *(_DWORD *)(a1 + 308) = Isoch_CalculatePacketsPerFrame(a1);
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[2]) = 0;
  LODWORD(v5[3]) = 0;
  LODWORD(v5[0]) = 40;
  v5[1] = Isoch_WdfEvtRingEmptyTimer;
  BYTE4(v5[2]) = 1;
  memset(v6, 0, sizeof(v6));
  v6[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v6[0]) = 56;
  v6[3] = 0x100000001LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
         WdfDriverGlobals,
         v5,
         v6,
         a1 + 272);
  v3 = v2;
  if ( v2 >= 0 )
    return 0;
  else
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xDu,
      0xAu,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v2,
      v5[0],
      v5[1],
      v5[2],
      v5[3]);
  return v3;
}
