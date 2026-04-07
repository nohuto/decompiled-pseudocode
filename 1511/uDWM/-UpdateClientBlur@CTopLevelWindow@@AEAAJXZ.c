/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetBlurBehindGeometry@CWindowData@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800034F0 (-GetBlurBehindGeometry@CWindowData@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000E35C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x180012B30 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001CED0 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180023F2C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180024944 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029970 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003AA40 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v3; // ebx
  CBaseObject *v4; // r13
  struct CResource *v5; // rsi
  CBaseObject *v6; // r15
  CVisual *v7; // rcx
  _QWORD *v9; // r14
  CBaseObject *v10; // rcx
  struct CVisual **v11; // r12
  CWindowData *v12; // rcx
  volatile signed __int32 *v13; // r14
  int BlurBehindGeometry; // eax
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  struct CResource **v18; // r14
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int inserted; // eax
  __int64 v23; // rdx
  int updated; // eax
  float *v25; // rax
  CResource *v26; // rcx
  float v27; // xmm2_4
  LONG v28; // xmm0_4
  LONG v29; // xmm1_4
  LONG v30; // xmm2_4
  int v31; // edx
  int v32; // edx
  int v33; // ecx
  LONG v34; // eax
  LONG v35; // edx
  int v36; // eax
  int v37; // eax
  struct CResource *v38; // [rsp+38h] [rbp-39h] BYREF
  struct CRenderDataInstruction *v39; // [rsp+40h] [rbp-31h] BYREF
  struct tagRECT v40; // [rsp+48h] [rbp-29h] BYREF
  CBaseObject *v41; // [rsp+58h] [rbp-19h] BYREF
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
  if ( (*(_BYTE *)(v1 + 569) & 4) == 0 )
  {
    v7 = (CVisual *)*((_QWORD *)this + 39);
    if ( v7 )
    {
      v37 = CVisual::ClearInstructions(v7);
      v3 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, 0xF47u);
    }
    return v3;
  }
  if ( *(_QWORD *)(v1 + 352) )
  {
    v9 = (_QWORD *)((char *)this + 584);
    v10 = (CBaseObject *)*((_QWORD *)this + 73);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *v9 = 0LL;
    }
  }
  else
  {
    v31 = *(_DWORD *)(v1 + 196) - *(_DWORD *)(v1 + 188);
    if ( v31 < 0 )
      v31 = 0;
    v32 = v31 - *(_DWORD *)(v1 + 240) - *(_DWORD *)(v1 + 236);
    v33 = *(_DWORD *)(v1 + 200) - *(_DWORD *)(v1 + 192);
    v40.left = *(_DWORD *)(v1 + 252);
    v34 = *(_DWORD *)(v1 + 260);
    if ( v33 < 0 )
      v33 = 0;
    v35 = v32 - *(_DWORD *)(v1 + 256);
    v40.bottom = v33 - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244) - *(_DWORD *)(v1 + 264);
    v40.right = v35;
    v40.top = v34;
    v36 = ResourceHelper::CreateRectangleGeometry(&v40, (struct CResource **)this + 73);
    v3 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0xEE6u);
      return v3;
    }
  }
  v11 = (struct CVisual **)((char *)this + 312);
  if ( !*((_QWORD *)this + 39) )
  {
    v21 = CCanvas::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (struct CCanvas **)this + 39);
    v3 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xEF3u);
      return v3;
    }
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 35) + 32LL),
                 *v11,
                 *((struct CVisual **)this + 38),
                 1,
                 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xEF5u);
      return v3;
    }
    v23 = *((_QWORD *)this + 70);
    if ( v23 )
      CVisual::SetInsetFromParent(*v11, (const struct _MARGINS *)(v23 + 120));
    CTopLevelWindow::UpdateWindowScale(this);
  }
  if ( !*((_DWORD *)*v11 + 64) )
  {
    v12 = (CWindowData *)*((_QWORD *)this + 93);
    v13 = (volatile signed __int32 *)*((_QWORD *)v12 + 44);
    if ( !v13 )
      v13 = (volatile signed __int32 *)*((_QWORD *)this + 73);
    BlurBehindGeometry = CWindowData::GetBlurBehindGeometry(v12, &hrgn);
    v3 = BlurBehindGeometry;
    if ( BlurBehindGeometry < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BlurBehindGeometry, 0xF08u);
      return v3;
    }
    if ( hrgn )
    {
      v15 = ResourceHelper::CreateGeometryFromHRGN(hrgn, &v41);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xF0Du);
        v4 = v41;
        goto LABEL_21;
      }
      v4 = v41;
      v17 = ResourceHelper::CreateCombinedGeometry((__int64)v41, (__int64)v13, v16, &v38);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xF19u);
        v5 = v38;
        goto LABEL_21;
      }
    }
    else
    {
      v38 = (struct CResource *)v13;
      v5 = (struct CResource *)v13;
      if ( !v13 )
        goto LABEL_16;
      _InterlockedIncrement(v13 + 2);
      v4 = v41;
      v6 = v39;
    }
    v5 = v38;
LABEL_16:
    v18 = (struct CResource **)((char *)this + 784);
    if ( *((_QWORD *)this + 98) )
      goto LABEL_17;
    CResource::Create(0x47u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 98);
    updated = CTopLevelWindow::UpdateColorizationColor(this);
    v3 = updated;
    if ( updated >= 0 )
    {
      v43 = 255;
      memset_0(v44, 0, 0x28uLL);
      v25 = (float *)*((_QWORD *)this + 74);
      v47 = 0;
      v48 = 0;
      v26 = *v18;
      v45 = DOUBLE_1_0;
      v27 = v25[8];
      *(float *)&v28 = v27 * v25[4];
      *(float *)&v29 = v27 * v25[5];
      *(float *)&v30 = v27 * v25[6];
      v40.left = v28;
      *(float *)&v40.bottom = FLOAT_1_0;
      v40.top = v29;
      v40.right = v30;
      v46 = v40;
      CResource::Send(v26, &v43, 0x2Cu);
LABEL_17:
      if ( !*((_DWORD *)*v11 + 64) )
      {
        v19 = CDrawGeometryInstruction::Create(*v18, v5, &v39);
        v3 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xF3Cu);
          v6 = v39;
        }
        else
        {
          v6 = v39;
          v20 = CVisual::AddInstruction(*v11, v39);
          v3 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xF3Fu);
        }
      }
      goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xF28u);
LABEL_21:
    if ( v4 )
      CBaseObject::Release(v4);
    if ( v5 )
      CBaseObject::Release(v5);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return v3;
}
