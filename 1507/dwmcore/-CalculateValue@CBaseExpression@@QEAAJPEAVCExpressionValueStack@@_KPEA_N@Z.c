/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@@Z @ 0x180101D7C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ @ 0x180110DC0 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180110E50 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x1800E093C (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z @ 0x1800E3B2C (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180101C84 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // edi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  const struct CExpressionValue *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  unsigned int v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct IExpressionSource *v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+40h] [rbp-28h] BYREF
  char v22; // [rsp+44h] [rbp-24h]

  v4 = *((_DWORD *)a2 + 4);
  v5 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 11) == a3 )
    return v5;
  if ( *((_QWORD *)this + 10) == a3 )
  {
    *a4 = 1;
    return v5;
  }
  *a4 = 0;
  v20 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = a3;
  if ( *((_BYTE *)this + 52) && !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 112LL))(this) )
  {
    *((_QWORD *)this + 11) = a3;
    goto LABEL_38;
  }
  if ( CBaseExpression::s_recursionLevel > 0x10 )
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x243u);
LABEL_33:
    v14 = *((_DWORD *)a2 + 4);
    if ( v14 > v4 )
    {
      v15 = v14 - v4;
      do
      {
        --v14;
        --v15;
      }
      while ( v15 );
      *((_DWORD *)a2 + 4) = v14;
    }
    *((_QWORD *)this + 10) = v20;
    goto LABEL_38;
  }
  ++CBaseExpression::s_recursionLevel;
  v10 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 96LL))(this);
  v11 = CExpressionValueStack::EnsureAvailableStackSpace(a2, v10);
  v5 = v11;
  if ( v11 < 0 )
  {
    v17 = 592;
    goto LABEL_11;
  }
  v11 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, bool *))(*(_QWORD *)this + 104LL))(
          this,
          a2,
          a3,
          a4);
  v5 = v11;
  if ( v11 < 0 )
  {
    v17 = 600;
    goto LABEL_11;
  }
  if ( v11 == 1 )
  {
    v21 = 17;
    v22 = 0;
    CExpressionValue::Reset((CExpressionValue *)&v21, 1);
    v12 = CComposition::ResolveExpressionSourceReference(
            *((CComposition **)this + 2),
            *((_DWORD *)this + 24),
            *((_DWORD *)this + 26),
            &v19);
    v5 = v12;
    if ( v12 < 0 )
    {
      v18 = 610;
LABEL_18:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v18);
LABEL_19:
      CExpressionValue::Reset((CExpressionValue *)&v21, 0);
      goto LABEL_32;
    }
    v12 = (*(__int64 (__fastcall **)(struct IExpressionSource *, _QWORD, int *))(*(_QWORD *)v19 + 24LL))(
            v19,
            *((unsigned int *)this + 27),
            &v21);
    v5 = v12;
    if ( v12 < 0 )
    {
      v18 = 612;
      goto LABEL_18;
    }
    if ( v21 != *((_DWORD *)this + 18) )
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x267u);
      goto LABEL_19;
    }
    v12 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)&v21);
    v5 = v12;
    if ( v12 < 0 )
    {
      v18 = 618;
      goto LABEL_18;
    }
    CExpressionValue::Reset((CExpressionValue *)&v21, 0);
  }
  if ( *((_DWORD *)a2 + 4) != v4 + 1 )
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x278u);
    goto LABEL_32;
  }
  v13 = CExpressionValueStack::PeekStackValue(a2, 0);
  v11 = CBaseExpression::SetOutputValue((LPCGUID)this, v13);
  v5 = v11;
  if ( v11 >= 0 )
  {
    --*((_DWORD *)a2 + 4);
    v5 = 0;
    *((_QWORD *)this + 11) = a3;
    goto LABEL_32;
  }
  v17 = 640;
LABEL_11:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v17);
LABEL_32:
  --CBaseExpression::s_recursionLevel;
  if ( (v5 & 0x80000000) != 0 )
    goto LABEL_33;
LABEL_38:
  if ( v19 )
    (*(void (__fastcall **)(struct IExpressionSource *))(*(_QWORD *)v19 + 16LL))(v19);
  return v5;
}
