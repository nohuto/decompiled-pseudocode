/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC
 * Callers:
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18000F0B8 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x18000F1D4 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18004C5D8 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CF6C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004D048 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18004D18C (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004DACC (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180144E50 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18002F680 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800A2570 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  __int64 v2; // rdi
  CMILRefCountBase *v5; // rcx
  unsigned int v6; // eax
  unsigned int Count; // eax
  __int64 v8; // rsi
  __int64 v9; // rax
  void (*v10)(void); // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  CMILCOMBase *v13; // r14
  __int64 (__fastcall *v14)(CMILCOMBase *); // rax

  v2 = 0LL;
  if ( *((_DWORD *)this + 48) )
  {
    v11 = 0LL;
    v12 = *((unsigned int *)this + 48);
    do
    {
      v13 = *(CMILCOMBase **)(v11 + *((_QWORD *)this + 21));
      CD2DResource::RemoveResourceNotifier((CMILCOMBase *)((char *)v13 + 16), (CPrimitiveGroup *)((char *)this + 112));
      v14 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v13 + 16LL);
      if ( v14 == CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(v13);
      else
        v14(v13);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 168, 8LL);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 27);
  if ( v5 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v10 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v5);
    else
      v10();
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)this + 8) = v6;
    if ( (v6 & 6) == 2 )
    {
      if ( (*(unsigned int (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 104LL))(this, 5LL) )
      {
        Count = CPtrArrayBase::GetCount((CPrimitiveGroup *)((char *)this + 24));
        if ( Count )
        {
          v8 = Count;
          do
          {
            v9 = CPtrArrayBase::operator[]((char *)this + 24, v2);
            if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL) == CResource::NotifyListenerOfChange )
              CResource::NotifyListenerOfChange(this, v9, 5LL, 0LL);
            else
              (*(void (__fastcall **)(CPrimitiveGroup *, __int64, __int64, _QWORD))(*(_QWORD *)this + 64LL))(
                this,
                v9,
                5LL,
                0LL);
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
