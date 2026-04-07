/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013968
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800135E0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014640 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    v6 = CResource::Create(10LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5E9u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 83) )
  {
    v7 = CResource::Create(29LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5EEu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 84) )
  {
    v8 = CResource::Create(34LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5F3u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v9 = CResource::Create(28LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5F8u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v10 = CResource::Create(33LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x5FDu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v11 = CResource::Create(24LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x602u);
      return v1;
    }
  }
  v4 = (struct CVisual **)((char *)this + 712);
  if ( !*((_QWORD *)this + 89) )
  {
    v12 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 3) + 16LL), (struct CVisual **)this + 89);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x607u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x60Fu);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x614u);
        goto LABEL_27;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x610u);
    }
LABEL_27:
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  return v1;
}
