/*
 * XREFs of HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C00113C4
 * Callers:
 *     HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x1C00169C0 (HUBDSM_GettingMatchingPipeHandleOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000F8F0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 *v4; // rdi
  __int64 i; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  unsigned __int64 v9; // rdx
  unsigned int v10; // edi
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 440);
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v12);
  v3 = v12[1];
  v4 = (__int64 *)(*(_QWORD *)(a1 + 48) + 16LL);
  for ( i = *v4; ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v4 == (__int64 *)(v6 + 8) )
      break;
    v7 = *(_DWORD *)(v6 + 24);
    v8 = 0;
    if ( v7 )
    {
      while ( *(_QWORD *)(((unsigned __int64)v8 << 6) + v6 + 56) != *(_QWORD *)(v12[1] + 24LL) )
      {
        if ( ++v8 >= v7 )
          goto LABEL_6;
      }
      v9 = ((unsigned __int64)v8 << 6) + v6 + 40;
      if ( v9 )
      {
        *(_QWORD *)(a1 + 1640) = v9;
        return 4077;
      }
      break;
    }
LABEL_6:
    ;
  }
  v10 = 4065;
  *(_DWORD *)(a1 + 1548) = -2147482112;
  *(_DWORD *)(a1 + 1544) = -1073741811;
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    3u,
    5u,
    0x27u,
    (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
    *(_QWORD *)(v3 + 24),
    v3);
  return v10;
}
