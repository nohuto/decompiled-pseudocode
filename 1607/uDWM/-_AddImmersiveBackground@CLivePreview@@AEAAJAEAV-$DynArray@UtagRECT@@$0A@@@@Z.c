/*
 * XREFs of ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE6C
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E8FC (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003828C (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x180074A8C (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800758F8 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x18009982C (-GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z.c)
 */

__int64 __fastcall CLivePreview::_AddImmersiveBackground(__int64 a1, __int64 a2)
{
  struct CVisual *v2; // rsi
  CVisual *v3; // rdi
  unsigned int v5; // ebx
  CImmersiveState *v6; // rcx
  unsigned int v7; // r13d
  char v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // r10
  struct tagRECT v11; // xmm0
  int v12; // eax
  int updated; // eax
  int v14; // eax
  int inserted; // eax
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  struct tagPOINT v22; // [rsp+30h] [rbp-59h] BYREF
  CVisual *v23; // [rsp+38h] [rbp-51h] BYREF
  struct CVisual *v24; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h]
  __m128i v26; // [rsp+50h] [rbp-39h] BYREF
  __m256i v27; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp+7h] BYREF

  v25 = a2;
  v2 = 0LL;
  *(_QWORD *)&v28.left = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v28.right = 0LL;
  v24 = 0LL;
  v26 = 0uLL;
  v5 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( !CLivePreview::_ShouldAddImmersiveChrome((CLivePreview *)a1) )
    return v5;
  v6 = *(CImmersiveState **)(a1 + 536);
  v7 = 0;
  if ( !*((_DWORD *)v6 + 10) )
    return v5;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v11 = *(struct tagRECT *)CImmersiveState::GetDesktopWorkAreaAtIndex(v6, v7);
    v29[0] = 0LL;
    v28 = v11;
    v29[1] = 0LL;
    if ( *(_DWORD *)(v10 + 24) )
    {
      while ( (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(*(_QWORD *)v10 + 16LL * v9, &v28, v29) != 2 )
      {
        v10 = v25;
        if ( ++v9 >= *(_DWORD *)(v25 + 24) )
          goto LABEL_8;
      }
      v8 = 1;
    }
LABEL_8:
    if ( v8 )
      goto LABEL_20;
    v12 = CAccent::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v24);
    v5 = v12;
    if ( v12 < 0 )
      break;
    v2 = v24;
    v26.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v26.m128i_i32[0] = 1;
    updated = CAccent::UpdateAccentPolicy(v24, &v28, &v26, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x440u);
      goto LABEL_28;
    }
    v14 = CVisual::Create(*(struct IDwmChannel **)(*(_QWORD *)(a1 + 16) + 16LL), &v23);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x442u);
      v3 = v23;
      goto LABEL_28;
    }
    v3 = v23;
    v22.x = v28.left;
    v22.y = v28.top;
    CVisual::SetOffset((struct tagPOINT *)v23, &v22);
    inserted = VisualCollection::InsertRelative((CVisual *)((char *)v3 + 32), v2, 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x448u);
      goto LABEL_28;
    }
    v16 = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(a1 + 488) + 32LL), v3, 0LL, 0, 1);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x44Au);
      goto LABEL_28;
    }
    v27.m256i_i64[0] = (__int64)v3;
    v17 = (_QWORD *)(a1 + 416);
    v27.m256i_i64[3] = 0LL;
    v18 = *(unsigned int *)(a1 + 440);
    *(struct tagRECT *)&v27.m256i_u64[1] = v28;
    v19 = v18 + 1;
    if ( (int)v18 + 1 >= (unsigned int)v18 )
    {
      if ( v19 > *(_DWORD *)(a1 + 436) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 0x20u, 1, &v27);
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xC0u);
      }
      else
      {
        *(__m256i *)(*v17 + 32 * v18) = v27;
        *(_DWORD *)(a1 + 440) = v19;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
LABEL_20:
    v6 = *(CImmersiveState **)(a1 + 536);
    if ( ++v7 >= *((_DWORD *)v6 + 10) )
      goto LABEL_28;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x43Cu);
  v2 = v24;
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
LABEL_31:
    if ( v3 )
      CBaseObject::Release(v3);
  }
  else if ( v3 )
  {
    VisualCollection::RemoveAll((CVisual *)((char *)v3 + 32));
    goto LABEL_31;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return v5;
}
