/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C6E8
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C654 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015764 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AE4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18003FE74 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  int v4; // eax
  int v5; // eax
  CVisual *v6; // rbp
  int v7; // eax
  struct CResource *v8; // rcx
  int v9; // eax
  CBaseObject *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CRenderDataInstruction *v15; // [rsp+60h] [rbp+8h] BYREF
  struct CPopInstruction *v16; // [rsp+68h] [rbp+10h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !*((_DWORD *)this + 66) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 38) + 16LL) + 1096LL))(
           *(_QWORD *)(*((_QWORD *)this + 38) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 38) + 24LL));
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = CPushTransformInstruction::Create(*((struct CResource **)this + 38), &v15);
      v1 = v5;
      if ( v5 >= 0 )
      {
        v6 = (CAnimatedTransitionVisual *)((char *)this + 8);
        v7 = CVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v15);
        v1 = v7;
        if ( v7 >= 0 )
        {
          v8 = (struct CResource *)*((_QWORD *)this + 73);
          if ( !v8 )
            v8 = (struct CResource *)*((_QWORD *)this + 71);
          v9 = CDrawBitmapInstruction::Create(v8, &v17);
          v10 = v17;
          v1 = v9;
          if ( v9 >= 0 )
          {
            v11 = CVisual::AddInstruction(v6, v17);
            v1 = v11;
            if ( v11 >= 0 )
            {
              v12 = CPopInstruction::Create(&v16);
              v1 = v12;
              if ( v12 >= 0 )
              {
                v2 = v16;
                v13 = CVisual::AddInstruction(v6, v16);
                v1 = v13;
                if ( v13 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x676u);
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x675u);
                v2 = v16;
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x672u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x671u);
          }
          if ( v10 )
            CBaseObject::Release(v10);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x66Fu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x66Eu);
      }
      if ( v15 )
        CBaseObject::Release(v15);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x66Du);
    }
  }
  return v1;
}
