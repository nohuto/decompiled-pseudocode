/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D688
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D5F4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800162DC (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180018388 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038EDC (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  struct CPopInstruction *v2; // rsi
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  CResource *v8; // rcx
  int v9; // eax
  int v10; // eax
  CVisual *v11; // r14
  int v12; // eax
  struct CResource *v13; // rcx
  int v14; // eax
  CBaseObject *v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct CRenderDataInstruction *v20; // [rsp+30h] [rbp-50h] BYREF
  struct CPopInstruction *v21; // [rsp+38h] [rbp-48h] BYREF
  struct CRenderDataInstruction *v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v24[4]; // [rsp+4Ch] [rbp-34h] BYREF
  double v25; // [rsp+50h] [rbp-30h]
  double v26; // [rsp+58h] [rbp-28h]

  v1 = 0;
  v2 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !*((_DWORD *)this + 66) )
  {
    v23 = 247;
    memset_0(v24, 0, 0x24uLL);
    v4 = FLOAT_0_1;
    v5 = (float)*((int *)this + 234);
    if ( v5 == 0.0 )
      v6 = FLOAT_0_1;
    else
      v6 = 1.0 / v5;
    v7 = (float)*((int *)this + 235);
    v25 = v6;
    if ( v7 != 0.0 )
      v4 = 1.0 / v7;
    v8 = (CResource *)*((_QWORD *)this + 38);
    v26 = v4;
    v9 = CResource::Send(v8, &v23, 0x28u);
    v1 = v9;
    if ( v9 >= 0 )
    {
      v10 = CPushTransformInstruction::Create(*((struct CResource **)this + 38), &v20);
      v1 = v10;
      if ( v10 >= 0 )
      {
        v11 = (CAnimatedTransitionVisual *)((char *)this + 8);
        v12 = CVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v20);
        v1 = v12;
        if ( v12 >= 0 )
        {
          v13 = (struct CResource *)*((_QWORD *)this + 73);
          if ( !v13 )
            v13 = (struct CResource *)*((_QWORD *)this + 71);
          v14 = CDrawBitmapInstruction::Create(v13, &v22);
          v15 = v22;
          v1 = v14;
          if ( v14 >= 0 )
          {
            v16 = CVisual::AddInstruction(v11, v22);
            v1 = v16;
            if ( v16 >= 0 )
            {
              v17 = CPopInstruction::Create(&v21);
              v1 = v17;
              if ( v17 >= 0 )
              {
                v2 = v21;
                v18 = CVisual::AddInstruction(v11, v21);
                v1 = v18;
                if ( v18 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x666u);
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x665u);
                v2 = v21;
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x662u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x661u);
          }
          if ( v15 )
            CBaseObject::Release(v15);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x65Fu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x65Eu);
      }
      if ( v20 )
        CBaseObject::Release(v20);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x65Du);
    }
  }
  return v1;
}
