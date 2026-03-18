/*
 * XREFs of ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800989C8
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800549E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800902E0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180090360 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180099D40 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180099DA4 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18009A078 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceInfo::DirtyRenderingRealization(
        CCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // si
  CDxHandleBitmapRealization *v9; // rcx
  void (__fastcall *v10)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  _DWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  CBitmapRealization *v14; // rcx
  void (*v15)(void); // rax
  CBitmapRealization *v17; // rcx
  __int64 (__fastcall *v18)(CBitmapRealization *, const struct CRegion *); // rax
  unsigned int v19; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-1Ch] BYREF
  int v21; // [rsp+28h] [rbp-18h] BYREF
  int v22; // [rsp+2Ch] [rbp-14h]
  unsigned int v23; // [rsp+30h] [rbp-10h]
  unsigned int v24; // [rsp+34h] [rbp-Ch]

  v4 = 0;
  if ( a3 )
  {
    v9 = (CDxHandleBitmapRealization *)(*((_QWORD *)this + 15) + 112LL);
    v10 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)v9 + 24LL);
    if ( v10 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize(v9, &v19, &v20);
    else
      v10(v9, &v19, &v20);
    if ( a3 == (HRGN)1 )
    {
      v21 = 0;
      v22 = 0;
      v23 = v19;
      v24 = v20;
      CRegion::SetRectangle(a4, (const struct MilRectU *)&v21);
    }
    else
    {
      CRegion::SetHRGN(a4, a3);
      CRegion::GetBoundingRect(a4, (struct MilRectU *)&v21);
      v11 = *(_DWORD **)a4;
      if ( !**(_DWORD **)a4
        || (v12 = (__int64)&v11[2 * *v11 + 1],
            v13 = (v12 + *(int *)(v12 + 4) - (__int64)(int)v11[4] - (__int64)(v11 + 3)) >> 3,
            v21)
        || v22
        || (_DWORD)v13 != 1
        || v23 != v19
        || v24 != v20 )
      {
        *((_BYTE *)this + 196) = 1;
      }
    }
    v4 = 1;
  }
  if ( a3 == (HRGN)1 || a2 && *((_DWORD *)this + 26) > 1u )
  {
    v14 = (CBitmapRealization *)*((_QWORD *)this + 15);
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 72LL);
    if ( (char *)v15 == (char *)CBitmapRealization::MarkFullDirty )
      CBitmapRealization::MarkFullDirty(v14);
    else
      v15();
  }
  else if ( v4 )
  {
    v17 = (CBitmapRealization *)*((_QWORD *)this + 15);
    v18 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct CRegion *))(*(_QWORD *)v17 + 64LL);
    if ( v18 == CBitmapRealization::AddDirtyRegion )
      CBitmapRealization::AddDirtyRegion(v17, a4);
    else
      v18(v17, a4);
  }
  return v4;
}
