/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180023C8C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x180008950 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000B42C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18002169C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003D0C0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r8
  volatile signed __int32 *v13; // r14
  HRGN v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  struct CResource **v20; // r14
  int v21; // eax
  int v22; // eax
  int inserted; // eax
  __int64 v24; // rdx
  int updated; // eax
  float *v26; // rax
  struct CResource *v27; // rdx
  __int64 v28; // rcx
  int v29; // edx
  int v30; // edx
  int v31; // ecx
  LONG v32; // eax
  LONG v33; // edx
  unsigned int v34; // [rsp+28h] [rbp-39h]
  struct CResource *v35; // [rsp+48h] [rbp-19h] BYREF
  CBaseObject *v36; // [rsp+50h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v37; // [rsp+58h] [rbp-9h] BYREF
  HRGN hrgn; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v39; // [rsp+68h] [rbp+7h] BYREF
  float v40[4]; // [rsp+78h] [rbp+17h] BYREF

  v1 = *((_QWORD *)this + 93);
  v36 = 0LL;
  v3 = 0;
  v35 = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*(_BYTE *)(v1 + 577) & 4) != 0 )
  {
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
      v29 = *(_DWORD *)(v1 + 196) - *(_DWORD *)(v1 + 188);
      if ( v29 < 0 )
        v29 = 0;
      v30 = v29 - *(_DWORD *)(v1 + 240) - *(_DWORD *)(v1 + 236);
      v31 = *(_DWORD *)(v1 + 200) - *(_DWORD *)(v1 + 192);
      v39.left = *(_DWORD *)(v1 + 252);
      v32 = *(_DWORD *)(v1 + 260);
      if ( v31 < 0 )
        v31 = 0;
      v33 = v30 - *(_DWORD *)(v1 + 256);
      v39.bottom = v31 - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244) - *(_DWORD *)(v1 + 264);
      v39.right = v33;
      v39.top = v32;
      inserted = ResourceHelper::CreateRectangleGeometry(&v39, (struct CResource **)this + 73);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3250;
        goto LABEL_54;
      }
    }
    v11 = (struct CVisual **)((char *)this + 312);
    if ( *((_QWORD *)this + 39) )
      goto LABEL_8;
    inserted = CCanvas::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CCanvas **)this + 39);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v34 = 3261;
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 35) + 32LL),
                   *v11,
                   *((struct CVisual **)this + 38),
                   1,
                   1);
      v3 = inserted;
      if ( inserted >= 0 )
      {
        v24 = *((_QWORD *)this + 70);
        if ( v24 )
          CVisual::SetInsetFromParent(*v11, (const struct _MARGINS *)(v24 + 120));
        CTopLevelWindow::UpdateWindowScale(this);
LABEL_8:
        if ( *((_DWORD *)*v11 + 64) )
          return v3;
        v12 = *((_QWORD *)this + 93);
        v13 = *(volatile signed __int32 **)(v12 + 352);
        if ( !v13 )
          v13 = (volatile signed __int32 *)*((_QWORD *)this + 73);
        v14 = 0LL;
        hrgn = 0LL;
        v15 = *(_QWORD *)(v12 + 24);
        if ( v15 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v15 + 304LL))(v15, &hrgn);
          v14 = hrgn;
          v3 = v16;
        }
        else
        {
          v3 = 0;
        }
        if ( (v3 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xCD0u);
          return v3;
        }
        if ( v14 )
        {
          v17 = ResourceHelper::CreateGeometryFromHRGN(v14, &v36);
          v3 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xCD5u);
            v4 = v36;
            goto LABEL_23;
          }
          v4 = v36;
          v19 = ResourceHelper::CreateCombinedGeometry((__int64)v36, (__int64)v13, v18, &v35);
          v3 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xCDFu);
            v5 = v35;
            goto LABEL_23;
          }
        }
        else
        {
          v35 = (struct CResource *)v13;
          v5 = (struct CResource *)v13;
          if ( !v13 )
            goto LABEL_18;
          _InterlockedIncrement(v13 + 2);
          v4 = v36;
          v6 = v37;
        }
        v5 = v35;
LABEL_18:
        v20 = (struct CResource **)((char *)this + 784);
        if ( *((_QWORD *)this + 98) )
          goto LABEL_19;
        CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)this + 98);
        updated = CTopLevelWindow::UpdateColorizationColor(this);
        v3 = updated;
        if ( updated >= 0 )
        {
          v26 = (float *)*((_QWORD *)this + 74);
          v27 = *v20;
          v28 = *((_QWORD *)*v20 + 2);
          v40[0] = v26[4] * v26[8];
          v40[1] = v26[5] * v26[8];
          v40[2] = v26[6] * v26[8];
          v40[3] = FLOAT_1_0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v28 + 1136LL))(
            v28,
            *((unsigned int *)v27 + 6),
            0LL,
            v40,
            0,
            0,
            0);
LABEL_19:
          if ( !*((_DWORD *)*v11 + 64) )
          {
            v21 = CDrawGeometryInstruction::Create(*v20, v5, &v37);
            v3 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xCFDu);
              v6 = v37;
            }
            else
            {
              v6 = v37;
              v22 = CVisual::AddInstruction(*v11, v37);
              v3 = v22;
              if ( v22 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xCFFu);
            }
          }
          goto LABEL_23;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xCEBu);
LABEL_23:
        if ( v4 )
          CBaseObject::Release(v4);
        if ( v5 )
          CBaseObject::Release(v5);
        if ( v6 )
          CBaseObject::Release(v6);
        return v3;
      }
      v34 = 3263;
    }
LABEL_54:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v34);
    return v3;
  }
  v7 = (CVisual *)*((_QWORD *)this + 39);
  if ( v7 )
  {
    inserted = CVisual::ClearInstructions(v7);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v34 = 3335;
      goto LABEL_54;
    }
  }
  return v3;
}
