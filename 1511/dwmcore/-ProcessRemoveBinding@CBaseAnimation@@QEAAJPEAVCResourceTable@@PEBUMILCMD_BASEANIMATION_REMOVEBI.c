/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800AB9D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x180083B60 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RemoveAt@?$DynArray@UAnimationBinding@CBaseAnimation@@$0A@@@QEAAJI@Z @ 0x1800ABB8C (-RemoveAt@-$DynArray@UAnimationBinding@CBaseAnimation@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  unsigned int v4; // ebx
  CResource *ResourceWithoutType; // rsi
  __int64 v6; // r10
  unsigned int v7; // ebp
  __int64 v8; // rdx
  bool (__fastcall *v9)(CAnimation *); // r14
  bool HasEnded; // al
  char (__fastcall *v11)(CAnimation *, struct FRAME_TIME_INFO *); // r15
  __int64 (__fastcall *v12)(CResource *); // rdi

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      v8 = *((_QWORD *)this + 6);
      while ( *(CResource **)(v8 + 16LL * v7) != ResourceWithoutType
           || *(_DWORD *)(v8 + 16LL * v7 + 8) != *(_DWORD *)(v6 + 12) )
      {
        if ( ++v7 >= *((_DWORD *)this + 18) )
          return v4;
      }
      v9 = *(bool (__fastcall **)(CAnimation *))(*(_QWORD *)this + 112LL);
      if ( v9 == CAnimation::HasEnded )
        HasEnded = CAnimation::HasEnded(this);
      else
        HasEnded = v9(this);
      if ( !HasEnded )
      {
        v11 = (char (__fastcall *)(CAnimation *, struct FRAME_TIME_INFO *))**((_QWORD **)this + 5);
        if ( v11 == CAnimation::UpdateAnimateValues )
          CAnimation::UpdateAnimateValues((CBaseAnimation *)((char *)this + 40), 0LL);
        else
          v11((CBaseAnimation *)((char *)this + 40), 0LL);
      }
      if ( *((_DWORD *)this + 18) )
      {
        DynArray<CBaseAnimation::AnimationBinding,0>::RemoveAt((char *)this + 48, v7);
        v12 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)ResourceWithoutType + 16LL);
        if ( v12 == CResource::Release )
          CResource::Release(ResourceWithoutType);
        else
          v12(ResourceWithoutType);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x46u);
  }
  return v4;
}
