/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180148EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18001AA98 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180148C14 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180148E50 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180149268 (-IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3)
{
  int v6; // ecx
  unsigned int v7; // ebp
  char v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  CConditionalExpression *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int IsConditionSatisified; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  bool v25; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v26[64]; // [rsp+40h] [rbp-88h] BYREF
  int v27; // [rsp+80h] [rbp-48h]
  char v28; // [rsp+84h] [rbp-44h]

  v6 = *((_DWORD *)this + 84) - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 1;
    memset_0(v26, 0, sizeof(v26));
    v7 = 0;
    v27 = 18;
    v8 = 1;
    v28 = 0;
    if ( *((_DWORD *)this + 80) )
    {
      do
      {
        v9 = CConditionalExpression::CalculateConditionValue(this, v7, a2, a3, &v25);
        v10 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x118u);
          return v10;
        }
        if ( v25 )
        {
          v8 = 0;
          v11 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * v7 + 8);
          v12 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)v11 + 144LL))(
                  v11,
                  a2,
                  a3);
          v10 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x11Fu);
            return v10;
          }
          if ( v12 != 1 )
          {
            v14 = CConditionalExpression::AddStackValueToSum(v13, (struct CExpressionValue *)v26, a2);
            v10 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x129u);
              return v10;
            }
          }
        }
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 80) );
      if ( v8 )
        goto LABEL_17;
      if ( v28 )
      {
        v15 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v26);
        v10 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x141u);
        return v10;
      }
      return 1;
    }
LABEL_17:
    v16 = *((_QWORD *)this + 41);
    if ( !v16 )
      return 1;
    v17 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)v16 + 144LL))(
            v16,
            a2,
            a3);
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x133u);
  }
  else
  {
    IsConditionSatisified = CConditionalExpression::IsConditionSatisified(this, a2, a3, 0LL);
    v10 = IsConditionSatisified;
    if ( IsConditionSatisified < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsConditionSatisified, 0xF2u);
      return v10;
    }
    v19 = *((_DWORD *)this + 85);
    if ( v19 < 0 )
    {
      v22 = *((_QWORD *)this + 41);
      if ( !v22 )
        return 1;
      v23 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)v22 + 144LL))(
              v22,
              a2,
              a3);
      v10 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xFAu);
    }
    else
    {
      v20 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)v19 + 8);
      v21 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)v20 + 144LL))(
              v20,
              a2,
              a3);
      v10 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xF6u);
    }
  }
  return v10;
}
