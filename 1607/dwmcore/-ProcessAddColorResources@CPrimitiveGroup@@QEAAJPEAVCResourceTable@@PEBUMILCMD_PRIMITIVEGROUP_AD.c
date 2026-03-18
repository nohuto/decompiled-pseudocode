/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18000F0B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C614 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  unsigned int i; // esi
  struct CResource *ResourceWithoutType; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v15; // eax
  struct CResource *v16; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v16 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            99LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x10Cu);
      goto LABEL_19;
    }
    v11 = CResource::RegisterNotifier(this, v16);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x114u);
      goto LABEL_10;
    }
    v12 = *((_DWORD *)this + 78);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v4 = 0;
      if ( v13 <= *((_DWORD *)this + 77) )
      {
        *(_QWORD *)(*((_QWORD *)this + 36) + 8LL * v12) = v16;
        *((_DWORD *)this + 78) = v13;
        goto LABEL_8;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 288, 8LL, 1LL, &v16);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x116u);
      CResource::UnRegisterNotifierInternal(this, v16);
      goto LABEL_10;
    }
LABEL_8:
    ++a4;
  }
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_10:
  if ( v4 < 0 )
LABEL_19:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v4;
}
