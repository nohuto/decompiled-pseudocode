/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18006E6A8
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18006E46C (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18006E528 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18006EE58 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18006EF34 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18006F05C (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x18010C6D0 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18010C6FC (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x18010C8CC (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180015F00 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180016050 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x18001B1C4 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int Count; // eax
  __int64 v8; // rbx
  _DWORD *v9; // r15
  __int64 (__fastcall *v10)(__int64, _DWORD *, unsigned int, CPrimitiveGroup *); // rbp
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
    if ( (v6 & 6) == 2 )
    {
      if ( (*(unsigned int (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 88LL))(this, 5LL) )
      {
        Count = CPtrArrayBase::GetCount((CPrimitiveGroup *)((char *)this + 24));
        if ( Count )
        {
          v8 = Count;
          do
          {
            v9 = (_DWORD *)CPtrArrayBase::operator[]((__int64 *)this + 3, v2);
            v10 = *(__int64 (__fastcall **)(__int64, _DWORD *, unsigned int, CPrimitiveGroup *))(*(_QWORD *)this + 64LL);
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
    }
    (*(void (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 72LL))(this);
    *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  }
}
