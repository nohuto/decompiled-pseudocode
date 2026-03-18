/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18012BA64 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18012C220 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AF354 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x180101678 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18012877C (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180128F90 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180136498 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x1801368EC (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 *     ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x180136BF4 (-GetValue@CExpressionValue@@QEBAPEBXXZ.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180136C70 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(LPCGUID pActivityId, const struct CExpressionValue *a2)
{
  struct CResource *v2; // rbx
  bool v3; // di
  unsigned int v6; // esi
  int v7; // eax
  HANDLE EventW; // rdi
  int v9; // eax
  _BYTE *v10; // rax
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  unsigned int v16; // r14d
  __int64 v17; // r9
  const void *Value; // rdi
  int v19; // eax
  struct CResource *v20; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-71h] BYREF
  char v22; // [rsp+3Ch] [rbp-6Dh]
  WCHAR Name[2]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v24[124]; // [rsp+54h] [rbp-55h] BYREF

  v2 = 0LL;
  v3 = 0;
  v20 = 0LL;
  if ( *(_DWORD *)pActivityId[7].Data4 )
    v3 = (unsigned __int8)CExpressionValue::operator==(&pActivityId[3]) == 0;
  v6 = CExpressionValue::CopyFrom((CExpressionValue *)&pActivityId[3], a2);
  if ( v3 )
  {
    CBaseExpression::LogSetOutputValue(pActivityId);
    v7 = StringCchPrintfW(Name, 60LL, L"DwmExpression_SetValue_%d", *(unsigned int *)pActivityId[7].Data4);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x11Au);
      return v6;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x123u);
    return v6;
  }
  if ( !LOBYTE(pActivityId[6].Data2) )
    goto LABEL_22;
  v9 = CComposition::ResolveExpressionTargetReference(
         *(CComposition **)&pActivityId[1].Data1,
         pActivityId[6].Data1,
         *(_DWORD *)pActivityId[6].Data4,
         &v20);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12Cu);
    v2 = v20;
    goto LABEL_23;
  }
  v10 = *(_BYTE **)&pActivityId[7].Data1;
  if ( v10 && *v10 )
  {
    v21 = 18;
    v22 = 0;
    CExpressionValue::Reset((CExpressionValue *)&v21, 1);
    v2 = v20;
    v11 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, unsigned int *))(*(_QWORD *)v20 + 88LL))(
            v20,
            *(unsigned int *)&pActivityId[6].Data4[4],
            &v21);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x13Au);
LABEL_16:
      CExpressionValue::Reset((CExpressionValue *)&v21, 0);
      goto LABEL_23;
    }
    *(_DWORD *)Name = 0;
    memset_0(v24, 0, 0x3CuLL);
    v13 = CBaseExpression::MergeValueWithMask(
            (const struct CExpressionValue *)&v21,
            (unsigned __int64)&pActivityId[3],
            *(const struct SubchannelMaskInfo **)&pActivityId[7].Data1,
            v12,
            (float *)Name);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x142u);
      goto LABEL_16;
    }
    v14 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, WCHAR *))(*(_QWORD *)v2 + 80LL))(
            v2,
            *(unsigned int *)&pActivityId[6].Data4[4],
            v21,
            Name);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x149u);
      goto LABEL_16;
    }
    CExpressionValue::Reset((CExpressionValue *)&v21, 0);
    goto LABEL_22;
  }
  v2 = v20;
  v16 = *(_DWORD *)pActivityId[4].Data4;
  Value = CExpressionValue::GetValue((CExpressionValue *)&pActivityId[3]);
  v19 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, const void *))(v17 + 80))(
          v2,
          *(unsigned int *)&pActivityId[6].Data4[4],
          v16,
          Value);
  v6 = v19;
  if ( v19 >= 0 )
  {
LABEL_22:
    v6 = 0;
    goto LABEL_23;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x130u);
LABEL_23:
  if ( v2 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
