/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800199A0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??9CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18001A074 (--9CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6FC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180146D94 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180146F10 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v4; // bl
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rax
  unsigned int TracingCookie; // eax
  int v9; // eax
  HANDLE EventW; // rbx
  struct CResource *v11; // rdx
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-A8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-98h] BYREF

  v4 = 0;
  if ( !(unsigned int)EvaluateCurrentState(this) || *((_DWORD *)a2 + 16) == *((_DWORD *)this + 50) )
  {
    v7 = *((_QWORD *)this + 33);
    if ( (*(_DWORD *)(v7 + 4) & 0x40000000) != 0 || *(int *)(v7 + 4) < 0 )
      v4 = (unsigned __int8)CExpressionValue::operator!=((char *)this + 128, a2) != 0;
    CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 128), a2);
    if ( v4 )
    {
      CBaseExpression::LogSetOutputValue(this);
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v9 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1AFu);
        return v5;
      }
      EventW = CreateEventW(0LL, 1, 0, Name);
      SetEvent(EventW);
      CloseHandle(EventW);
    }
    if ( *((_BYTE *)this + 228) && *((_BYTE *)this + 260) )
    {
      v11 = (struct CResource *)*((_QWORD *)this + 29);
      if ( v11 )
        v11 = *(struct CResource **)v11;
      if ( !v11 )
      {
        v5 = -2147024890;
        v14 = 448;
        goto LABEL_4;
      }
      v12 = CBaseExpression::SetOutputValueOnTarget(this, v11);
      v5 = v12;
      if ( v12 < 0 )
      {
        v14 = 449;
        v6 = v12;
        goto LABEL_5;
      }
    }
    return 0;
  }
  v5 = -2147024809;
  v14 = 392;
LABEL_4:
  v6 = v5;
LABEL_5:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v14);
  return v5;
}
