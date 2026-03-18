/*
 * XREFs of ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180099BD0
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800992FC (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ??1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ @ 0x1800994D4 (--1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180099AE4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180152390 (-NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800901E0 (-RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180090270 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801529A8 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::Reset(CCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rsi
  CBitmapRealization *v6; // rdi
  const struct IDeviceResourceNotify *v7; // rdx
  CBitmapRealization *v8; // rcx
  __int64 (__fastcall *v9)(CBitmapRealization *, const struct IDeviceResourceNotify *); // rax
  __int64 (__fastcall *v10)(CBitmapRealization *); // rax

  if ( *((_BYTE *)this + 172) )
    CCompositionSurfaceInfo::CBindInfo::UnpinResources(this);
  if ( *((_DWORD *)this + 14) )
  {
    v4 = *((unsigned int *)this + 14);
    v5 = 0LL;
    do
    {
      v6 = *(CBitmapRealization **)(v5 + *((_QWORD *)this + 4));
      if ( *(_QWORD *)this )
        v7 = (const struct IDeviceResourceNotify *)(*(_QWORD *)this + 16LL);
      else
        v7 = 0LL;
      v8 = (CBitmapRealization *)((char *)v6 + 120);
      v9 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct IDeviceResourceNotify *))(*((_QWORD *)v6 + 15)
                                                                                                + 32LL);
      if ( v9 == CBitmapRealization::RemoveResourceNotifier )
        CBitmapRealization::RemoveResourceNotifier(v8, v7);
      else
        v9(v8, v7);
      v10 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v6 + 16LL);
      if ( v10 == CBitmapRealization::Release )
        CBitmapRealization::Release(v6);
      else
        v10(v6);
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 32, 8LL);
  v2 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 9) = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_QWORD *)this + 16) = g_luidZero;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 173) = 0;
  *((_DWORD *)this + 22) = 2;
  *((_BYTE *)this + 148) = 0;
}
