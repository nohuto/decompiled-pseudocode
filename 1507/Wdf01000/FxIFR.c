/*
 * XREFs of FxIFR @ 0x1C00015E0
 * Callers:
 *     WPP_IFR_SF_sq @ 0x1C000118C (WPP_IFR_SF_sq.c)
 *     WPP_IFR_SF_qqcLq @ 0x1C0001510 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C0008970 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C0008A4C (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qcq @ 0x1C000A4D0 (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_Lq @ 0x1C000A904 (WPP_IFR_SF_Lq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqdq @ 0x1C0010FD0 (WPP_IFR_SF_qqdq.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdD @ 0x1C00237D4 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qLd @ 0x1C0028BB8 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0029320 (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_ddLLdxDD @ 0x1C002A1B8 (WPP_IFR_SF_ddLLdxDD.c)
 *     WPP_IFR_SF_qdq @ 0x1C002D8B4 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0032808 (WPP_IFR_SF_qcDqd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0032B08 (WPP_IFR_SF_qLsqd.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C005D748 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C005D87C (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiqd @ 0x1C005DD54 (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C005DE64 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dq @ 0x1C005FB50 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_dqd @ 0x1C0063BE8 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_dqq @ 0x1C0063D34 (WPP_IFR_SF_dqq.c)
 *     WPP_IFR_SF_qD @ 0x1C0063E18 (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qc @ 0x1C0063F2C (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_qiid @ 0x1C0063FF0 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qld @ 0x1C0064160 (WPP_IFR_SF_qld.c)
 *     WPP_IFR_SF_qqdid @ 0x1C0064248 (WPP_IFR_SF_qqdid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00644C0 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C00645C8 (WPP_IFR_SF_qqqDd.c)
 *     WPP_IFR_SF_qqxDq @ 0x1C00646F4 (WPP_IFR_SF_qqxDq.c)
 *     WPP_IFR_SF_qqxx @ 0x1C006481C (WPP_IFR_SF_qqxx.c)
 *     WPP_IFR_SF_qqxxd @ 0x1C006491C (WPP_IFR_SF_qqxxd.c)
 *     WPP_IFR_SF_sqqxx @ 0x1C0064A44 (WPP_IFR_SF_sqqxx.c)
 *     WPP_IFR_SF_dLd @ 0x1C0064F88 (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C00651A4 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C00652B4 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qi @ 0x1C00653E0 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C00654A4 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qxx @ 0x1C0065590 (WPP_IFR_SF_qxx.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_Ddd @ 0x1C0065ABC (WPP_IFR_SF_Ddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qll @ 0x1C0068020 (WPP_IFR_SF_qll.c)
 *     WPP_IFR_SF_Dddd @ 0x1C0069010 (WPP_IFR_SF_Dddd.c)
 *     WPP_IFR_SF_iid @ 0x1C006989C (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0069980 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qddq @ 0x1C0069A94 (WPP_IFR_SF_qddq.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C0069B9C (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C006C32C (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C006C460 (WPP_IFR_SF_qqcDqd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C006DED4 (WPP_IFR_SF_qDDd.c)
 *     WPP_IFR_SF_qdid @ 0x1C006E03C (WPP_IFR_SF_qdid.c)
 *     WPP_IFR_SF_DD @ 0x1C00704A4 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_qsd @ 0x1C00705B8 (WPP_IFR_SF_qsd.c)
 *     WPP_IFR_SF_dddd @ 0x1C00727A0 (WPP_IFR_SF_dddd.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00731D8 (WPP_IFR_SF_qqqqd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0074840 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0074958 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C0074AB4 (WPP_IFR_SF_qDqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C0075678 (WPP_IFR_SF_Dqq.c)
 *     WPP_IFR_SF_qDxD @ 0x1C007575C (WPP_IFR_SF_qDxD.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0075864 (WPP_IFR_SF_qLqd.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C00759CC (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C0075AF4 (WPP_IFR_SF_qqqi.c)
 *     WPP_IFR_SF_Sd @ 0x1C0076194 (WPP_IFR_SF_Sd.c)
 *     WPP_IFR_SF_qZ @ 0x1C0077588 (WPP_IFR_SF_qZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_Z @ 0x1C0079EDC (WPP_IFR_SF_Z.c)
 *     WPP_IFR_SF_dZq @ 0x1C007A020 (WPP_IFR_SF_dZq.c)
 *     WPP_IFR_SF_qqddd @ 0x1C007A20C (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqid @ 0x1C007A398 (WPP_IFR_SF_qqid.c)
 *     WPP_IFR_SF_sqq @ 0x1C007AA74 (WPP_IFR_SF_sqq.c)
 *     WPP_IFR_SF_ddi @ 0x1C007AD88 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C007AE78 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_iiddiidd @ 0x1C007AF54 (WPP_IFR_SF_iiddiidd.c)
 *     WPP_IFR_SF_DqD @ 0x1C007B624 (WPP_IFR_SF_DqD.c)
 *     WPP_IFR_SF_qqDD @ 0x1C007B708 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqqq @ 0x1C007B820 (WPP_IFR_SF_qqqq.c)
 *     WPP_IFR_SF_qqsd @ 0x1C007BE28 (WPP_IFR_SF_qqsd.c)
 *     WPP_IFR_SF_sqqq @ 0x1C007BFB0 (WPP_IFR_SF_sqqq.c)
 *     WPP_IFR_SF_dqdd @ 0x1C007F094 (WPP_IFR_SF_dqdd.c)
 *     WPP_IFR_SF_xxx @ 0x1C008080C (WPP_IFR_SF_xxx.c)
 *     WPP_IFR_SF_Zd @ 0x1C0080CAC (WPP_IFR_SF_Zd.c)
 *     WPP_IFR_SF_qqD @ 0x1C008180C (WPP_IFR_SF_qqD.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C00818F4 (WPP_IFR_SF_qqDdqq.c)
 *     WPP_IFR_SF_qqDq @ 0x1C0081A3C (WPP_IFR_SF_qqDq.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0081B40 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C0081C84 (WPP_IFR_SF_qqDqqqd.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0084D18 (WPP_IFR_SF_qqdqdd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C0084EA0 (WPP_IFR_SF_qqqqq.c)
 *     WPP_IFR_SF_qqLdqqq @ 0x1C00860DC (WPP_IFR_SF_qqLdqqq.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C0086244 (WPP_IFR_SF_qqqqi.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C0086548 (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008667C (WPP_IFR_SF_qqLd.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C00867D8 (WPP_IFR_SF_qqqdD.c)
 *     WPP_IFR_SF__guid_d @ 0x1C008F05C (WPP_IFR_SF__guid_d.c)
 *     WPP_IFR_SF_dddddd @ 0x1C008FF9C (WPP_IFR_SF_dddddd.c)
 *     WPP_IFR_SF_qLL @ 0x1C0092554 (WPP_IFR_SF_qLL.c)
 *     WPP_IFR_SF_qdL @ 0x1C0092640 (WPP_IFR_SF_qdL.c)
 *     WPP_IFR_SF_ddiid @ 0x1C0092CFC (WPP_IFR_SF_ddiid.c)
 *     WPP_IFR_SF_dii @ 0x1C0092E28 (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x1C0092F18 (WPP_IFR_SF_idii.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C00936F4 (WPP_IFR_SF_DDDDd.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0095214 (WPP_IFR_SF_Lqd.c)
 *     WPP_IFR_SF_cd @ 0x1C00952FC (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qcd @ 0x1C00953C4 (WPP_IFR_SF_qcd.c)
 *     WPP_IFR_SF_qqs @ 0x1C0097C98 (WPP_IFR_SF_qqs.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C009B514 (WPP_IFR_SF_qqLLL.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C009EFD8 (WPP_IFR_SF_DDDDDD.c)
 *     WPP_IFR_SF_LL @ 0x1C009F110 (WPP_IFR_SF_LL.c)
 *     WPP_IFR_SF_LLd @ 0x1C009F1D0 (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C009F2B4 (WPP_IFR_SF_cqcqq.c)
 *     WPP_IFR_SF_dDqq @ 0x1C009F3E0 (WPP_IFR_SF_dDqq.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C009F4E8 (WPP_IFR_SF_dddDqqd.c)
 *     WPP_IFR_SF_sd @ 0x1C009F650 (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_L @ 0x1C009FCC8 (WPP_IFR_SF_L.c)
 *     WPP_IFR_SF_qDDDDsdxsd @ 0x1C00A2308 (WPP_IFR_SF_qDDDDsdxsd.c)
 * Callees:
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
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
  unsigned int v24; // r8d
  signed __int32 offsetNew; // [rsp+30h] [rbp-58h]
  signed __int32 offsetNewa; // [rsp+30h] [rbp-58h]
  __int16 offsetRet_2; // [rsp+36h] [rbp-52h]
  int v28; // [rsp+38h] [rbp-50h] BYREF
  int v29; // [rsp+3Ch] [rbp-4Ch] BYREF
  char *ap; // [rsp+40h] [rbp-48h]
  const void *v31; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, MessageNumber);
  va_start(va, MessageNumber);
  v31 = va_arg(va1, const void *);
  if ( FxLibraryGlobals.IfrDisabled )
    return 0LL;
  WdfLogHeader = (char *)FxDriverGlobals->WdfLogHeader;
  if ( !WdfLogHeader )
    return 3221225473LL;
  va_copy(ap, va1);
  va_copy(v8, va);
  v9 = 0LL;
  if ( v31 )
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
      || RtlCompareMemory(WdfLogHeader, &WdfTraceGuid, 0x10uLL) != 16
      || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
      || (v23 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v23)
      || *((unsigned __int16 *)WdfLogHeader + 15) > v23
      || v23 >= 0x10000 )
    {
      v28 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        FxDriverGlobals->Public.DriverName,
        (const char *)&v28,
        FxDriverGlobals->Public.DriverName,
        (const char *)&v28);
      if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
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
  for ( i = v31; i; v18 += 16 )
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
      || RtlCompareMemory(WdfLogHeader, &WdfTraceGuid, 0x10uLL) != 16
      || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
      || (v24 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v24)
      || *((unsigned __int16 *)WdfLogHeader + 15) > v24
      || v24 >= 0x10000 )
    {
      v29 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        FxDriverGlobals->Public.DriverName,
        (const char *)&v29,
        FxDriverGlobals->Public.DriverName,
        (const char *)&v29);
      if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
  return 0LL;
}
