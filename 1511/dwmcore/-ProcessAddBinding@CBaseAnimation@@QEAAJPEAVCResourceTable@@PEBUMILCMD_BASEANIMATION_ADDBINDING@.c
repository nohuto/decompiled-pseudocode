/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800AB8AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180083DE0 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r10
  CBitmapOfDeviceBitmaps *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(CBitmapOfDeviceBitmaps *); // rbx
  __int64 (__fastcall *v14)(CAnimation *, struct CBaseAnimation::AnimationBinding *); // rbx
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v12 = -2003303421;
    v17 = 30;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v17);
    return v12;
  }
  *(_QWORD *)&v18 = ResourceWithoutType;
  v7 = (_QWORD *)((char *)this + 48);
  DWORD2(v18) = *(_DWORD *)(v5 + 12);
  v8 = *((unsigned int *)this + 18);
  v9 = v8 + 1;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v12 = -2147024362;
    goto LABEL_18;
  }
  if ( v9 <= *((_DWORD *)this + 17) )
  {
    *(_OWORD *)(*v7 + 16 * v8) = v18;
    *((_DWORD *)this + 18) = v9;
    goto LABEL_7;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 16, 1, &v18);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  v12 = v11;
  if ( v11 < 0 )
  {
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x25u);
    return v12;
  }
LABEL_7:
  v13 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v6 + 8LL);
  if ( v13 == CBitmapOfDeviceBitmaps::AddRef )
    CBitmapOfDeviceBitmaps::AddRef(v6);
  else
    v13(v6);
  v14 = *(__int64 (__fastcall **)(CAnimation *, struct CBaseAnimation::AnimationBinding *))(*(_QWORD *)this + 104LL);
  if ( v14 == CAnimation::OnAddBinding )
    v15 = CAnimation::OnAddBinding(this, (struct CBaseAnimation::AnimationBinding *)&v18);
  else
    v15 = v14(this, (struct CBaseAnimation::AnimationBinding *)&v18);
  v12 = v15;
  if ( v15 < 0 )
  {
    v17 = 43;
    goto LABEL_20;
  }
  return v12;
}
