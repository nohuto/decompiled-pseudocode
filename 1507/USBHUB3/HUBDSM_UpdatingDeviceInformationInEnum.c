/*
 * XREFs of HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C00178D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001C170 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C001C994 (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBDSM_UpdatingDeviceInformationInEnum(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rdi
  unsigned __int8 v3; // dl
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 416),
                   0LL);
  memset(v2, 0, 0x48uLL);
  v2[6] |= 0xFu;
  if ( (*(_DWORD *)(v1 + 1628) & 0x400) != 0 )
    v2[6] |= 0x10u;
  *v2 = 72;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*(_QWORD *)v1 + 208LL);
  *((_QWORD *)v2 + 2) = *(_QWORD *)(v1 + 24);
  *((_QWORD *)v2 + 4) = v1 + 1972;
  *((_QWORD *)v2 + 5) = *(_QWORD *)(v1 + 2040);
  v3 = *(_BYTE *)(v1 + 2204);
  if ( (v3 & 8) == 0 || (*(_DWORD *)(v1 + 1628) & 0x80u) != 0 || (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x8000) != 0 )
  {
    v2[12] = 0;
  }
  else
  {
    v4 = *(unsigned __int16 *)(v1 + 2188);
    *(_BYTE *)(v1 + 2197) = ~(v3 >> 5) | 0xFE;
    v2[12] = v4;
  }
  if ( (*(_DWORD *)(v1 + 1616) & 2) != 0 )
    *((_BYTE *)v2 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters(v1, v2);
  if ( *(char *)(v1 + 2448) < 0 )
  {
    v5 = *(_DWORD *)(v1 + 1616);
    if ( (v5 & 0x20) != 0 && (v5 & 2) == 0 && *(_DWORD *)(*(_QWORD *)(v1 + 8) + 208LL) == 512 )
    {
      v2[6] |= 0x40u;
      if ( *(_BYTE *)(*(_QWORD *)v1 + 200LL) )
        *((_WORD *)v2 + 32) = 20;
      else
        *((_WORD *)v2 + 32) = *(unsigned __int8 *)(*(_QWORD *)(v1 + 2488) + 5LL);
    }
  }
  v6 = HUBUCX_SubmitUcxIoctl(v1, 4788259LL);
  if ( v6 < 0 )
  {
    v8 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x1Du,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v8);
  }
  return 1000LL;
}
