/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800060B0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180010A98 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180015C90 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18001C9C0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18001F4F4 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x18007494C (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z.c)
 *     ?GetBlurBehindGeometry@CWindowData@@QEAAJPEAPEAUHRGN__@@@Z @ 0x180075820 (-GetBlurBehindGeometry@CWindowData@@QEAAJPEAPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v3; // ebx
  struct CResource *v4; // r13
  struct CResource *v5; // rsi
  CBaseObject *v6; // r15
  CVisual *v7; // rcx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  LONG v12; // eax
  LONG v13; // edx
  int v14; // eax
  _QWORD *v15; // r14
  CBaseObject *v16; // rcx
  struct CVisual **v17; // r12
  int v18; // eax
  int inserted; // eax
  __int64 v20; // rdx
  CWindowData *v21; // rcx
  volatile signed __int32 *v22; // r14
  int BlurBehindGeometry; // eax
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  struct CResource **v27; // r14
  int updated; // eax
  float *v29; // rax
  CResource *v30; // rcx
  float v31; // xmm2_4
  LONG v32; // xmm0_4
  LONG v33; // xmm1_4
  LONG v34; // xmm2_4
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct CResource *v38; // [rsp+38h] [rbp-39h] BYREF
  struct CRenderDataInstruction *v39; // [rsp+40h] [rbp-31h] BYREF
  struct tagRECT v40; // [rsp+48h] [rbp-29h] BYREF
  struct CResource *v41; // [rsp+58h] [rbp-19h] BYREF
  HRGN hrgn; // [rsp+60h] [rbp-11h] BYREF
  int v43; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v44[4]; // [rsp+6Ch] [rbp-5h] BYREF
  double v45; // [rsp+70h] [rbp-1h]
  struct tagRECT v46; // [rsp+78h] [rbp+7h]
  int v47; // [rsp+8Ch] [rbp+1Bh]
  int v48; // [rsp+90h] [rbp+1Fh]

  v1 = *((_QWORD *)this + 93);
  v41 = 0LL;
  v3 = 0;
  v38 = 0LL;
  v4 = 0LL;
  v39 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*(_BYTE *)(v1 + 553) & 4) == 0 )
  {
    v7 = (CVisual *)*((_QWORD *)this + 39);
    if ( v7 )
    {
      v37 = CVisual::ClearInstructions(v7);
      v3 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, 0xEF5u);
    }
    return v3;
  }
  if ( *(_QWORD *)(v1 + 336) )
  {
    v15 = (_QWORD *)((char *)this + 584);
    v16 = (CBaseObject *)*((_QWORD *)this + 73);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *v15 = 0LL;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v1 + 196) - *(_DWORD *)(v1 + 188);
    if ( v9 < 0 )
      v9 = 0;
    v10 = v9 - *(_DWORD *)(v1 + 240) - *(_DWORD *)(v1 + 236);
    v11 = *(_DWORD *)(v1 + 200) - *(_DWORD *)(v1 + 192);
    v40.left = *(_DWORD *)(v1 + 252);
    v12 = *(_DWORD *)(v1 + 260);
    if ( v11 < 0 )
      v11 = 0;
    v13 = v10 - *(_DWORD *)(v1 + 256);
    v40.bottom = v11 - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244) - *(_DWORD *)(v1 + 264);
    v40.right = v13;
    v40.top = v12;
    v14 = ResourceHelper::CreateRectangleGeometry(&v40, (struct CResource **)this + 73);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xE94u);
      return v3;
    }
  }
  v17 = (struct CVisual **)((char *)this + 312);
  if ( !*((_QWORD *)this + 39) )
  {
    v18 = CCanvas::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (struct CCanvas **)this + 39);
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xEA1u);
      return v3;
    }
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 35) + 32LL),
                 *v17,
                 *((struct CVisual **)this + 38),
                 1,
                 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xEA3u);
      return v3;
    }
    v20 = *((_QWORD *)this + 70);
    if ( v20 )
      CVisual::SetInsetFromParent(*v17, (const struct _MARGINS *)(v20 + 120));
    CTopLevelWindow::UpdateWindowScale(this);
  }
  if ( *((_DWORD *)*v17 + 64) )
    return v3;
  v21 = (CWindowData *)*((_QWORD *)this + 93);
  v22 = (volatile signed __int32 *)*((_QWORD *)v21 + 42);
  if ( !v22 )
    v22 = (volatile signed __int32 *)*((_QWORD *)this + 73);
  BlurBehindGeometry = CWindowData::GetBlurBehindGeometry(v21, &hrgn);
  v3 = BlurBehindGeometry;
  if ( BlurBehindGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BlurBehindGeometry, 0xEB6u);
    return v3;
  }
  if ( !hrgn )
  {
    v38 = (struct CResource *)v22;
    v5 = (struct CResource *)v22;
    if ( !v22 )
      goto LABEL_34;
    _InterlockedIncrement(v22 + 2);
    v4 = v41;
    v6 = v39;
LABEL_33:
    v5 = v38;
LABEL_34:
    v27 = (struct CResource **)((char *)this + 784);
    if ( !*((_QWORD *)this + 98) )
    {
      CResource::Create(0x43u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 98);
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xED6u);
        goto LABEL_43;
      }
      v43 = 248;
      memset_0(v44, 0, 0x28uLL);
      v29 = (float *)*((_QWORD *)this + 74);
      v47 = 0;
      v48 = 0;
      v30 = *v27;
      v45 = DOUBLE_1_0;
      v31 = v29[8];
      *(float *)&v32 = v31 * v29[4];
      *(float *)&v33 = v31 * v29[5];
      *(float *)&v34 = v31 * v29[6];
      v40.left = v32;
      *(float *)&v40.bottom = FLOAT_1_0;
      v40.top = v33;
      v40.right = v34;
      v46 = v40;
      CResource::Send(v30, &v43, 0x2Cu);
    }
    if ( !*((_DWORD *)*v17 + 64) )
    {
      v35 = CDrawGeometryInstruction::Create(*v27, v5, &v39);
      v3 = v35;
      if ( v35 >= 0 )
      {
        v6 = v39;
        v36 = CVisual::AddInstruction(*v17, v39);
        v3 = v36;
        if ( v36 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0xEEDu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0xEEAu);
        v6 = v39;
      }
    }
    goto LABEL_43;
  }
  v24 = ResourceHelper::CreateGeometryFromHRGN(hrgn, &v41);
  v3 = v24;
  if ( v24 >= 0 )
  {
    v4 = v41;
    v26 = ResourceHelper::CreateCombinedGeometry(v41, v22, v25, &v38);
    v3 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xEC7u);
      v5 = v38;
      goto LABEL_43;
    }
    goto LABEL_33;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0xEBBu);
  v4 = v41;
LABEL_43:
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v6 )
    CBaseObject::Release(v6);
  return v3;
}
