/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180061814 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1800E3BF8 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180100FB4 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18010D8FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180120FD4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x180121130 (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18012122C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801213DC (-GetValue@CExpressionValue@@QEBAPEBXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(LPCGUID pActivityId, const struct CExpressionValue *a2)
{
  bool v4; // bl
  struct CResource *v5; // r15
  unsigned int v6; // edi
  int v7; // eax
  HANDLE EventW; // rbx
  int v9; // eax
  _BYTE *v10; // rax
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edx
  int AsFloatArray; // eax
  unsigned int v18; // edx
  int v19; // eax
  unsigned __int8 *v20; // r8
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v22; // rdx
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rdi
  unsigned int v27; // esi
  __int64 v28; // r9
  const void *Value; // rbx
  int v30; // eax
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  struct CResource *v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+44h] [rbp-BCh]
  float v35; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v36[60]; // [rsp+64h] [rbp-9Ch] BYREF
  WCHAR Name[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v38[124]; // [rsp+A4h] [rbp-5Ch] BYREF

  v4 = 0;
  v5 = 0LL;
  v32 = 0LL;
  if ( *(_DWORD *)pActivityId[7].Data4 )
    v4 = (unsigned __int8)CExpressionValue::operator==((CExpressionValue *)&pActivityId[3], a2) == 0;
  v6 = CExpressionValue::CopyFrom((CExpressionValue *)&pActivityId[3], a2);
  if ( v4 )
  {
    CBaseExpression::LogSetOutputValue(pActivityId);
    v7 = StringCchPrintfW(Name, 60LL, L"DwmExpression_SetValue_%d", *(unsigned int *)pActivityId[7].Data4);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x106u);
      return v6;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x10Fu);
    return v6;
  }
  if ( !LOBYTE(pActivityId[6].Data2) )
    goto LABEL_45;
  v9 = CComposition::ResolveExpressionTargetReference(
         *(CComposition **)&pActivityId[1].Data1,
         pActivityId[6].Data1,
         *(_DWORD *)pActivityId[6].Data4,
         &v32);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x118u);
    v5 = v32;
    goto LABEL_46;
  }
  v10 = *(_BYTE **)&pActivityId[7].Data1;
  if ( v10 && *v10 )
  {
    v5 = v32;
    v31 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(struct CResource *, GUID *, __int64 *))v32)(
            v32,
            &GUID_0d3e77a0_a365_4a0b_b476_396fef364781,
            &v31);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x126u);
      goto LABEL_16;
    }
    v33 = 17;
    v34 = 0;
    CExpressionValue::Reset((CExpressionValue *)&v33, 1);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v31 + 24LL))(
            v31,
            *(unsigned int *)&pActivityId[6].Data4[4],
            &v33);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x129u);
LABEL_20:
      CExpressionValue::Reset((CExpressionValue *)&v33, 0);
LABEL_16:
      v12 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      goto LABEL_46;
    }
    if ( *(_DWORD *)(*(_QWORD *)&pActivityId[7].Data1 + 4LL) == 1 )
    {
      v14 = v33 - 17;
      if ( (unsigned int)v14 > 0x33 || (v15 = 0x8000400020001LL, !_bittest64(&v15, v14)) )
      {
        v6 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x13Au);
        goto LABEL_20;
      }
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)&pActivityId[7].Data1 + 4LL) != 2 )
      {
        v6 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x14Du);
        goto LABEL_20;
      }
      if ( v33 != 101 && v33 != 262 )
      {
        v6 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x143u);
        goto LABEL_20;
      }
    }
    v35 = 0.0;
    memset_0(v36, 0, sizeof(v36));
    AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)&v33, v16, &v35);
    v6 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x158u);
      goto LABEL_20;
    }
    *(_DWORD *)Name = 0;
    memset_0(v38, 0, 0x3CuLL);
    v19 = CExpressionValue::GetAsFloatArray(a2, v18, (float *)Name);
    v6 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x15Bu);
      goto LABEL_20;
    }
    v20 = *(unsigned __int8 **)&pActivityId[7].Data1;
    if ( *v20 )
    {
      while ( *((_DWORD *)v20 + 1) == 1 || *((_DWORD *)v20 + 1) == 2 )
      {
        ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v33);
        if ( (unsigned int)v22 >= ExpressionTypeChannelCount || (unsigned int)v22 >= 0x10 )
        {
          v6 = -2147467259;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x185u);
          goto LABEL_20;
        }
        *(float *)&v36[4 * v22 - 4] = *(float *)&Name[2 * v23];
        if ( v23 + 1 >= (unsigned int)*v20 )
          goto LABEL_39;
      }
      v6 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x176u);
      goto LABEL_20;
    }
LABEL_39:
    v24 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, float *))(*(_QWORD *)v5 + 80LL))(
            v5,
            *(unsigned int *)&pActivityId[6].Data4[4],
            v33,
            &v35);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x190u);
      goto LABEL_20;
    }
    CExpressionValue::Reset((CExpressionValue *)&v33, 0);
    v25 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_45;
  }
  v5 = v32;
  v27 = *(_DWORD *)pActivityId[4].Data4;
  Value = CExpressionValue::GetValue((CExpressionValue *)&pActivityId[3]);
  v30 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, const void *))(v28 + 80))(
          v5,
          *(unsigned int *)&pActivityId[6].Data4[4],
          v27,
          Value);
  v6 = v30;
  if ( v30 >= 0 )
  {
LABEL_45:
    v6 = 0;
    goto LABEL_46;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x11Cu);
LABEL_46:
  if ( v5 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
