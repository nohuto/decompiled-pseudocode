/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037AD8
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037730 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800387B4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rsi
  struct CVisual **v4; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int inserted; // eax
  int v15; // eax

  v1 = 0;
  v2 = 0LL;
  if ( !*((_QWORD *)this + 82) )
  {
    v6 = CResource::Create(8u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 82);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x5DDu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 83) )
  {
    v7 = CResource::Create(0x38u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 83);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x5E2u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 84) )
  {
    v8 = CResource::Create(0x37u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 84);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x5E7u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v9 = CResource::Create(0x39u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 85);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x5ECu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v10 = CResource::Create(0x36u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 86);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x5F1u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v11 = CResource::Create(0x3Fu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 87);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x5F6u);
      return v1;
    }
  }
  v4 = (struct CVisual **)((char *)this + 712);
  if ( !*((_QWORD *)this + 89) )
  {
    v12 = CVisual::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject ***)this + 89);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x5FBu);
      return v1;
    }
    if ( !*((_BYTE *)this + 959) )
      goto LABEL_26;
    v2 = (volatile signed __int32 *)**((_QWORD **)this + 7);
    if ( !v2 )
      goto LABEL_26;
    _InterlockedIncrement(v2 + 2);
    v13 = VisualCollection::Remove((CAnimatedTransitionVisual *)((char *)this + 40), (struct CVisual *)v2);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x603u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v4 + 32), (struct CVisual *)v2, 0LL, 0, 1);
      v1 = inserted;
      if ( inserted >= 0 )
      {
LABEL_26:
        v15 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), *v4, 0LL, 0, 1);
        v1 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x608u);
        goto LABEL_27;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x604u);
    }
LABEL_27:
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  return v1;
}
