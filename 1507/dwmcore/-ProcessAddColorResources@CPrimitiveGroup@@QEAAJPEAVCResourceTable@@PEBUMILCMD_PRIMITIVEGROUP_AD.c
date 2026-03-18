/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18010C6FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18006E5D0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18006E6A8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  int v5; // ebp
  struct CResource *ResourceWithoutType; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // edi
  struct CResource *v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v17 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              85LL) )
      {
        break;
      }
      v11 = CResource::RegisterNotifier(this, v17);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xFCu);
        goto LABEL_13;
      }
      v12 = *((_DWORD *)this + 58);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v4 = -2147024362;
LABEL_17:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFEu);
        CResource::UnRegisterNotifierInternal(this, v17);
        goto LABEL_13;
      }
      v4 = 0;
      if ( v13 > *((_DWORD *)this + 57) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 208, 8u, 1, &v17);
        v15 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
        v4 = v15;
        if ( v15 < 0 )
          goto LABEL_17;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 26) + 8LL * v12) = v17;
        *((_DWORD *)this + 58) = v13;
      }
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_12;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF4u);
    goto LABEL_14;
  }
LABEL_12:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_13:
  if ( v4 < 0 )
LABEL_14:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v4;
}
