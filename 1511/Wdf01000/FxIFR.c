/*
 * XREFs of FxIFR @ 0x1C0009960
 * Callers:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qcq @ 0x1C000BA20 (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqcLq @ 0x1C000E1C0 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqqd @ 0x1C0010A2C (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Lq @ 0x1C0021C68 (WPP_IFR_SF_Lq.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qdD @ 0x1C0028BBC (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C002BE74 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C002BF50 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qLd @ 0x1C002D878 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qqdq @ 0x1C002D954 (WPP_IFR_SF_qqdq.c)
 *     WPP_IFR_SF_ddLLdxDD @ 0x1C002F528 (WPP_IFR_SF_ddLLdxDD.c)
 *     WPP_IFR_SF_qqcq @ 0x1C002F624 (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_qdq @ 0x1C0031A18 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_sq @ 0x1C00327A8 (WPP_IFR_SF_sq.c)
 *     WPP_IFR_SF_Dd @ 0x1C0033C14 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C0057868 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C005799C (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiqd @ 0x1C0057D34 (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0057E44 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dq @ 0x1C0059230 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_dqd @ 0x1C005CBE0 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_dqq @ 0x1C005CD2C (WPP_IFR_SF_dqq.c)
 *     WPP_IFR_SF_qD @ 0x1C005CE10 (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qc @ 0x1C005CF24 (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_qiid @ 0x1C005CFE8 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qld @ 0x1C005D158 (WPP_IFR_SF_qld.c)
 *     WPP_IFR_SF_qqdid @ 0x1C005D240 (WPP_IFR_SF_qqdid.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C005D4B8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C005D5C0 (WPP_IFR_SF_qqqDd.c)
 *     WPP_IFR_SF_qqxDq @ 0x1C005D6EC (WPP_IFR_SF_qqxDq.c)
 *     WPP_IFR_SF_qqxx @ 0x1C005D814 (WPP_IFR_SF_qqxx.c)
 *     WPP_IFR_SF_qqxxd @ 0x1C005D914 (WPP_IFR_SF_qqxxd.c)
 *     WPP_IFR_SF_sqqxx @ 0x1C005DA3C (WPP_IFR_SF_sqqxx.c)
 *     WPP_IFR_SF_dLd @ 0x1C005DF00 (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C005DFE4 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C005E0F4 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qi @ 0x1C005E220 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C005E2E4 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qxx @ 0x1C005E3D0 (WPP_IFR_SF_qxx.c)
 *     WPP_IFR_SF_D @ 0x1C005E7E0 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_Ddd @ 0x1C005E8BC (WPP_IFR_SF_Ddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qll @ 0x1C0060788 (WPP_IFR_SF_qll.c)
 *     WPP_IFR_SF_Dddd @ 0x1C00611AC (WPP_IFR_SF_Dddd.c)
 *     WPP_IFR_SF_iid @ 0x1C00619AC (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0061A90 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qddq @ 0x1C0061BA4 (WPP_IFR_SF_qddq.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C0061CAC (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00635D8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C0064BBC (WPP_IFR_SF_qDDd.c)
 *     WPP_IFR_SF_qdid @ 0x1C0064D24 (WPP_IFR_SF_qdid.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0064E38 (WPP_IFR_SF_qqxd.c)
 *     WPP_IFR_SF_DD @ 0x1C006663C (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_cd @ 0x1C0066750 (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C0066864 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C0066998 (WPP_IFR_SF_qqcDqd.c)
 *     WPP_IFR_SF_qsd @ 0x1C0066AF0 (WPP_IFR_SF_qsd.c)
 *     WPP_IFR_SF_dddd @ 0x1C0067D30 (WPP_IFR_SF_dddd.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C006841C (WPP_IFR_SF_qqqqd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0069558 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0069670 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C00697CC (WPP_IFR_SF_qDqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C006A140 (WPP_IFR_SF_Dqq.c)
 *     WPP_IFR_SF_qDxD @ 0x1C006A224 (WPP_IFR_SF_qDxD.c)
 *     WPP_IFR_SF_qLqd @ 0x1C006A32C (WPP_IFR_SF_qLqd.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C006A494 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C006A5BC (WPP_IFR_SF_qqqi.c)
 *     WPP_IFR_SF_Sd @ 0x1C006AC60 (WPP_IFR_SF_Sd.c)
 *     WPP_IFR_SF_qZ @ 0x1C006BE28 (WPP_IFR_SF_qZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C006D54C (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006D650 (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_Z @ 0x1C006DD14 (WPP_IFR_SF_Z.c)
 *     WPP_IFR_SF_dZq @ 0x1C006DE58 (WPP_IFR_SF_dZq.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqddd @ 0x1C006E1B0 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqid @ 0x1C006E33C (WPP_IFR_SF_qqid.c)
 *     WPP_IFR_SF_sqq @ 0x1C006EA84 (WPP_IFR_SF_sqq.c)
 *     WPP_IFR_SF_ddi @ 0x1C006ED5C (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C006EE4C (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_iiddiidd @ 0x1C006EF28 (WPP_IFR_SF_iiddiidd.c)
 *     WPP_IFR_SF_DqD @ 0x1C006FA98 (WPP_IFR_SF_DqD.c)
 *     WPP_IFR_SF_qqDD @ 0x1C006FB7C (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqqq @ 0x1C006FC94 (WPP_IFR_SF_qqqq.c)
 *     WPP_IFR_SF_qqsd @ 0x1C00703C8 (WPP_IFR_SF_qqsd.c)
 *     WPP_IFR_SF_sqqq @ 0x1C0070550 (WPP_IFR_SF_sqqq.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0072258 (WPP_IFR_SF_dqdd.c)
 *     WPP_IFR_SF_xxx @ 0x1C0073318 (WPP_IFR_SF_xxx.c)
 *     WPP_IFR_SF_Zd @ 0x1C0073798 (WPP_IFR_SF_Zd.c)
 *     WPP_IFR_SF_qqD @ 0x1C0073F74 (WPP_IFR_SF_qqD.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C007405C (WPP_IFR_SF_qqDdqq.c)
 *     WPP_IFR_SF_qqDq @ 0x1C00741A4 (WPP_IFR_SF_qqDq.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C00742A8 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C00743EC (WPP_IFR_SF_qqDqqqd.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0076888 (WPP_IFR_SF_qqdqdd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C0076A10 (WPP_IFR_SF_qqqqq.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0076D80 (WPP_IFR_SF_qcDqd.c)
 *     WPP_IFR_SF_qqLdqqq @ 0x1C0077A4C (WPP_IFR_SF_qqLdqqq.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C0077BB4 (WPP_IFR_SF_qqqqi.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C0077E3C (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077F70 (WPP_IFR_SF_qqLd.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C00780CC (WPP_IFR_SF_qqqdD.c)
 *     WPP_IFR_SF__guid_d @ 0x1C007E210 (WPP_IFR_SF__guid_d.c)
 *     WPP_IFR_SF_dddddd @ 0x1C007F134 (WPP_IFR_SF_dddddd.c)
 *     WPP_IFR_SF_qLL @ 0x1C008087C (WPP_IFR_SF_qLL.c)
 *     WPP_IFR_SF_qdL @ 0x1C0080968 (WPP_IFR_SF_qdL.c)
 *     WPP_IFR_SF_ddiid @ 0x1C0080DEC (WPP_IFR_SF_ddiid.c)
 *     WPP_IFR_SF_dii @ 0x1C0080F18 (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x1C0081008 (WPP_IFR_SF_idii.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C00813C4 (WPP_IFR_SF_DDDDd.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0081EEC (WPP_IFR_SF_Lqd.c)
 *     WPP_IFR_SF_qcd @ 0x1C0081FD4 (WPP_IFR_SF_qcd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0083350 (WPP_IFR_SF_qLsqd.c)
 *     WPP_IFR_SF_qqs @ 0x1C0083504 (WPP_IFR_SF_qqs.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C00862B0 (WPP_IFR_SF_qqLLL.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C0089C88 (WPP_IFR_SF_DDDDDD.c)
 *     WPP_IFR_SF_LL @ 0x1C0089DC0 (WPP_IFR_SF_LL.c)
 *     WPP_IFR_SF_LLd @ 0x1C0089E80 (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C0089F64 (WPP_IFR_SF_cqcqq.c)
 *     WPP_IFR_SF_dDqq @ 0x1C008A090 (WPP_IFR_SF_dDqq.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C008A198 (WPP_IFR_SF_dddDqqd.c)
 *     WPP_IFR_SF_sd @ 0x1C008A300 (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_L @ 0x1C008A9D8 (WPP_IFR_SF_L.c)
 *     WPP_IFR_SF_qDDDDsdxsd @ 0x1C008C9F8 (WPP_IFR_SF_qDDDDsdxsd.c)
 * Callees:
 *     FxIsEqualGuid @ 0x1C0010DF4 (FxIsEqualGuid.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 FxIFR(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 MessageLevel,
        unsigned int MessageFlags,
        _GUID *MessageGuid,
        unsigned __int16 MessageNumber,
        ...)
{
  char *WdfLogHeader; // rdi
  va_list v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  signed __int32 v14; // eax
  signed __int32 v15; // ecx
  __int16 v16; // dx
  __int64 v17; // rcx
  va_list v18; // rbx
  char *v19; // rbp
  const void *i; // rax
  __int64 v21; // rsi
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  signed __int32 offsetNew; // [rsp+20h] [rbp-38h]
  signed __int32 offsetNewa; // [rsp+20h] [rbp-38h]
  __int16 offsetRet_2; // [rsp+26h] [rbp-32h]
  const void *v28; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, MessageNumber);
  va_start(va, MessageNumber);
  v28 = va_arg(va1, const void *);
  if ( FxLibraryGlobals.IfrDisabled )
    return 0LL;
  WdfLogHeader = (char *)FxDriverGlobals->WdfLogHeader;
  if ( !WdfLogHeader )
    return 3221225473LL;
  va_copy(v8, va);
  v9 = 0LL;
  if ( v28 )
  {
    do
    {
      v10 = *((_QWORD *)v8 + 1);
      if ( v10 )
      {
        if ( v10 > 0x100 )
          goto $drop_message;
        v9 += (unsigned __int16)v10;
      }
      v8 += 16;
    }
    while ( *(_QWORD *)v8 );
  }
  if ( (v9 & 3) != 0 )
    v11 = 4 - (v9 & 3);
  else
    v11 = 0LL;
  v12 = v11 + v9;
  if ( v12 > 0x100 )
  {
$drop_message:
    _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
    return 3221225473LL;
  }
  v13 = v12 + 28;
  if ( FxDriverGlobals->FxVerifierOn )
  {
    if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
      || !FxIsEqualGuid((const _GUID *)WdfLogHeader, &WdfTraceGuid)
      || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
      || (v23 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v23)
      || *((unsigned __int16 *)WdfLogHeader + 15) > v23
      || v23 >= 0x10000 )
    {
      FxVerifierDbgBreakPoint(FxDriverGlobals);
    }
  }
  v14 = *((_DWORD *)WdfLogHeader + 7);
  offsetRet_2 = HIWORD(v14);
  while ( 1 )
  {
    v15 = v14;
    if ( *((_QWORD *)WdfLogHeader + 2) + (unsigned __int64)*((unsigned int *)WdfLogHeader + 6) >= v13
                                                                                                + *((_QWORD *)WdfLogHeader
                                                                                                  + 2)
                                                                                                + (unsigned __int16)v14 )
    {
      v16 = v13 + v14;
      goto LABEL_15;
    }
    HIWORD(offsetNewa) = offsetRet_2;
    LOWORD(offsetNewa) = 0;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)WdfLogHeader + 7, offsetNewa, v14);
    offsetRet_2 = HIWORD(v14);
    if ( v15 == v14 )
    {
      v16 = v13 + v15;
LABEL_15:
      HIWORD(offsetNew) = v14;
      LOWORD(offsetNew) = v16;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)WdfLogHeader + 7, offsetNew, v15);
      offsetRet_2 = HIWORD(v14);
      if ( v15 == v14 )
        break;
    }
  }
  v17 = *((_QWORD *)WdfLogHeader + 2) + (unsigned __int16)v14;
  *(_WORD *)(v17 + 8) = HIWORD(v14);
  *(_WORD *)v17 = 21068;
  *(_WORD *)(v17 + 2) = v13;
  *(_WORD *)(v17 + 10) = MessageNumber;
  va_copy(v18, va);
  *(_DWORD *)(v17 + 4) = _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
  v19 = (char *)(v17 + 28);
  *(_GUID *)(v17 + 12) = *MessageGuid;
  for ( i = v28; i; v18 += 16 )
  {
    v21 = *((_QWORD *)v18 + 1);
    if ( v21 )
    {
      memmove(v19, i, *((_QWORD *)v18 + 1));
      v19 += v21;
    }
    i = (const void *)*((_QWORD *)v18 + 2);
  }
  if ( FxDriverGlobals->FxVerifierOn )
  {
    if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
      || !FxIsEqualGuid((const _GUID *)WdfLogHeader, &WdfTraceGuid)
      || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
      || (v24 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v24)
      || *((unsigned __int16 *)WdfLogHeader + 15) > v24
      || v24 >= 0x10000 )
    {
      FxVerifierDbgBreakPoint(FxDriverGlobals);
    }
  }
  return 0LL;
}
