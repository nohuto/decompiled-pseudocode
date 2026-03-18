/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x18005CE68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x180046D40 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180048180 (-Release@CResource@@UEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r10
  CResource *ResourceWithoutType; // r14
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(CAnimation *); // rbp
  char HasEnded; // al
  __int64 v11; // rdx
  char (__fastcall *v12)(CAnimation *, struct FRAME_TIME_INFO *); // rbp
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 (__fastcall *v15)(CResource *); // rbx
  __int64 v17; // rax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      v8 = *((_QWORD *)this + 6);
      while ( *(CResource **)(v8 + 16LL * v7) != ResourceWithoutType
           || *(_DWORD *)(v8 + 16LL * v7 + 8) != *(_DWORD *)(v5 + 12) )
      {
        if ( ++v7 >= *((_DWORD *)this + 18) )
          return v4;
      }
      v9 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)this + 104LL);
      if ( v9 == CAnimation::HasEnded )
        HasEnded = CAnimation::HasEnded(this);
      else
        HasEnded = v9(this);
      if ( !HasEnded )
      {
        v12 = (char (__fastcall *)(CAnimation *, struct FRAME_TIME_INFO *))**((_QWORD **)this + 5);
        if ( v12 == CAnimation::UpdateAnimateValues )
          CAnimation::UpdateAnimateValues((CBaseAnimation *)((char *)this + 40), 0LL);
        else
          v12((CBaseAnimation *)((char *)this + 40), 0LL);
      }
      if ( *((_DWORD *)this + 18) )
      {
        v13 = *((_DWORD *)this + 18);
        if ( v7 >= v13 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v14 = *((_QWORD *)this + 6);
          if ( v7 < v13 - 1 )
          {
            do
            {
              v11 = v7 + 1;
              v17 = 2LL * v7;
              v7 = v11;
              *(_OWORD *)(v14 + 8 * v17) = *(_OWORD *)(v14 + 16 * v11);
            }
            while ( (unsigned int)v11 < *((_DWORD *)this + 18) - 1 );
          }
          --*((_DWORD *)this + 18);
        }
        v15 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)ResourceWithoutType + 16LL);
        if ( v15 == CResource::Release )
          CResource::Release(ResourceWithoutType);
        else
          ((void (__fastcall *)(CResource *, __int64, __int64))v15)(ResourceWithoutType, v11, v14);
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
