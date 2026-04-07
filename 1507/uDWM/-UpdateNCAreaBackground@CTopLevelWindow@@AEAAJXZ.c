/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800213C0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180015C90 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18001C9C0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001F6C0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v3; // esi
  int updated; // eax
  struct CVisual **v5; // rdi
  int v6; // eax
  int inserted; // eax
  CVisual *v8; // rcx
  int v9; // eax
  _DWORD *v10; // rax
  float *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  CResource *v15; // rcx
  float *v16; // rax
  CResource *v17; // rcx
  int v18; // eax
  volatile signed __int32 *v19; // r15
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CVisual *v23; // rcx
  int v24; // eax
  __int128 v26; // [rsp+30h] [rbp-99h]
  __int128 v27; // [rsp+30h] [rbp-99h]
  struct CRenderDataInstruction *v28; // [rsp+40h] [rbp-89h] BYREF
  struct CRenderDataInstruction *v29; // [rsp+50h] [rbp-79h] BYREF
  struct _MARGINS v30; // [rsp+58h] [rbp-71h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-61h] BYREF
  double v32; // [rsp+70h] [rbp-59h]
  __int128 v33; // [rsp+78h] [rbp-51h]
  int v34; // [rsp+88h] [rbp-41h]
  __int64 v35; // [rsp+8Ch] [rbp-3Dh]
  _DWORD v36[2]; // [rsp+98h] [rbp-31h] BYREF
  double v37; // [rsp+A0h] [rbp-29h]
  __int128 v38; // [rsp+A8h] [rbp-21h]
  int v39; // [rsp+B8h] [rbp-11h]
  __int64 v40; // [rsp+BCh] [rbp-Dh]

  v1 = *((_QWORD *)this + 93);
  v29 = 0LL;
  v3 = 0;
  v28 = 0LL;
  if ( (*(_BYTE *)(v1 + 552) & 8) != 0
    && (*((_DWORD *)this + 157) || *((_DWORD *)this + 159) || *((_DWORD *)this + 158) || *((_DWORD *)this + 160)) )
  {
    updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
    v3 = updated;
    if ( updated >= 0 )
    {
      v5 = (struct CVisual **)((char *)this + 304);
      if ( !*((_QWORD *)this + 38) )
      {
        v6 = CCanvas::Create(
               *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
               (struct CCanvas **)this + 38);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xDF7u);
          return v3;
        }
        inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 35) + 32LL), *v5, 0LL, 1, 1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xDFAu);
          return v3;
        }
        v8 = *v5;
        v30 = 0LL;
        CVisual::SetInsetFromParent(v8, &v30);
      }
      if ( !*((_QWORD *)this + 96) )
        CResource::Create(0x43u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 96);
      v9 = CTopLevelWindow::UpdateColorizationColor(this);
      v3 = v9;
      if ( v9 >= 0 )
      {
        v10 = (_DWORD *)*((_QWORD *)this + 93);
        if ( v10[20] == 0x7FFFFFFF && v10[21] == 0x7FFFFFFF && v10[22] == 0x7FFFFFFF && v10[23] == 0x7FFFFFFF )
          v11 = (float *)*((_QWORD *)this + 75);
        else
          v11 = (float *)*((_QWORD *)this + 74);
        v12 = v11[8];
        HIDWORD(v26) = 1065353216;
        v13 = v12 * v11[5];
        v14 = v12 * v11[6];
        *(_QWORD *)((char *)&v26 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v13));
        *(float *)&v26 = v11[8] * v11[4];
        if ( 1.0 != *((float *)this + 180)
          || (float)(v11[8] * v11[4]) != *((float *)this + 177)
          || v13 != *((float *)this + 178)
          || v14 != *((float *)this + 179) )
        {
          v15 = (CResource *)*((_QWORD *)this + 96);
          v31[0] = 248;
          v31[1] = 0;
          v34 = 0;
          v32 = DOUBLE_1_0;
          v35 = 0LL;
          v33 = v26;
          CResource::Send(v15, v31, 0x2Cu);
          *(_OWORD *)((char *)this + 708) = v26;
        }
        if ( !*((_QWORD *)this + 97) )
          CResource::Create(0x43u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 97);
        v16 = (float *)*((_QWORD *)this + 75);
        HIDWORD(v27) = 1065353216;
        *(float *)&v27 = v16[8] * v16[4];
        *((float *)&v27 + 1) = v16[8] * v16[5];
        *((float *)&v27 + 2) = v16[8] * v16[6];
        if ( 1.0 != *((float *)this + 184)
          || (float)(v16[8] * v16[4]) != *((float *)this + 181)
          || (float)(v16[8] * v16[5]) != *((float *)this + 182)
          || (float)(v16[8] * v16[6]) != *((float *)this + 183) )
        {
          v17 = (CResource *)*((_QWORD *)this + 97);
          v36[0] = 248;
          v36[1] = 0;
          v39 = 0;
          v37 = DOUBLE_1_0;
          v40 = 0LL;
          v38 = v27;
          CResource::Send(v17, v36, 0x2Cu);
          *(_OWORD *)((char *)this + 724) = v27;
        }
        if ( !*((_DWORD *)*v5 + 64) )
        {
          v18 = CDrawGeometryInstruction::Create(
                  *((struct CResource **)this + 96),
                  *((struct CResource **)this + 71),
                  &v29);
          v19 = (volatile signed __int32 *)v29;
          v3 = v18;
          if ( v18 >= 0 )
          {
            v20 = CDrawGeometryInstruction::Create(
                    *((struct CResource **)this + 97),
                    *((struct CResource **)this + 72),
                    &v28);
            v3 = v20;
            if ( v20 >= 0 )
            {
              v21 = CVisual::AddInstruction(*v5, (struct CRenderDataInstruction *)v19);
              v3 = v21;
              if ( v21 >= 0 )
              {
                v22 = CVisual::AddInstruction(*v5, v28);
                v3 = v22;
                if ( v22 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0xE50u);
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xE4Fu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xE4Cu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xE46u);
          }
          if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v29)(v29, 1LL);
          if ( v28 && _InterlockedExchangeAdd((volatile signed __int32 *)v28 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v28)(v28, 1LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xE0Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xDF0u);
    }
  }
  else
  {
    v23 = (CVisual *)*((_QWORD *)this + 38);
    if ( v23 )
    {
      v24 = CVisual::ClearInstructions(v23);
      v3 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0xE5Au);
    }
  }
  return v3;
}
