/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002988C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029B30 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015764 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AE4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x180028188 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18003436C (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18003FE74 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CSecondaryWindowRepresentation **this)
{
  unsigned int v2; // ebx
  CBaseObject *v3; // rsi
  bool ShouldFreezeAnimationCVI; // al
  __int64 v6; // rcx
  struct CResource *v7; // rcx
  bool v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CResource *CVIForAnimation; // r12
  int v15; // eax
  CBaseObject *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct CRenderDataInstruction *v22; // [rsp+90h] [rbp+38h] BYREF
  struct CPopInstruction *v23; // [rsp+98h] [rbp+40h] BYREF
  struct CRenderDataInstruction *v24; // [rsp+A0h] [rbp+48h] BYREF
  struct CRenderDataInstruction *v25; // [rsp+A8h] [rbp+50h] BYREF

  v2 = 0;
  v25 = 0LL;
  v3 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !*((_DWORD *)this + 64) )
  {
    ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)this);
    v7 = *(struct CResource **)(v6 + 328);
    v8 = ShouldFreezeAnimationCVI;
    v24 = 0LL;
    v9 = CPushTransformInstruction::Create(v7, &v24);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x27Fu);
    }
    else
    {
      v10 = CVisual::AddInstruction((CVisual *)this, v24);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x280u);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[42] + 2) + 1096LL))(
                *((_QWORD *)this[42] + 2),
                *((unsigned int *)this[42] + 6));
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x28Cu);
        }
        else
        {
          v12 = CPushTransformInstruction::Create(this[42], &v22);
          v2 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x28Eu);
          }
          else
          {
            v13 = CVisual::AddInstruction((CVisual *)this, v22);
            v2 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x28Fu);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(this[40], v8);
              v15 = CDrawBitmapInstruction::Create(CVIForAnimation, &v25);
              v16 = v25;
              v2 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x294u);
              }
              else
              {
                v17 = CVisual::AddInstruction((CVisual *)this, v25);
                v2 = v17;
                if ( v17 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x295u);
                }
                else
                {
                  v18 = CPopInstruction::Create(&v23);
                  v2 = v18;
                  if ( v18 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x298u);
                    v3 = v23;
                  }
                  else
                  {
                    v3 = v23;
                    v19 = CVisual::AddInstruction((CVisual *)this, v23);
                    v2 = v19;
                    if ( v19 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x299u);
                    }
                    else if ( v24 )
                    {
                      v23 = 0LL;
                      v20 = CPopInstruction::Create(&v23);
                      v2 = v20;
                      if ( v20 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x29Eu);
                      }
                      else
                      {
                        v21 = CVisual::AddInstruction((CVisual *)this, v23);
                        v2 = v21;
                        if ( v21 < 0 )
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x29Fu);
                      }
                    }
                  }
                }
              }
              if ( CVIForAnimation )
                CBaseObject::Release(CVIForAnimation);
              if ( v16 )
                CBaseObject::Release(v16);
            }
          }
          if ( v22 )
            CBaseObject::Release(v22);
          if ( v3 )
            CBaseObject::Release(v3);
        }
      }
    }
  }
  return v2;
}
