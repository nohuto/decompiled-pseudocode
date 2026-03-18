/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004D048
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C688 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180093CF0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  unsigned int i; // esi
  CBitmapOfDeviceBitmaps *ResourceWithoutType; // rax
  CBitmapOfDeviceBitmaps *v11; // rcx
  __int64 (__fastcall *v12)(CBitmapOfDeviceBitmaps *, __int64); // rax
  char v13; // al
  unsigned int v14; // eax
  unsigned int v15; // edx
  void (*v16)(void); // rax
  int v18; // eax
  CBitmapOfDeviceBitmaps *v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v19 = ResourceWithoutType;
    v11 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || ((v12 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL),
           (char *)v12 != (char *)CCompositionSurfaceBitmap::IsOfType)
        ? (v13 = v12(v11, 92LL))
        : (v13 = CCompositionSurfaceBitmap::IsOfType(v11, 92LL)),
          !v13) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xD5u);
      goto LABEL_24;
    }
    v14 = *((_DWORD *)this + 62);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v4 = 0;
      if ( v15 <= *((_DWORD *)this + 61) )
      {
        *(_QWORD *)(*((_QWORD *)this + 28) + 8LL * v14) = v19;
        *((_DWORD *)this + 62) = v15;
        goto LABEL_9;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 224, 8LL, 1LL, &v19);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xDDu);
      goto LABEL_13;
    }
LABEL_9:
    v16 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
    if ( (char *)v16 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v19);
    else
      v16();
    ++a4;
  }
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_13:
  if ( v4 < 0 )
LABEL_24:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  return (unsigned int)v4;
}
