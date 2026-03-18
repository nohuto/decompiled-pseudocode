/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800912BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002E650 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180092464 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800924F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  int v5; // r14d
  CBitmapOfDeviceBitmaps *ResourceWithoutType; // rax
  _BOOL8 (__fastcall *v11)(__int64, int); // rdi
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 (__fastcall *v15)(CBitmapOfDeviceBitmaps *); // rsi
  int v17; // eax
  int v18; // edi
  CBitmapOfDeviceBitmaps *v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v19 = ResourceWithoutType;
      if ( !ResourceWithoutType )
        break;
      v11 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( !(v11 == CCompositionSurfaceBitmap::IsOfType
           ? CCompositionSurfaceBitmap::IsOfType((__int64)ResourceWithoutType, 87)
           : v11((__int64)ResourceWithoutType, 87)) )
        break;
      v13 = *((_DWORD *)this + 42);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v18 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v4 = -2147024362;
LABEL_22:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC4u);
        goto LABEL_13;
      }
      v4 = 0;
      if ( v14 > *((_DWORD *)this + 41) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 144, 8, 1, &v19);
        v18 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        v4 = v18;
        if ( v18 < 0 )
          goto LABEL_22;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v13) = v19;
        *((_DWORD *)this + 42) = v14;
      }
      v15 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v19 + 8LL);
      if ( v15 == CBitmapOfDeviceBitmaps::AddRef )
        CBitmapOfDeviceBitmaps::AddRef(v19);
      else
        v15(v19);
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_12;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xBCu);
    goto LABEL_24;
  }
LABEL_12:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_13:
  if ( v4 < 0 )
LABEL_24:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  return (unsigned int)v4;
}
