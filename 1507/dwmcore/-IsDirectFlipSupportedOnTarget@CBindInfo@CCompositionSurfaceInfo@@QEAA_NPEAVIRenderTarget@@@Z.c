/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18000523C
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x180008F10 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x180003550 (-IsStereoContent@CBitmapRealization@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180046CB4 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xqqqqqqqq @ 0x18011995C (Template_xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  struct IRenderTarget *v2; // r14
  __int64 v3; // rdi
  CCompositionSurfaceInfo::CBindInfo *v4; // rsi
  CDisplayManager *v5; // rcx
  struct CDisplaySet *v6; // r15
  int (__fastcall **v8)(struct IRenderTarget *, GUID *, __int64 *); // rax
  unsigned int v9; // r13d
  CBitmapRealization *v10; // r12
  struct _LUID AdapterLuid; // rax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdi
  BOOL v16; // r13d
  __int64 v17; // r14
  int v18; // ebx
  int v19; // edx
  __int64 v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h] BYREF
  int v22; // [rsp+70h] [rbp-19h] BYREF
  __int64 v23; // [rsp+78h] [rbp-11h] BYREF
  struct CDisplaySet *v24; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v25[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v26; // [rsp+90h] [rbp+7h]
  char v29; // [rsp+100h] [rbp+77h] BYREF
  int v30; // [rsp+108h] [rbp+7Fh] BYREF

  v24 = 0LL;
  v2 = a2;
  v3 = *((_QWORD *)this + 10);
  v4 = this;
  v29 = 0;
  if ( v3
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 112) + 72LL))(v3 + 112)
    && (int)CDisplayManager::GetCurrentDisplaySet(v5, &v24) >= 0 )
  {
    v6 = v24;
    if ( *((_DWORD *)v24 + 1) == *((_DWORD *)v4 + 32) && *((struct IRenderTarget **)v4 + 15) == v2 )
    {
      v29 = *((_BYTE *)v4 + 133);
    }
    else
    {
      v8 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v2;
      v21 = 0LL;
      if ( (*v8)(v2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v21) >= 0 )
      {
        v9 = 0;
        v30 = DisplayId::Invalid;
        if ( (*(int (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)v21 + 104LL))(v21, v25, &v30) >= 0 )
        {
          v23 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
                 v21,
                 &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
                 &v23) >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          v10 = (CBitmapRealization *)*((_QWORD *)v4 + 10);
          AdapterLuid = CBitmapRealization::GetAdapterLuid(v10);
          if ( *(_DWORD *)AdapterLuid.LowPart == v25[0] && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v25[1] )
          {
            v12 = v30;
            v13 = *(_DWORD *)(*(__int64 (__fastcall **)(CBitmapRealization *, __int64 *))(*(_QWORD *)v10 + 96LL))(
                               v10,
                               &v20);
            if ( (v13 == v12 || v13 == DisplayId::None || v12 == DisplayId::All)
              && (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)v4 + 10) + 80LL))(
                   *((_QWORD *)v4 + 10),
                   &v20,
                   v9) >= 0 )
            {
              (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v21 + 312LL))(v21, v20, &v29);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            }
          }
        }
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
        {
          v15 = *((_QWORD *)v4 + 10);
          LODWORD(v20) = 0;
          v22 = 0;
          (*(void (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)(v15 + 112) + 24LL))(v15 + 112, &v20, &v22);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v16 = v29 != 0;
            (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 10) + 96LL))(*((_QWORD *)v4 + 10), &v23);
            v17 = *((_QWORD *)v4 + 10);
            v26 = *(_QWORD *)(*(_QWORD *)v4 + 40LL);
            v18 = v26;
            CBitmapRealization::IsStereoContent((CBitmapRealization *)(v17 + 112));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17);
            Template_xqqqqqqqq(v20, v19, v18, v16);
            v4 = this;
            v2 = a2;
            v6 = v24;
          }
        }
        v14 = v21;
        *((_DWORD *)v4 + 32) = *((_DWORD *)v6 + 1);
        *((_BYTE *)v4 + 133) = v29;
        *((_QWORD *)v4 + 15) = v2;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    CDisplaySet::Release(v6);
  }
  return v29;
}
