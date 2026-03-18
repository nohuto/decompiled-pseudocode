/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18015207C
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x180142920 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180090140 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xqqqqqqqq @ 0x180152C74 (Template_xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  __int64 v3; // rcx
  CDisplayManager *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  CDisplaySet *v8; // rdi
  int (__fastcall **v9)(struct IRenderTarget *, GUID *, __int64 *); // rax
  unsigned int v10; // r14d
  struct _LUID AdapterLuid; // rax
  _QWORD *v12; // rcx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  BOOL v16; // r12d
  _QWORD *v17; // rdi
  int v18; // ebx
  int v19; // edx
  __int64 v20; // rcx
  int v22; // [rsp+60h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-11h] BYREF
  __int64 v24; // [rsp+70h] [rbp-9h] BYREF
  CDisplaySet *v25; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v26[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+88h] [rbp+Fh]
  char v28; // [rsp+E0h] [rbp+67h] BYREF
  struct IRenderTarget *v29; // [rsp+E8h] [rbp+6Fh]
  int v30; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+7Fh] BYREF

  v29 = a2;
  v3 = *((_QWORD *)this + 9);
  v28 = 0;
  v25 = 0LL;
  if ( v3
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 112) + 88LL))(v3 + 112)
    && (int)CDisplayManager::GetCurrentDisplaySet(v5, &v25) >= 0 )
  {
    v8 = v25;
    if ( *((_DWORD *)v25 + 1) == *((_DWORD *)this + 42) && *((struct IRenderTarget **)this + 20) == a2 )
    {
      v28 = *((_BYTE *)this + 173);
    }
    else
    {
      v9 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2;
      v24 = 0LL;
      if ( (*v9)(a2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v24) >= 0 )
      {
        v30 = DisplayId::Invalid;
        v10 = 0;
        if ( (*(int (__fastcall **)(__int64, _DWORD *, int *, _QWORD))(*(_QWORD *)v24 + 104LL))(v24, v26, &v30, 0LL) >= 0 )
        {
          v23 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
                 v24,
                 &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
                 &v23) >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          AdapterLuid = CBitmapRealization::GetAdapterLuid(*((CBitmapRealization **)this + 9), &v31);
          if ( *(_DWORD *)AdapterLuid.LowPart == v26[0] && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v26[1] )
          {
            v13 = v30;
            v14 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v12 + 96LL))(v12, &v31);
            if ( (v14 == DisplayId::None || v14 == v13 || v13 == DisplayId::All)
              && (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 9) + 80LL))(
                   *((_QWORD *)this + 9),
                   &v31,
                   v10) >= 0 )
            {
              (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v24 + 336LL))(v24, v31, &v28);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
        {
          v15 = *((_QWORD *)this + 9) + 112LL;
          v22 = 0;
          LODWORD(v31) = 0;
          (*(void (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v22, &v31);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v16 = v28 != 0;
            (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 96LL))(*((_QWORD *)this + 9), &v23);
            v17 = (_QWORD *)*((_QWORD *)this + 9);
            v27 = *(_QWORD *)(*(_QWORD *)this + 40LL);
            v18 = v27;
            (*(__int64 (__fastcall **)(_QWORD *))(v17[14] + 48LL))(v17 + 14);
            (*(void (__fastcall **)(_QWORD *))(*v17 + 104LL))(v17);
            Template_xqqqqqqqq(v22, v19, v18, v16);
            v8 = v25;
          }
        }
        v20 = v24;
        *((_DWORD *)this + 42) = *((_DWORD *)v8 + 1);
        *((_QWORD *)this + 20) = v29;
        *((_BYTE *)this + 173) = v28;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    CDisplaySet::Release(v8, v6, v7);
  }
  return v28;
}
