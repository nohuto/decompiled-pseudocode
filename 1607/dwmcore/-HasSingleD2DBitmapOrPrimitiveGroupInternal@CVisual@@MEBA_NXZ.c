/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180051150
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18000A3B0 (-IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004DA60 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E820 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180093CF0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AD870 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al
  __int64 v7; // rcx
  char (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  __int64 v10; // rcx
  bool (__fastcall *v11)(__int64, int); // rax
  char v12; // al
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  char v15; // al

  v2 = 0;
  v3 = *((_QWORD *)this + 38);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL);
    if ( (char *)v4 == (char *)CRenderData::IsOfType )
    {
      v5 = CRenderData::IsOfType(v3, 97);
    }
    else if ( v4 == CPrimitiveGroupLayerClip::IsOfType )
    {
      v5 = CPrimitiveGroupLayerClip::IsOfType(v3, 97LL);
    }
    else if ( (char *)v4 == (char *)CPrimitiveGroup::IsOfType )
    {
      v5 = CPrimitiveGroup::IsOfType(v3, 97);
    }
    else if ( v4 == CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(v3, 97LL);
    }
    else if ( (char *)v4 == (char *)CHwndBitmap::IsOfType )
    {
      v5 = CHwndBitmap::IsOfType(v3, 97);
    }
    else
    {
      v5 = v4(v3, 97LL);
    }
    if ( v5 )
      return 1;
    v7 = *((_QWORD *)this + 38);
    if ( v7 )
    {
      v8 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
      if ( (char *)v8 == (char *)CRenderData::IsOfType )
      {
        v9 = CRenderData::IsOfType(v7, 92);
      }
      else if ( (char *)v8 == (char *)CCompositionSurfaceBitmap::IsOfType )
      {
        v9 = CCompositionSurfaceBitmap::IsOfType(v7, 92LL);
      }
      else
      {
        v9 = v8 == CHwndBitmap::IsOfType ? CHwndBitmap::IsOfType(v7, 92) : v8(v7, 92);
      }
      if ( v9 )
        return 1;
    }
    v10 = *((_QWORD *)this + 38);
    if ( v10
      && ((v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 48LL), v11 != CRenderData::IsOfType)
        ? ((char *)v11 != (char *)CHwndBitmap::IsOfType
         ? (v12 = v11(v10, 100))
         : (v12 = CHwndBitmap::IsOfType(v10, 100)))
        : (v12 = CRenderData::IsOfType(v10, 100)),
          v12) )
    {
      return 1;
    }
    else
    {
      v13 = *((_QWORD *)this + 38);
      if ( v13 )
      {
        v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL);
        if ( (char *)v14 == (char *)CRenderData::IsOfType )
        {
          v15 = CRenderData::IsOfType(v13, 35);
        }
        else if ( (char *)v14 == (char *)CHwndBitmap::IsOfType )
        {
          v15 = CHwndBitmap::IsOfType(v13, 35);
        }
        else
        {
          v15 = v14(v13, 35LL);
        }
        if ( v15 )
          return *(_BYTE *)(*((_QWORD *)this + 38) + 193LL);
      }
    }
  }
  return v2;
}
