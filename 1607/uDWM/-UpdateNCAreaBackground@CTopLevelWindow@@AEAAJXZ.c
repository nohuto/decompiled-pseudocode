/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023FA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x1800218D0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  __int64 v1; // rax
  CBaseObject *v2; // rdi
  unsigned int v4; // esi
  int updated; // eax
  struct CVisual **v6; // r14
  int v7; // eax
  _DWORD *v8; // rax
  float *v9; // rax
  bool v10; // zf
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  CVisual *v19; // rcx
  int v20; // eax
  struct CRenderDataInstruction *v21; // r12
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int inserted; // eax
  CVisual *v27; // rcx
  int v28; // eax
  struct CRenderDataInstruction *v29; // [rsp+40h] [rbp-29h] BYREF
  struct CRenderDataInstruction *v30; // [rsp+48h] [rbp-21h] BYREF
  struct _MARGINS v31; // [rsp+50h] [rbp-19h] BYREF
  __int128 v32; // [rsp+60h] [rbp-9h] BYREF
  __int128 v33; // [rsp+70h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 93);
  v2 = 0LL;
  v30 = 0LL;
  v4 = 0;
  v29 = 0LL;
  if ( (*(_BYTE *)(v1 + 576) & 8) == 0
    || !*((_DWORD *)this + 157) && !*((_DWORD *)this + 159) && !*((_DWORD *)this + 158) && !*((_DWORD *)this + 160) )
  {
    v19 = (CVisual *)*((_QWORD *)this + 38);
    if ( v19 )
    {
      v28 = CVisual::ClearInstructions(v19);
      v4 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC89u);
    }
    return v4;
  }
  updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xC25u);
    return v4;
  }
  v6 = (struct CVisual **)((char *)this + 304);
  if ( !*((_QWORD *)this + 38) )
  {
    v25 = CCanvas::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CCanvas **)this + 38);
    v4 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC2Au);
      return v4;
    }
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 35) + 32LL), *v6, 0LL, 1, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xC2Du);
      return v4;
    }
    v27 = *v6;
    v31 = 0LL;
    CVisual::SetInsetFromParent(v27, &v31);
  }
  if ( !*((_QWORD *)this + 96) )
    CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)this + 96);
  v7 = CTopLevelWindow::UpdateColorizationColor(this);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC3Au);
    return v4;
  }
  v8 = (_DWORD *)*((_QWORD *)this + 93);
  if ( v8[20] == 0x7FFFFFFF && v8[21] == 0x7FFFFFFF && v8[22] == 0x7FFFFFFF && v8[23] == 0x7FFFFFFF )
    v9 = (float *)*((_QWORD *)this + 75);
  else
    v9 = (float *)*((_QWORD *)this + 74);
  v10 = 1.0 == *((float *)this + 180);
  v11 = v9[8] * v9[4];
  v12 = v9[8] * v9[5];
  v13 = v9[8] * v9[6];
  *(_QWORD *)&v32 = __PAIR64__(LODWORD(v12), LODWORD(v11));
  *((_QWORD *)&v32 + 1) = LODWORD(v13) | 0x3F80000000000000LL;
  if ( !v10 || v11 != *((float *)this + 177) || v12 != *((float *)this + 178) || v13 != *((float *)this + 179) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 96) + 16LL)
                                                                                       + 1136LL))(
      *(_QWORD *)(*((_QWORD *)this + 96) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 96) + 24LL),
      *(_QWORD *)(*((_QWORD *)this + 96) + 16LL),
      &v32,
      0,
      0,
      0);
    *(_OWORD *)((char *)this + 708) = v32;
  }
  if ( !*((_QWORD *)this + 97) )
    CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)this + 97);
  v14 = (float *)*((_QWORD *)this + 75);
  v10 = 1.0 == *((float *)this + 184);
  v15 = v14[4] * v14[8];
  *(float *)&v33 = v15;
  v16 = v14[5] * v14[8];
  *((float *)&v33 + 1) = v16;
  v17 = v14[6] * v14[8];
  *((_QWORD *)&v33 + 1) = LODWORD(v17) | 0x3F80000000000000LL;
  if ( !v10 || v15 != *((float *)this + 181) || v16 != *((float *)this + 182) || v17 != *((float *)this + 183) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 97) + 16LL)
                                                                                       + 1136LL))(
      *(_QWORD *)(*((_QWORD *)this + 97) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 97) + 24LL),
      *(_QWORD *)(*((_QWORD *)this + 97) + 16LL),
      &v33,
      0,
      0,
      0);
    *(_OWORD *)((char *)this + 724) = v33;
  }
  if ( !*((_DWORD *)*v6 + 64) )
  {
    v20 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 96), *((struct CResource **)this + 71), &v30);
    v21 = v30;
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC77u);
    }
    else
    {
      v22 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 97), *((struct CResource **)this + 72), &v29);
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC7Du);
      }
      else
      {
        v23 = CVisual::AddInstruction(*v6, v21);
        v4 = v23;
        if ( v23 >= 0 )
        {
          v2 = v29;
          v24 = CVisual::AddInstruction(*v6, v29);
          v4 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC81u);
          goto LABEL_33;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC80u);
      }
      v2 = v29;
    }
LABEL_33:
    if ( v21 )
      CBaseObject::Release(v21);
    if ( v2 )
      CBaseObject::Release(v2);
  }
  return v4;
}
