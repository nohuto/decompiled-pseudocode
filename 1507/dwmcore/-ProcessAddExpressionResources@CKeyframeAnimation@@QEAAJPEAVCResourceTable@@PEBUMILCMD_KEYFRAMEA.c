/*
 * XREFs of ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x180110C20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessAddExpressionResources(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES *a3,
        unsigned int *a4)
{
  unsigned int v4; // r12d
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // eax
  struct CResource *v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v10 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              89LL) )
      {
        break;
      }
      v18 = v10;
      v11 = *((_DWORD *)this + 48);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v15 = -2147024362;
LABEL_16:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x181u);
        return v15;
      }
      if ( v12 > *((_DWORD *)this + 47) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 168, 8u, 1, &v18);
        v14 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        v15 = v14;
        if ( v14 < 0 )
          goto LABEL_16;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * v11) = v18;
        *((_DWORD *)this + 48) = v12;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v18 + 8LL))(v18);
      v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v18 + 96LL))(v18);
      if ( *((_DWORD *)this + 62) > v16 )
        v16 = *((_DWORD *)this + 62);
      ++a4;
      ++v4;
      *((_DWORD *)this + 62) = v16;
      if ( v4 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v15 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x17Du);
  }
  else
  {
    return 0;
  }
  return v15;
}
