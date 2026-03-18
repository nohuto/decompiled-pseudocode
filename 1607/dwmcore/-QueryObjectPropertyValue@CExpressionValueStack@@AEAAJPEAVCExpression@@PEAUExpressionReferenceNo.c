/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180112924
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18010ABC4 (-ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180137834 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180137960 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x18015CAF8 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18015CE30 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4,
        struct CExpressionValue *a5,
        struct SubchannelMaskInfo *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  __int64 Elapsed; // rax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v20 = a4;
  v19 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v8 < *((_DWORD *)a2 + 124) )
    v10 = *((_QWORD *)a2 + 59) + 32 * v8;
  else
    v10 = 0LL;
  if ( (unsigned __int8)CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 168LL) + 104LL;
    QpcStopwatch::Start((QpcStopwatch *)&v18);
    v6 = v18;
  }
  v12 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, __int64 *, __int64 *))(*(_QWORD *)a2 + 168LL))(
          a2,
          *(unsigned int *)(v10 + 28),
          &v20,
          &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x103u);
  }
  else
  {
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v18);
      CExpressionPerformanceCounter::AddDurationSample(v7, 3LL, Elapsed);
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v19 + 88LL))(
            v19,
            *(unsigned int *)(v10 + 4),
            a5);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x10Au);
    }
    else if ( a6 && *((_BYTE *)a6 + 4) && (v16 = CExpressionValue::ApplyMaskToValue(a5, a6), v13 = v16, v16 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x11Au);
    }
    else
    {
      v13 = 0;
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v13;
}
