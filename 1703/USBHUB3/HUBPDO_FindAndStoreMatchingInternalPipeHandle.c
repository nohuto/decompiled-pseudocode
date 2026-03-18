/*
 * XREFs of HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C0012B68
 * Callers:
 *     HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x1C0018DF0 (HUBDSM_GettingMatchingPipeHandleOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00110D0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 i; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  _QWORD v13[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = *(_QWORD *)(a1 + 440);
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v13);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = v13[1];
  for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v3 == v6 - 8 )
      break;
    v7 = *(_DWORD *)(v6 + 24);
    v8 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = (unsigned __int64)v8 << 6;
        if ( *(_QWORD *)(v9 + v6 + 56) == *(_QWORD *)(v13[1] + 24LL) )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_6;
      }
      v10 = v9 + v6 + 40;
      if ( v10 )
      {
        *(_QWORD *)(a1 + 1640) = v10;
        return 4077;
      }
      break;
    }
LABEL_6:
    ;
  }
  v11 = 4065;
  *(_DWORD *)(a1 + 1548) = -2147482112;
  *(_DWORD *)(a1 + 1544) = -1073741811;
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    3u,
    5u,
    0x27u,
    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
    *(_QWORD *)(v4 + 24),
    v4);
  return v11;
}
