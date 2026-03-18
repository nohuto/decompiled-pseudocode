/*
 * XREFs of ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18006C85C
 * Callers:
 *     ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18002F280 (-NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x18002F300 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006C780 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z @ 0x180011148 (-CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001B938 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800832F0 (-RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180083380 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::Reset(void **this)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  CBitmapRealization *v4; // rbx
  const struct IDeviceResourceNotify *v5; // rbp
  __int64 (__fastcall *v6)(CBitmapRealization *__hidden, const struct IDeviceResourceNotify *); // r12
  unsigned int (__fastcall *v7)(CBitmapRealization *__hidden); // rbp
  void *v8; // rdi
  __int64 v9; // rax
  int v10; // eax

  if ( this[13] )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
    v10 = CD3DDeviceManager::CloseFence(
            (CD3DDeviceManager *)&g_D3DDeviceManager,
            (const struct _GUID *)(v9 + 252),
            (struct _LUID)this[12],
            this[13]);
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v10, 0x682u);
    this[13] = 0LL;
  }
  if ( *((_BYTE *)this + 124) )
    CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)this);
  if ( *((_DWORD *)this + 14) )
  {
    v2 = *((unsigned int *)this + 14);
    v3 = 0LL;
    do
    {
      v4 = *(CBitmapRealization **)((char *)this[4] + v3);
      if ( *this )
        v5 = (const struct IDeviceResourceNotify *)((char *)*this + 16);
      else
        v5 = 0LL;
      v6 = *(__int64 (__fastcall **)(CBitmapRealization *__hidden, const struct IDeviceResourceNotify *))(*((_QWORD *)v4 + 15) + 32LL);
      if ( v6 == CBitmapRealization::RemoveResourceNotifier )
        CBitmapRealization::RemoveResourceNotifier((CBitmapRealization *)((char *)v4 + 120), v5);
      else
        v6((CBitmapRealization *)((char *)v4 + 120), v5);
      v7 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v4 + 16LL);
      if ( v7 == CBitmapRealization::Release )
        CBitmapRealization::Release(v4);
      else
        v7(v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 4, 8LL);
  v8 = this[10];
  this[9] = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    this[10] = 0LL;
  }
  this[1] = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 10) = 1;
  this[12] = (void *)g_luidZero;
  this[3] = 0LL;
  this[14] = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_BYTE *)this + 125) = 0;
  *((_DWORD *)this + 22) = 2;
}
