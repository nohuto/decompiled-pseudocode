/*
 * XREFs of HUBPDO_ValidateSelectInterfaceUrb @ 0x1C001295C
 * Callers:
 *     HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C0019AB0 (HUBDSM_ValidatingSelectInterfaceUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0012728 (HUBPDO_InitializeInterfaceInformation.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectInterfaceUrb(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rdx
  unsigned __int16 *v4; // r15
  int v5; // edi
  __int64 v6; // rbp
  int v7; // ebx
  int v8; // ebx
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  memset(v10, 0, sizeof(v10));
  v3 = *(_QWORD *)(a1 + 440);
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v10);
  v4 = (unsigned __int16 *)v10[1];
  v5 = 0;
  v6 = *(_QWORD *)(v10[1] + 24LL);
  if ( v6 || *(_DWORD *)(v1 + 388) != -1 )
  {
    if ( v6 != *(_QWORD *)(a1 + 48) )
    {
      v8 = -2147482880;
LABEL_8:
      *(_DWORD *)(a1 + 1548) = v8;
      result = 4065LL;
      if ( v8 > -1073738240 )
      {
        switch ( v8 )
        {
          case -1073737728:
            v5 = -1073741670;
            goto LABEL_26;
          case -1073713152:
            v5 = -1073741810;
            goto LABEL_26;
          case -1073676288:
            v5 = -1073741536;
            goto LABEL_26;
        }
        if ( (unsigned int)v8 <= 1 )
        {
LABEL_26:
          *(_DWORD *)(a1 + 1544) = v5;
          return result;
        }
      }
      else
      {
        if ( v8 == -1073738240 )
        {
          v5 = -1073741637;
          goto LABEL_26;
        }
        if ( v8 == -2147483136 || v8 == -2147482880 || v8 == -2147482112 || v8 == -1073739264 )
        {
          v5 = -1073741811;
          goto LABEL_26;
        }
      }
      v5 = -1073741823;
      goto LABEL_26;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x24u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
    v6 = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v4 + 3) = v6;
  }
  *((_QWORD *)v4 + 5) = -1LL;
  v7 = v4[16] + 32;
  if ( v7 != *v4 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x25u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      *v4,
      v4[16] + 32);
    *v4 = v7;
  }
  v8 = HUBPDO_InitializeInterfaceInformation(v1, v4 + 16, v6);
  if ( v8 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x26u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
    goto LABEL_8;
  }
  return 4077LL;
}
