/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800137B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x18007CE30 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  char *v1; // rdi
  __int64 v2; // rbx
  unsigned int v4; // edx
  CScratchRenderTargetBitmap *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 472;
  v2 = 0LL;
  if ( *((_DWORD *)this + 124) )
  {
    do
    {
      v5 = *(CScratchRenderTargetBitmap **)(*(_QWORD *)v1 + 8 * v2);
      *((_BYTE *)v5 + 264) = 0;
      CScratchRenderTargetBitmap::Release(v5);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v1 + 6) );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v1, 8LL);
  CD2DContext::ReleaseResourcesForDisplayChange(this, v4);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 66))(
         *((_QWORD *)this + 66),
         &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
         &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 136LL))(v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
