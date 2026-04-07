/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800387B4
 * Callers:
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180004080 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000414C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800388A0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180038D60 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180088FE8 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008969C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012308 (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037AD8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800891DC (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EnsureResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_BYTE *)this + 959) )
    goto LABEL_8;
  if ( !*((_QWORD *)this + 71) )
  {
    v4 = CResource::Create(0x34u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 71);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 983;
      goto LABEL_21;
    }
  }
  if ( !*((_QWORD *)this + 72) )
  {
    v4 = CCachedVisualImageBrushResource::Create(
           (__int64)this,
           *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
           (CBaseObject **)this + 72);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 988;
      goto LABEL_21;
    }
  }
  if ( !*((_BYTE *)this + 960) )
  {
    if ( *((_BYTE *)this + 968) )
    {
      v4 = CAnimatedTransitionVisual::Ensure3DResources(this);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 995;
        goto LABEL_21;
      }
    }
    else
    {
      v1 = 0;
      if ( !*((_QWORD *)this + 39) )
      {
        v5 = CResource::Create(0x3Bu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 39);
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x427u);
      }
      if ( (v1 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x3E7u);
        return v1;
      }
    }
LABEL_8:
    if ( !*((_BYTE *)this + 960) )
      return v1;
  }
  v4 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 1007;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, v6);
  }
  return v1;
}
