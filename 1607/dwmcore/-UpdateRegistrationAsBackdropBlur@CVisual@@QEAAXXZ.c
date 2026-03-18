/*
 * XREFs of ?UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ @ 0x180050A88
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004DA60 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E820 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180093CF0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AD870 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B2100 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z @ 0x18013C050 (-HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z.c)
 */

void __fastcall CVisual::UpdateRegistrationAsBackdropBlur(CVisual *this)
{
  char v1; // di
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  CVisual *v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *((_QWORD *)this + 38);
  LOBYTE(v10) = 0;
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL);
    if ( v4 == CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(v3, 81LL);
    }
    else if ( (char *)v4 == (char *)CPrimitiveGroup::IsOfType )
    {
      v5 = CPrimitiveGroup::IsOfType(v3, 81);
    }
    else if ( (char *)v4 == (char *)CRenderData::IsOfType )
    {
      v5 = CRenderData::IsOfType(v3, 81);
    }
    else
    {
      v5 = v4 == CPrimitiveGroupLayerClip::IsOfType ? CPrimitiveGroupLayerClip::IsOfType(v3, 81LL) : v4(v3, 81LL);
    }
    if ( v5 )
    {
      CEffectBrush::HasBackdropInput(*((CEffectBrush **)this + 38), (bool *)&v10);
      v1 = (char)v10;
    }
  }
  if ( v1 != ((*((_BYTE *)this + 154) & 0x20) != 0) )
  {
    v10 = this;
    if ( v1 )
    {
      v6 = *((_QWORD *)this + 2);
      v7 = *(_DWORD *)(v6 + 1024);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v8 > *(_DWORD *)(v6 + 1020) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 1000, 8LL, 1LL, &v10);
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v6 + 1000) + 8LL * v7) = v10;
        *(_DWORD *)(v6 + 1024) = v8;
      }
    }
    else
    {
      DynArray<CVisual *,0>::Remove(*((_QWORD *)this + 2) + 1000LL, &v10);
    }
    *((_BYTE *)this + 154) &= ~0x20u;
    *((_BYTE *)this + 154) |= 32 * (v1 & 1);
  }
}
