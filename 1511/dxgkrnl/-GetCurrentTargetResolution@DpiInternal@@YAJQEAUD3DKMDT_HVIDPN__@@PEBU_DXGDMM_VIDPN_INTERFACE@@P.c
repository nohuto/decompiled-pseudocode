/*
 * XREFs of ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00AD200
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0169024 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiInternal::GetCurrentTargetResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4,
        struct _D3DKMDT_2DREGION *a5)
{
  __int64 (__fastcall *v5)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  void (__fastcall *v22)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+58h] [rbp-8h]
  __int64 v25; // [rsp+88h] [rbp+28h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  v5 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v8 = *((unsigned int *)a3 + 1);
  v26 = 0LL;
  v25 = 0LL;
  v20[0] = 0;
  v10 = v5(this, v8, &v25, &v26);
  v12 = v10;
  if ( v10 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v17 + 24) = v12;
    WdLogEvent5_WdError(v17);
  }
  else
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v20,
      v25,
      *((_QWORD *)a2 + 4),
      (__int64)this);
    v19 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v26 + 24))(v25, &v19);
    v12 = v13;
    if ( v13 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v18 + 24) = v12;
      WdLogEvent5_WdError(v18);
    }
    else
    {
      v15 = v19;
      *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v19 + 20);
      LOBYTE(a5->cx) = (unsigned int)(((int)(*(_DWORD *)(v15 + 56) << 29) >> 29) - 2) <= 1;
      (*(void (__fastcall **)(__int64))(v26 + 32))(v25);
    }
    if ( v20[0] )
      v22(v23, v21);
  }
  return (unsigned int)v12;
}
