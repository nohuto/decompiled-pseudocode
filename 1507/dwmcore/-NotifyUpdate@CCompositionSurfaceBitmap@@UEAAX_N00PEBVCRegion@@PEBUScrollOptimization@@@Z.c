/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180087540
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x18001B1C4 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180086E40 (-NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x180087D14 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5,
        const struct ScrollOptimization *a6)
{
  unsigned __int64 v6; // rdi
  __int64 i; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rsi
  unsigned int v14; // eax
  unsigned int Count; // eax
  __int64 v16; // rbx
  _DWORD *v17; // r15
  __int64 (__fastcall *v18)(__int64, _DWORD *, unsigned int, CPrimitiveGroup *); // rbp
  void (__fastcall *v19)(CCompositionSurfaceBitmap *); // rbx

  v6 = 0LL;
  if ( !a2 || a3 || a4 )
  {
    CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCompositionSurfaceBitmap *)((char *)this + 16));
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 86); *(_BYTE *)(*((_QWORD *)this + 40) + 16 * v12 + 8) = 1 )
    {
      v12 = (unsigned int)i;
      i = (unsigned int)(i + 1);
    }
  }
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 48), 1);
  if ( a3 || a4 )
  {
    CResource::NotifyOnChanged((_DWORD *)this - 12, 0, 0LL);
  }
  else
  {
    *((_QWORD *)this + 51) = a5;
    if ( a6 )
    {
      *((_OWORD *)this + 26) = *(_OWORD *)a6;
      *((_QWORD *)this + 54) = *((_QWORD *)a6 + 2);
      *((_DWORD *)this + 110) = *((_DWORD *)a6 + 6);
    }
    v13 = (__int64 *)((char *)this - 48);
    v14 = *((_DWORD *)this - 4) ^ (*((_DWORD *)this - 4) ^ ((*((_DWORD *)this - 4) & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)this - 4) = v14;
    if ( (v14 & 6) == 2 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64 *))(*v13 + 88))(v13, 1LL, v13) )
      {
        Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v13 + 3));
        if ( Count )
        {
          v16 = Count;
          do
          {
            v17 = (_DWORD *)CPtrArrayBase::operator[](v13 + 3, v6);
            v18 = *(__int64 (__fastcall **)(__int64, _DWORD *, unsigned int, CPrimitiveGroup *))(*v13 + 64);
            if ( v18 == CResource::NotifyListenerOfChange )
              CResource::NotifyListenerOfChange((__int64)v13, v17, 1u, (CPrimitiveGroup *)v13);
            else
              v18((__int64)v13, v17, 1u, (CPrimitiveGroup *)v13);
            ++v6;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    v19 = *(void (__fastcall **)(CCompositionSurfaceBitmap *))(*v13 + 72);
    if ( v19 == CCompositionSurfaceBitmap::NotifyOnChangeCompleted )
      CCompositionSurfaceBitmap::NotifyOnChangeCompleted((CCompositionSurfaceBitmap *)v13);
    else
      ((void (__fastcall *)(__int64 *, __int64))v19)(v13, i);
    *((_DWORD *)v13 + 8) ^= (*((_DWORD *)v13 + 8) ^ (2 * (*((_DWORD *)v13 + 8) >> 1) - 2)) & 6;
  }
}
