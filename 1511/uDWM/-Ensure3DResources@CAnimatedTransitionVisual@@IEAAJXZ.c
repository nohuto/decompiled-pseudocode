/*
 * XREFs of ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008CD4C
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D4CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 34)
    || (v3 = CResource::Create(0x1Cu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 34),
        v1 = v3,
        v3 >= 0) )
  {
    if ( *((_QWORD *)this + 35)
      || (v4 = CResource::Create(0x1Cu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 35),
          v1 = v4,
          v4 >= 0) )
    {
      if ( *((_QWORD *)this + 36)
        || (v5 = CResource::Create(0x1Eu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 36),
            v1 = v5,
            v5 >= 0) )
      {
        if ( *((_QWORD *)this + 37)
          || (v6 = CResource::Create(8u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 37),
              v1 = v6,
              v6 >= 0) )
        {
          if ( !*((_QWORD *)this + 38) )
          {
            v7 = CResource::Create(0x3Cu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 38);
            v1 = v7;
            if ( v7 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x646u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x641u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x63Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x637u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x632u);
  }
  return v1;
}
