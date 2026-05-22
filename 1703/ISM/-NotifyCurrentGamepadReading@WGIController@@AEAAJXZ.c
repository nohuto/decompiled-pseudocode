/*
 * XREFs of ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4
 * Callers:
 *     ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x180062800 (-OnInputSuspended@WGIController@@UEAAJ_K@Z.c)
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x180062810 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x180062930 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180062C90 (-OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 *     ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180062CB0 (-OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800634B4 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIController::NotifyCurrentGamepadReading(WGIController *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r9d
  _DWORD *v5; // rax
  DWORD TickCount; // eax
  __int64 v7; // rcx
  __int128 v8; // xmm6
  int v9; // eax
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm1_8
  double v13; // xmm1_8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B8h]
  int v21; // [rsp+54h] [rbp-B4h]
  _OWORD v22[118]; // [rsp+58h] [rbp-B0h] BYREF

  if ( !*((_QWORD *)this + 15) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 450, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 8) + 104LL))(*((_QWORD *)this + 8), &v17);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 462;
LABEL_67:
      Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v4, v2);
      return 0LL;
    }
    return 0LL;
  }
  if ( !(_BYTE)v17 )
    return 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  memset(v22, 0, sizeof(v22));
  v5 = (_DWORD *)*((_QWORD *)this + 15);
  LODWORD(v22[0]) = 64;
  DWORD1(v22[0]) = *v5;
  TickCount = GetTickCount();
  v7 = *((_QWORD *)this + 10);
  DWORD2(v22[0]) = TickCount;
  *(LARGE_INTEGER *)&v22[1] = PerformanceCount;
  *(_QWORD *)&v22[42] = *((_QWORD *)this + 13);
  DWORD2(v22[2]) = 1888;
  if ( !v7 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 48LL))(*((_QWORD *)this + 9), &v19);
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v4 = 502;
        goto LABEL_67;
      }
      return 0LL;
    }
    *(_QWORD *)&v22[44] = v19;
    v9 = (v20 & 1) != 0;
    DWORD2(v22[44]) = v9;
    if ( (v20 & 2) != 0 )
    {
      v9 |= 2u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v20 & 4) != 0 )
    {
      v9 |= 4u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v20 & 8) != 0 )
    {
      v9 |= 8u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v20 & 0x10) != 0 )
    {
      v9 |= 0x40u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v20 & 0x20) != 0 )
    {
      v9 |= 0x80u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v20 & 0x40) != 0 )
    {
      v9 |= 0x100u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v20 & 0x80) != 0 )
    {
      v9 |= 0x200u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 1) != 0 )
    {
      v9 |= 0x10u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 2) != 0 )
    {
      v9 |= 0x20u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 4) != 0 )
    {
      v9 |= 0x1000u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 8) != 0 )
    {
      v9 |= 0x2000u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 0x40) != 0 )
    {
      v9 |= 0x400u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 0x80) != 0 )
    {
      v9 |= 0x800u;
      DWORD2(v22[44]) = v9;
    }
    if ( (v21 & 0x40000000) != 0 )
      DWORD2(v22[44]) = v9 | 0x40000000;
    v10 = DOUBLE_1_0;
    if ( (v21 & 0x10) != 0 )
      v11 = DOUBLE_1_0;
    else
      v11 = 0.0;
    *(double *)&v22[45] = v11;
    if ( (v21 & 0x20) != 0 )
      v12 = DOUBLE_1_0;
    else
      v12 = 0.0;
    v8 = 0LL;
    v22[46] = 0LL;
    *((double *)&v22[45] + 1) = v12;
    if ( (v21 & 0x400) != 0 )
    {
      v13 = DOUBLE_N1_0;
    }
    else if ( (v21 & 0x800) != 0 )
    {
      v13 = DOUBLE_1_0;
    }
    else
    {
      v13 = 0.0;
    }
    *(double *)&v22[47] = v13;
    if ( (v21 & 0x100) == 0 )
    {
      if ( (v21 & 0x200) != 0 )
        v10 = DOUBLE_N1_0;
      else
        v10 = 0.0;
    }
    *((double *)&v22[47] + 1) = v10;
    LOBYTE(v22[48]) = 1;
LABEL_63:
    if ( memcmp_0((char *)&v22[44] + 8, (char *)this + 136, 0x38uLL) )
    {
      v14 = v22[45];
      *((_OWORD *)this + 8) = v22[44];
      v15 = v22[47];
      *((_OWORD *)this + 9) = v14;
      *((_OWORD *)this + 10) = v8;
      *((_OWORD *)this + 11) = v15;
      v2 = WGIController::NotifyInputReport(this, (struct InputInfo *)v22);
      if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v4 = 549;
        goto LABEL_67;
      }
    }
    return 0LL;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v7 + 64LL))(v7, &v22[44]);
  if ( v2 >= 0 )
  {
    v8 = v22[46];
    LOBYTE(v22[48]) = 0;
    goto LABEL_63;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v4 = 487;
    goto LABEL_67;
  }
  return 0LL;
}
