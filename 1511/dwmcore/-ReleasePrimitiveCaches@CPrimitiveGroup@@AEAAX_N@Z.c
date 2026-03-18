/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800924F4
 * Callers:
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1800099D4 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x180009AE0 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800911E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800912BC (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x180091434 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180091E6C (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180091F38 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180127830 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180004140 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // r14
  __int64 (__fastcall *v10)(__int64, __int64 *, unsigned int, CCompositionSurfaceBitmap *); // rbp
  __int64 (__fastcall *v11)(CMILRefCountBase *); // rbp
  __int64 v12; // rbp
  __int64 v13; // rbx
  CDxHandleYUVBitmapRealization *v14; // r14
  unsigned int (__fastcall *v15)(CDxHandleYUVBitmapRealization *); // r15

  v2 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v12 = *((unsigned int *)this + 28);
    v13 = 0LL;
    do
    {
      v14 = *(CDxHandleYUVBitmapRealization **)(v13 + *((_QWORD *)this + 11));
      CD2DResource::RemoveResourceNotifier(
        (CDxHandleYUVBitmapRealization *)((char *)v14 + 16),
        (CPrimitiveGroup *)((char *)this + 40));
      v15 = *(unsigned int (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v14 + 16LL);
      if ( v15 == CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(v14);
      else
        v15(v14);
      v13 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 11, 8u);
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
  {
    v11 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v5 + 8LL);
    if ( v11 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(*((CMILRefCountBase **)this + 17));
    else
      v11(*((CMILRefCountBase **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)this + 8) = v6;
    if ( (v6 & 6) == 2
      && (*(unsigned int (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 96LL))(this, 5LL) )
    {
      v7 = *((_QWORD *)this + 3);
      if ( (v7 & 2) != 0 )
        v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v7) = v7 & 1;
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)v7;
        do
        {
          v9 = (__int64 *)CPtrArrayBase::operator[]((__int64 *)this + 3, v2);
          v10 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int, CCompositionSurfaceBitmap *))(*(_QWORD *)this + 64LL);
          if ( v10 == CResource::NotifyListenerOfChange )
            CResource::NotifyListenerOfChange((__int64)this, v9, 5u, 0LL);
          else
            v10((__int64)this, v9, 5u, 0LL);
          ++v2;
          --v8;
        }
        while ( v8 );
      }
    }
    (*(void (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 72LL))(this);
    *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  }
}
