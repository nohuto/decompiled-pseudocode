/*
 * XREFs of HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001F094
 * Callers:
 *     HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x1C001A0F0 (HUBDSM_NotifyingDeviceResetToUCXAfterReset2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001EDA0 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBUCX_NotifyDeviceResetUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 i; // rdx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rax
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 j; // rax
  unsigned int k; // ecx
  unsigned __int64 v13; // rdx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)(a1 + 96) )
  {
LABEL_12:
    v10 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      *(_QWORD *)(a1 + 416),
                      0LL);
    memset(v10, 0, 0x30uLL);
    *v10 = 48;
    *((_QWORD *)v10 + 1) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 240LL);
    *((_QWORD *)v10 + 2) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v10 + 3) = *(_QWORD *)(a1 + 88);
    *((_QWORD *)v10 + 5) = v3;
    v10[8] = v2;
    result = HUBUCX_SubmitUcxIoctl(a1, 0x49101Bu);
    if ( (int)result < 0 )
      goto LABEL_13;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 120);
  for ( i = *(_QWORD *)(v1 + 16); ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v1 + 16 == v6 + 8 )
      goto LABEL_12;
    v7 = 0;
    if ( *(_DWORD *)(v6 + 24) )
      break;
LABEL_10:
    ;
  }
  while ( 1 )
  {
    v8 = (unsigned __int64)v7 << 6;
    if ( *(_DWORD *)(v8 + v6 + 48) == 4 )
      break;
LABEL_9:
    if ( ++v7 >= *(_DWORD *)(v6 + 24) )
      goto LABEL_10;
  }
  if ( v3 )
  {
    *(_DWORD *)(v8 + v6 + 48) = 5;
    *(_QWORD *)(v3 + 8 * v2) = *(_QWORD *)(v8 + v6 + 40);
    v2 = (unsigned int)(v2 + 1);
    goto LABEL_9;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x14u,
    (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids);
  LODWORD(result) = -1073741811;
LABEL_13:
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x15u,
             (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
             result);
  if ( v1 )
  {
    for ( j = *(_QWORD *)(v1 + 16); ; j = *(_QWORD *)(result + 8) )
    {
      result = j - 8;
      if ( v1 + 16 == result + 8 )
        break;
      for ( k = 0; k < *(_DWORD *)(result + 24); ++k )
      {
        v13 = (unsigned __int64)k << 6;
        if ( *(_DWORD *)(v13 + result + 48) == 5 )
          *(_DWORD *)(v13 + result + 48) = 4;
      }
    }
  }
  return result;
}
