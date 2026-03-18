/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800998F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180151C84 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180036F90 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180090360 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180099DA4 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B22B4 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B271C (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x180151F6C (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitm.c)
 *     ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18018E7B4 (-Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180190104 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801907F0 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180190908 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  struct CDecodeBitmap *v5; // rcx
  int v9; // eax
  __int64 v10; // rcx
  CSurfaceManager *v11; // rcx
  struct _LUID v12; // rbx
  __int64 (*v13)(void); // rax
  struct CComposition *CompositionNoRef; // rax
  int v15; // ebx
  CSurfaceManager *v16; // rcx
  struct CComposition *(__fastcall *v17)(CSurfaceManager *); // rax
  struct CComposition *v18; // rax
  int SubResourceRealization; // eax
  void (__fastcall *v20)(CBitmapRealization *); // rax
  CBitmapRealization *v21; // rcx
  int v23; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-69h]
  HGDIOBJ ho; // [rsp+30h] [rbp-59h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-51h] BYREF
  int *v33; // [rsp+50h] [rbp-39h] BYREF
  int v34; // [rsp+58h] [rbp-31h] BYREF

  ho = 0LL;
  *a4 = 0LL;
  v5 = *this;
  memset(hObject, 0, sizeof(hObject));
  v9 = NtOpenCompositionSurfaceDirtyRegion(*((_QWORD *)v5 + 4), this + 1, a3, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      v27 = NtOpenCompositionSurfaceSectionInfo(*((_QWORD *)*this + 4), this + 1, (char *)a3 + 8, hObject);
      if ( v27 < 0 )
      {
        v15 = v27 | 0x10000000;
        v30 = 1474;
        goto LABEL_26;
      }
      v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
      v29 = CSectionBitmapRealization::Create(
              (const struct _GUID *)(v28 + 252),
              a2,
              a3,
              (const struct CSM_SYSMEM_SECTION_INFO *)hObject,
              a4);
      v15 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801B8EE8, 2u, v29, 0x5C9u);
        CloseHandle(hObject[0]);
        goto LABEL_16;
      }
      break;
    case 2:
      v11 = (CSurfaceManager *)*((_QWORD *)*this + 3);
      v12 = (struct _LUID)*((_QWORD *)*this + 5);
      v13 = *(__int64 (**)(void))(*(_QWORD *)v11 + 8LL);
      if ( (char *)v13 == (char *)CSurfaceManager::GetCompositionNoRef )
        CompositionNoRef = CSurfaceManager::GetCompositionNoRef(v11);
      else
        CompositionNoRef = (struct CComposition *)v13();
      v15 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
              (const struct _GUID *)((char *)CompositionNoRef + 252),
              a2,
              a3,
              v12,
              a4);
      if ( v15 >= 0 )
        break;
      v16 = (CSurfaceManager *)*((_QWORD *)*this + 3);
      v17 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v16 + 8LL);
      v18 = v17 == CSurfaceManager::GetCompositionNoRef
          ? CSurfaceManager::GetCompositionNoRef(v16)
          : (struct CComposition *)((__int64 (*)(void))v17)();
      SubResourceRealization = CDxHandleBitmapRealization::Create(
                                 (const struct _GUID *)((char *)v18 + 252),
                                 a2,
                                 a3,
                                 this[19],
                                 a4);
      v15 = SubResourceRealization;
      if ( SubResourceRealization >= 0 )
        break;
      v30 = 1505;
      goto LABEL_27;
    case 3:
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create((const struct _GUID *)(v26 + 252), a2, a3, a4);
      v15 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v30 = 1515;
        goto LABEL_27;
      }
      break;
    case 4:
      PrimaryYUVBitmapRealizationNoRef = CCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef((CCompositionSurfaceInfo::CBindInfo *)this);
      if ( *((_DWORD *)a3 + 6) )
      {
        if ( !PrimaryYUVBitmapRealizationNoRef )
        {
          v15 = -2003292412;
          v30 = 1550;
          goto LABEL_26;
        }
        SubResourceRealization = CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
                                   PrimaryYUVBitmapRealizationNoRef,
                                   a2,
                                   a3,
                                   this[19],
                                   a4);
        v15 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v30 = 1546;
          goto LABEL_27;
        }
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
        SubResourceRealization = CDxHandleYUVBitmapRealization::Create(
                                   (const struct _GUID *)(v25 + 252),
                                   a2,
                                   a3,
                                   this[19],
                                   a4);
        v15 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v30 = 1532;
LABEL_27:
          v23 = SubResourceRealization;
          goto LABEL_28;
        }
      }
      break;
    default:
      v15 = -2147024809;
      v30 = 1557;
LABEL_26:
      v23 = v15;
LABEL_28:
      MilInstrumentationCheckHR(0x14u, &dword_1801B8EE8, 2u, v23, v30);
      goto LABEL_16;
  }
  if ( !ho )
    return (unsigned int)v15;
  if ( *a4 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v20 = *(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)*a4 + 72LL);
      v21 = *a4;
      if ( v20 == CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(v21);
      else
        v20(v21);
    }
    else
    {
      v34 = 0;
      v33 = &v34;
      CRegion::SetHRGN((CRegion *)&v33, (HRGN)ho);
      (*(void (__fastcall **)(_QWORD, int **))(*(_QWORD *)*a4 + 64LL))(*a4, &v33);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v33);
    }
  }
LABEL_16:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v15;
}
