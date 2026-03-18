/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B01F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180039B30 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x18008DE90 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r9
  CResource *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(CResource *); // rax
  __int64 (__fastcall *v13)(CAnimation *, struct CBaseAnimation::AnimationBinding *); // rax
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1Eu);
    return v11;
  }
  *(_QWORD *)&v16 = ResourceWithoutType;
  v7 = (_QWORD *)((char *)this + 120);
  DWORD2(v16) = *(_DWORD *)(v5 + 12);
  v8 = *((unsigned int *)this + 36);
  v9 = v8 + 1;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_6;
  }
  if ( v9 > *((_DWORD *)this + 35) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 0x10u, 1, &v16);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
LABEL_6:
    if ( (v11 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x25u);
      return v11;
    }
    goto LABEL_7;
  }
  *(_OWORD *)(*v7 + 16 * v8) = v16;
  *((_DWORD *)this + 36) = v9;
LABEL_7:
  v12 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v6 + 8LL);
  if ( v12 == CResource::AddRef )
    CResource::AddRef(v6);
  else
    v12(v6);
  v13 = *(__int64 (__fastcall **)(CAnimation *, struct CBaseAnimation::AnimationBinding *))(*(_QWORD *)this + 112LL);
  if ( v13 == CAnimation::OnAddBinding )
    v14 = CAnimation::OnAddBinding(this, (struct CBaseAnimation::AnimationBinding *)&v16);
  else
    v14 = v13(this, (struct CBaseAnimation::AnimationBinding *)&v16);
  v11 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2Bu);
  return v11;
}
