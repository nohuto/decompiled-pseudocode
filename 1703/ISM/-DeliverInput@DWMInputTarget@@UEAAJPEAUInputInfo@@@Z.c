/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18001A4F0
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x18001AF90 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x18001AFE0 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qqqq @ 0x180005870 (Template_qqqq.c)
 *     Template_qqqqqqq @ 0x1800058F0 (Template_qqqqqqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     Template_qq @ 0x18000D5D4 (Template_qq.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x18001AB38 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  int v4; // edi
  int v5; // r14d
  char v6; // al
  int v7; // r9d
  int PointersFromInput; // eax
  __int64 v9; // rdx
  int v10; // r9d
  unsigned int i; // r14d
  int *v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  struct IInputDeliveryServer *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v29; // eax
  unsigned int v30[4]; // [rsp+50h] [rbp-808h] BYREF
  int v31; // [rsp+60h] [rbp-7F8h] BYREF
  char v32; // [rsp+68h] [rbp-7F0h] BYREF
  struct Pointer *v33[10]; // [rsp+7D0h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+0h]

  v2 = a2;
  v4 = 0;
  if ( a2 )
  {
    v5 = *(_DWORD *)a2 & 0x3B;
    if ( v5 )
    {
      if ( *((_QWORD *)this + 9) || *((_BYTE *)this + 144) )
      {
        PointersFromInput = DWMInputTarget::AddDwmInputRoutingData(this, a2);
        v4 = PointersFromInput;
        if ( PointersFromInput < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_24;
          v10 = 359;
          goto LABEL_23;
        }
      }
      else
      {
        *((_QWORD *)a2 + 71) = 0LL;
        *((_QWORD *)a2 + 70) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 580) = 1065353216LL;
        *((_QWORD *)a2 + 75) = 1065353216LL;
        *((_DWORD *)a2 + 155) = 1065353216;
        *((_DWORD *)a2 + 144) = 0;
        *(_QWORD *)((char *)a2 + 588) = 0LL;
        *((_DWORD *)a2 + 149) = 0;
        *((_QWORD *)a2 + 76) = 0LL;
        *((_DWORD *)a2 + 154) = 0;
      }
    }
    v6 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      Template_qqqq((__int64)this, &MinInput_Log_InputInfo, 3, *(_DWORD *)v2, *((_DWORD *)v2 + 1), *((_DWORD *)v2 + 2));
      v6 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( !*((_BYTE *)this + 144) && (v6 & 4) != 0 )
    {
      Template_qqq((__int64)this, &MinInput_Log_InputInfo_Routing, 3, *((_DWORD *)this + 18), *((_DWORD *)this + 16));
      v6 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( v5 && (v6 & 4) != 0 )
    {
      v7 = *((_DWORD *)v2 + 134);
      v30[0] = 0;
      if ( v7 )
        Template_qq((__int64)this, &MinInput_Log_InputInfo_CaptureFlags, 3, v7);
      PointersFromInput = GetPointersFromInput(v2, (__int64)a2, v33, v30);
      v4 = PointersFromInput;
      if ( PointersFromInput < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_24;
        v10 = 415;
LABEL_23:
        Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 3, v10, PointersFromInput);
        goto LABEL_24;
      }
      for ( i = 0; i < v30[0]; ++i )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        {
          v13 = (int *)v33[i];
          Template_qqqqqqq((__int64)v13, v9, 3, *v13, v13[1], v13[3], v13[4], v13[5], v13[6]);
        }
      }
    }
    v14 = 14LL;
    v31 = 3;
    v15 = &v32;
    do
    {
      v16 = *((_OWORD *)v2 + 1);
      *(_OWORD *)v15 = *(_OWORD *)v2;
      v17 = *((_OWORD *)v2 + 2);
      *((_OWORD *)v15 + 1) = v16;
      v18 = *((_OWORD *)v2 + 3);
      *((_OWORD *)v15 + 2) = v17;
      v19 = *((_OWORD *)v2 + 4);
      *((_OWORD *)v15 + 3) = v18;
      v20 = *((_OWORD *)v2 + 5);
      *((_OWORD *)v15 + 4) = v19;
      v21 = *((_OWORD *)v2 + 6);
      *((_OWORD *)v15 + 5) = v20;
      v22 = *((_OWORD *)v2 + 7);
      v2 = (struct InputInfo *)((char *)v2 + 128);
      *((_OWORD *)v15 + 6) = v21;
      v15 += 128;
      *((_OWORD *)v15 - 1) = v22;
      --v14;
    }
    while ( v14 );
    v23 = InputDeliveryServer::s_pInputDeliveryServer;
    v24 = *((_OWORD *)v2 + 1);
    *(_OWORD *)v15 = *(_OWORD *)v2;
    v25 = *((_OWORD *)v2 + 2);
    *((_OWORD *)v15 + 1) = v24;
    v26 = *((_OWORD *)v2 + 3);
    *((_OWORD *)v15 + 2) = v25;
    v27 = *((_OWORD *)v2 + 4);
    *((_OWORD *)v15 + 3) = v26;
    v28 = *((_OWORD *)v2 + 5);
    *((_OWORD *)v15 + 4) = v27;
    *((_OWORD *)v15 + 5) = v28;
    v29 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, int *, __int64))(*(_QWORD *)v23 + 48LL))(
            v23,
            (char *)this + 88,
            &v31,
            1896LL);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1B4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)(unsigned int)v29);
      JUMPOUT(0x18001A825LL);
    }
LABEL_24:
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_25;
  }
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 3, 350, 87);
LABEL_25:
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    Template_qq((__int64)this, &MinInput_Log_InputInfo_DeliveryFailure, 3, v4);
  return (unsigned int)v4;
}
