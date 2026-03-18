/*
 * XREFs of HUBUCX_CreateDefaultEndpointInUCX @ 0x1C001CC50
 * Callers:
 *     HUBDSM_CreatingUCXDefaultEndpointFor30 @ 0x1C0017B10 (HUBDSM_CreatingUCXDefaultEndpointFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateDefaultEndpointInUCX(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 392LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 208LL),
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 148),
         a1 + 88);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x21u,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v5);
    *(_DWORD *)(a1 + 1548) = -1073737728;
    *(_DWORD *)(a1 + 1544) = -1073741670;
  }
  result = 4065LL;
  if ( v3 >= 0 )
    return 4077LL;
  return result;
}
