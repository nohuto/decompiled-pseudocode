/*
 * XREFs of ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006AC00
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180069564 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateInstructions(CVisual **this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // r14d
  CVisual *v8; // rcx
  __int64 v9; // r15
  int v10; // eax
  int v11; // eax
  CVisual *v12; // rcx
  int v13; // eax
  int v14; // eax
  struct CRenderDataInstruction *v16; // [rsp+68h] [rbp+10h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = CVisual::ClearInstructions((CVisual *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x495u);
    return v5;
  }
  v6 = CVisual::ClearInstructions(this[64]);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x496u);
    return v5;
  }
  v7 = 0;
  if ( !*((_DWORD *)this + 94) )
    return v5;
  while ( 1 )
  {
    v8 = this[44];
    v9 = 136LL * v7;
    if ( *((_BYTE *)v8 + v9 + 128) )
    {
      v10 = CDrawGeometryInstruction::Create(
              *(struct CResource **)((char *)v8 + v9 + 32),
              *(struct CResource **)((char *)v8 + v9 + 16),
              &v16);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x49Cu);
        v1 = v16;
        goto LABEL_24;
      }
      v1 = v16;
      v11 = CVisual::AddInstruction((CVisual *)this, v16);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x49Du);
        goto LABEL_24;
      }
      if ( v1 )
      {
        CBaseObject::Release(v1);
        v1 = 0LL;
        v16 = 0LL;
      }
    }
    v12 = this[44];
    if ( !*((_BYTE *)v12 + v9 + 129) )
      goto LABEL_17;
    v13 = CDrawGeometryInstruction::Create(
            *(struct CResource **)((char *)v12 + v9 + 72),
            *(struct CResource **)((char *)v12 + v9 + 56),
            &v17);
    v5 = v13;
    if ( v13 < 0 )
      break;
    v2 = v17;
    v14 = CVisual::AddInstruction((CVisual *)this, v17);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x4A4u);
      goto LABEL_24;
    }
    if ( v2 )
    {
      CBaseObject::Release(v2);
      v2 = 0LL;
      v17 = 0LL;
    }
LABEL_17:
    if ( ++v7 >= *((_DWORD *)this + 94) )
      goto LABEL_24;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x4A3u);
  v2 = v17;
LABEL_24:
  if ( v1 )
    CBaseObject::Release(v1);
  if ( v2 )
    CBaseObject::Release(v2);
  return v5;
}
