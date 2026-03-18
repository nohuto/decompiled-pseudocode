/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B02F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800396B0 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x18008DDD0 (-Release@CResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r9
  CResource *ResourceWithoutType; // r14
  unsigned int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 (__fastcall *v10)(CAnimation *); // rax
  char HasEnded; // al
  __int64 v12; // rdx
  CAnimation *v13; // rcx
  char (__fastcall *v14)(CAnimation *, struct FRAME_TIME_INFO *); // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 (__fastcall *v17)(CResource *); // rax
  __int64 v19; // rax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v7 = *((_DWORD *)this + 36);
    v8 = 0;
    if ( v7 )
    {
      v9 = *((_QWORD *)this + 15);
      while ( *(CResource **)(v9 + 16LL * v8) != ResourceWithoutType
           || *(_DWORD *)(v9 + 16LL * v8 + 8) != *(_DWORD *)(v5 + 12) )
      {
        if ( ++v8 >= v7 )
          return v4;
      }
      v10 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)this + 120LL);
      if ( v10 == CAnimation::HasEnded )
        HasEnded = CAnimation::HasEnded(this);
      else
        HasEnded = v10(this);
      if ( !HasEnded )
      {
        v13 = (CBaseAnimation *)((char *)this + 112);
        v14 = (char (__fastcall *)(CAnimation *, struct FRAME_TIME_INFO *))**((_QWORD **)this + 14);
        if ( v14 == CAnimation::UpdateAnimateValues )
          CAnimation::UpdateAnimateValues(v13, 0LL);
        else
          v14(v13, 0LL);
      }
      if ( *((_DWORD *)this + 36) )
      {
        v15 = *((_DWORD *)this + 36);
        if ( v8 >= v15 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v16 = *((_QWORD *)this + 15);
          if ( v8 < v15 - 1 )
          {
            do
            {
              v12 = v8 + 1;
              v19 = 2LL * v8;
              v8 = v12;
              *(_OWORD *)(v16 + 8 * v19) = *(_OWORD *)(v16 + 16 * v12);
            }
            while ( (unsigned int)v12 < *((_DWORD *)this + 36) - 1 );
          }
          --*((_DWORD *)this + 36);
        }
        v17 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)ResourceWithoutType + 16LL);
        if ( v17 == CResource::Release )
          CResource::Release(ResourceWithoutType);
        else
          ((void (__fastcall *)(CResource *, __int64, __int64))v17)(ResourceWithoutType, v12, v16);
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
