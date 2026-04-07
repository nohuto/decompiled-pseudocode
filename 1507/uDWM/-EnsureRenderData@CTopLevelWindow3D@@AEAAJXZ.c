/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180026E10
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180027100 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180012E7C (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180014D24 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800256A0 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x180033B7C (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800353B0 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CSecondaryWindowRepresentation **this)
{
  unsigned int v2; // ebx
  struct CPopInstruction *v3; // rsi
  bool ShouldFreezeAnimationCVI; // al
  __int64 v6; // rcx
  struct CResource *v7; // rcx
  bool v8; // r14
  int v9; // eax
  int v10; // eax
  CSecondaryWindowRepresentation *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  int v15; // ecx
  float v16; // xmm2_4
  float v17; // xmm1_4
  CResource *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct CResource *CVIForAnimation; // r12
  int v23; // eax
  struct CPopInstruction *v24; // r14
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct CPopInstruction *v30; // [rsp+38h] [rbp-19h] BYREF
  struct CRenderDataInstruction *v31; // [rsp+40h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v32; // [rsp+48h] [rbp-9h] BYREF
  struct CPopInstruction *v33; // [rsp+50h] [rbp-1h] BYREF
  int v34; // [rsp+58h] [rbp+7h]
  int v35; // [rsp+5Ch] [rbp+Bh]
  unsigned __int64 v36; // [rsp+60h] [rbp+Fh]
  int v37; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v38[4]; // [rsp+6Ch] [rbp+1Bh] BYREF
  double v39; // [rsp+70h] [rbp+1Fh]
  double v40; // [rsp+78h] [rbp+27h]

  v2 = 0;
  v30 = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  if ( !*((_DWORD *)this + 64) )
  {
    ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)this);
    v7 = *(struct CResource **)(v6 + 328);
    v8 = ShouldFreezeAnimationCVI;
    v32 = 0LL;
    v9 = CPushTransformInstruction::Create(v7, &v32);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x2D3u);
    }
    else
    {
      v10 = CVisual::AddInstruction((CVisual *)this, v32);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x2D4u);
      }
      else
      {
        v37 = 240;
        memset_0(v38, 0, 0x24uLL);
        v11 = this[40];
        v12 = *((_DWORD *)v11 + 22);
        v13 = *((_DWORD *)v11 + 20) - *((_DWORD *)v11 + 23);
        v35 = *((_DWORD *)v11 + 24);
        v36 = __PAIR64__(*((_DWORD *)v11 + 21) - *((_DWORD *)v11 + 25), v13);
        v14 = v13 - v12;
        if ( v14 < 0 )
          v14 = 0;
        v34 = v12;
        v15 = HIDWORD(v36) - v35;
        if ( HIDWORD(v36) - v35 < 0 )
          v15 = 0;
        if ( v14 <= 0 )
          v16 = FLOAT_0_1;
        else
          v16 = 1.0 / (float)v14;
        v39 = v16;
        if ( v15 <= 0 )
          v17 = FLOAT_0_1;
        else
          v17 = 1.0 / (float)v15;
        v18 = this[42];
        v40 = v17;
        v19 = CResource::Send(v18, &v37, 0x28u);
        v2 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x2DEu);
        }
        else
        {
          v20 = CPushTransformInstruction::Create(this[42], &v31);
          v2 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x2DFu);
          }
          else
          {
            v21 = CVisual::AddInstruction((CVisual *)this, v31);
            v2 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x2E0u);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(this[40], v8);
              v23 = CDrawBitmapInstruction::Create(CVIForAnimation, &v30);
              v24 = v30;
              v2 = v23;
              if ( v23 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x2E5u);
              }
              else
              {
                v25 = CVisual::AddInstruction((CVisual *)this, v30);
                v2 = v25;
                if ( v25 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x2E6u);
                }
                else
                {
                  v26 = CPopInstruction::Create(&v33);
                  v2 = v26;
                  if ( v26 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x2E9u);
                    v3 = v33;
                  }
                  else
                  {
                    v3 = v33;
                    v27 = CVisual::AddInstruction((CVisual *)this, v33);
                    v2 = v27;
                    if ( v27 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x2EAu);
                    }
                    else if ( v32 )
                    {
                      v30 = 0LL;
                      v28 = CPopInstruction::Create(&v30);
                      v2 = v28;
                      if ( v28 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x2EFu);
                      }
                      else
                      {
                        v29 = CVisual::AddInstruction((CVisual *)this, v30);
                        v2 = v29;
                        if ( v29 < 0 )
                          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x2F0u);
                      }
                    }
                  }
                }
              }
              if ( CVIForAnimation )
                CBaseObject::Release(CVIForAnimation);
              if ( v24 )
                CBaseObject::Release(v24);
            }
          }
          if ( v31 )
            CBaseObject::Release(v31);
          if ( v3 )
            CBaseObject::Release(v3);
        }
      }
    }
  }
  return v2;
}
