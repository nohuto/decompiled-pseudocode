/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18001BC5C
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x18000C1C0 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x18000DBF0 (-IsStereoContent@CBitmapRealization@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180083204 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     Template_xqqqqqqqq @ 0x1801307AC (Template_xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  __int64 v2; // rdi
  struct IRenderTarget *v3; // rsi
  CCompositionSurfaceInfo::CBindInfo *v4; // r14
  CDisplayManager *v5; // rcx
  struct CDisplaySet *v6; // r13
  int (__fastcall **v8)(struct IRenderTarget *, GUID *, __int64 *); // rax
  CBitmapRealization *v9; // r12
  struct _LUID AdapterLuid; // rax
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdi
  BOOL v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // edx
  unsigned int v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h] BYREF
  __int64 v22; // [rsp+70h] [rbp-19h] BYREF
  __int64 v23; // [rsp+78h] [rbp-11h] BYREF
  struct CDisplaySet *v24; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v25[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v26; // [rsp+90h] [rbp+7h]
  char v29; // [rsp+100h] [rbp+77h] BYREF
  int v30; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)this + 9);
  v29 = 0;
  v3 = a2;
  v24 = 0LL;
  v4 = this;
  if ( v2
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 112) + 80LL))(v2 + 112)
    && (int)CDisplayManager::GetCurrentDisplaySet(v5, &v24) >= 0 )
  {
    v6 = v24;
    if ( *((_DWORD *)v24 + 1) == *((_DWORD *)v4 + 30) && *((struct IRenderTarget **)v4 + 14) == v3 )
    {
      v29 = *((_BYTE *)v4 + 125);
    }
    else
    {
      v8 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v3;
      v22 = 0LL;
      if ( (*v8)(v3, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v22) >= 0 )
      {
        v30 = DisplayId::Invalid;
        v20 = 0;
        if ( (*(int (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)v22 + 104LL))(v22, v25, &v30) >= 0 )
        {
          v23 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
                 v22,
                 &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
                 &v23) >= 0 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          v9 = (CBitmapRealization *)*((_QWORD *)v4 + 9);
          AdapterLuid = CBitmapRealization::GetAdapterLuid(v9);
          if ( *(_DWORD *)AdapterLuid.LowPart == v25[0] && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v25[1] )
          {
            v11 = v30;
            v12 = *(_DWORD *)(*(__int64 (__fastcall **)(CBitmapRealization *, __int64 *))(*(_QWORD *)v9 + 96LL))(
                               v9,
                               &v21);
            if ( (v12 == v11 || v12 == DisplayId::None || v11 == DisplayId::All)
              && (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)v4 + 9) + 80LL))(
                   *((_QWORD *)v4 + 9),
                   &v21,
                   v20) >= 0 )
            {
              (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v22 + 320LL))(v22, v21, &v29);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
          }
        }
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
        {
          v14 = *((_QWORD *)v4 + 9);
          LODWORD(v21) = 0;
          v20 = 0;
          (*(void (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)(v14 + 112) + 24LL))(
            v14 + 112,
            &v21,
            &v20);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v15 = v29 != 0;
            (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 9) + 96LL))(*((_QWORD *)v4 + 9), &v23);
            v16 = *(_QWORD *)v4;
            v17 = *((_QWORD *)v4 + 9);
            v18 = *(_QWORD *)(v16 + 40);
            v26 = v18;
            CBitmapRealization::IsStereoContent((CBitmapRealization *)(v17 + 112));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 112) + 48LL))(v17 + 112);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17);
            Template_xqqqqqqqq(v21, v19, v18, v15);
            v4 = this;
            v3 = a2;
            v6 = v24;
          }
        }
        v13 = v22;
        *((_DWORD *)v4 + 30) = *((_DWORD *)v6 + 1);
        *((_BYTE *)v4 + 125) = v29;
        *((_QWORD *)v4 + 14) = v3;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    CDisplaySet::Release(v6);
  }
  return v29;
}
