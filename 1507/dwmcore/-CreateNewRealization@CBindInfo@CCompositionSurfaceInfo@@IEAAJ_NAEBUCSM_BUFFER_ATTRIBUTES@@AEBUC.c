/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801192B8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800469D0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180087914 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089FB0 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18014D924 (-Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18014E0D8 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18014E8C8 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV1@PEAPEAVCBitmapRealization@@@Z @ 0x18014FAF4 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct _LUID **this,
        char a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CBitmapRealization **a5)
{
  int v9; // eax
  __int64 v10; // rcx
  CSurfaceManager *v11; // rbx
  struct CComposition *(__fastcall *v12)(CSurfaceManager *); // rsi
  struct CComposition *v13; // rax
  int v14; // eax
  unsigned int *v15; // r8
  unsigned int v16; // esi
  void (__fastcall *v17)(CBitmapRealization *); // rdi
  int v19; // r9d
  CSurfaceManager *v20; // rbx
  struct CComposition *(__fastcall *v21)(CSurfaceManager *); // rsi
  struct CComposition *v22; // rax
  CSurfaceManager *v23; // rsi
  struct _LUID v24; // rbx
  struct CComposition *(__fastcall *v25)(CSurfaceManager *); // r12
  struct CComposition *v26; // rax
  int v27; // eax
  struct CDxHandleYUVBitmapRealization *v28; // rsi
  struct CDxHandleYUVBitmapRealization *v29; // r12
  CSurfaceManager *v30; // rbx
  struct CComposition *(__fastcall *v31)(CSurfaceManager *); // rsi
  struct CComposition *v32; // rax
  CSurfaceManager *v33; // rbx
  struct CComposition *(__fastcall *v34)(CSurfaceManager *); // rsi
  struct CComposition *CompositionNoRef; // rax
  int v36; // eax
  unsigned int v37; // [rsp+20h] [rbp-71h]
  HGDIOBJ ho; // [rsp+30h] [rbp-61h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-59h] BYREF
  int *v40; // [rsp+50h] [rbp-41h] BYREF
  int v41; // [rsp+58h] [rbp-39h] BYREF

  ho = 0LL;
  memset(hObject, 0, sizeof(hObject));
  *a5 = 0LL;
  v9 = OpenCompositionSurfaceDirtyRegion(*(_QWORD *)&(*this)[4], this[1], a4, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  if ( *(_DWORD *)a4 == 1 )
  {
    v14 = OpenCompositionSurfaceSectionInfo(*(_QWORD *)&(*this)[4], this[1], (char *)a4 + 8, hObject);
    v16 = v14;
    if ( v14 >= 0 )
    {
      v33 = (CSurfaceManager *)(*this)[3];
      v34 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v33 + 8LL);
      if ( v34 == CSurfaceManager::GetCompositionNoRef )
        CompositionNoRef = CSurfaceManager::GetCompositionNoRef(v33);
      else
        CompositionNoRef = v34(v33);
      v36 = CSectionBitmapRealization::Create(
              (const struct _GUID *)((char *)CompositionNoRef + 252),
              a3,
              a4,
              (const struct CSM_SYSMEM_SECTION_INFO *)hObject,
              a5);
      v16 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_18016ADF8, 2u, v36, 0x58Au);
        CloseHandle(hObject[0]);
        goto LABEL_16;
      }
      goto LABEL_11;
    }
    v37 = 1411;
    goto LABEL_22;
  }
  if ( *(_DWORD *)a4 != 2 )
  {
    v16 = -2147024809;
    v37 = 1501;
    goto LABEL_21;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)this + 16) )
      v28 = (struct CDxHandleYUVBitmapRealization *)*this[5];
    else
      v28 = 0LL;
    if ( !*((_DWORD *)a4 + 7) )
    {
      v29 = 0LL;
      if ( v28 )
        v29 = v28;
      v30 = (CSurfaceManager *)(*this)[3];
      v31 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v30 + 8LL);
      if ( v31 == CSurfaceManager::GetCompositionNoRef )
        v32 = CSurfaceManager::GetCompositionNoRef(v30);
      else
        v32 = v31(v30);
      v27 = CDxHandleYUVBitmapRealization::Create((const struct _GUID *)((char *)v32 + 252), a3, a4, v29, a5);
      v16 = v27;
      if ( v27 < 0 )
      {
        v37 = 1477;
        goto LABEL_23;
      }
      goto LABEL_11;
    }
    if ( v28 )
    {
      v14 = (*(__int64 (__fastcall **)(struct CDxHandleYUVBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *, const struct CSM_REALIZATION_INFO *, struct CBitmapRealization **))(*(_QWORD *)v28 + 40LL))(
              v28,
              a3,
              a4,
              a5);
      v16 = v14;
      if ( v14 >= 0 )
        goto LABEL_11;
      v37 = 1490;
      goto LABEL_22;
    }
    v16 = -2003292412;
    v37 = 1494;
LABEL_21:
    v19 = v16;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, &dword_18016ADF8, 2u, v19, v37);
    goto LABEL_16;
  }
  if ( *((_DWORD *)a4 + 6) )
  {
    v20 = (CSurfaceManager *)(*this)[3];
    v21 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v20 + 8LL);
    if ( v21 == CSurfaceManager::GetCompositionNoRef )
      v22 = CSurfaceManager::GetCompositionNoRef(v20);
    else
      v22 = v21(v20);
    v14 = CDxHandleStereoBitmapRealization::Create((const struct _GUID *)((char *)v22 + 252), a3, a4, a5);
    v16 = v14;
    if ( v14 >= 0 )
      goto LABEL_11;
    v37 = 1435;
    goto LABEL_22;
  }
  if ( *((_DWORD *)a3 + 34) && (*((_DWORD *)a3 + 1) == 11 || *((_DWORD *)a3 + 1) == 28 || *((_DWORD *)a3 + 1) == 87) )
  {
    v23 = (CSurfaceManager *)(*this)[3];
    v24 = (*this)[5];
    v25 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v23 + 8LL);
    if ( v25 == CSurfaceManager::GetCompositionNoRef )
      v26 = CSurfaceManager::GetCompositionNoRef(v23);
    else
      v26 = v25(v23);
    v27 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
            (const struct _GUID *)((char *)v26 + 252),
            a3,
            a4,
            v24,
            a5);
    v16 = v27;
    if ( v27 < 0 )
    {
      v37 = 1444;
LABEL_23:
      v19 = v27;
      goto LABEL_24;
    }
    goto LABEL_11;
  }
  v11 = (CSurfaceManager *)(*this)[3];
  v12 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v11 + 8LL);
  if ( v12 == CSurfaceManager::GetCompositionNoRef )
    v13 = CSurfaceManager::GetCompositionNoRef(v11);
  else
    v13 = v12(v11);
  v14 = CDxHandleBitmapRealization::Create((const struct _GUID *)((char *)v13 + 252), a3, a4, a5);
  v16 = v14;
  if ( v14 < 0 )
  {
    v37 = 1451;
LABEL_22:
    v19 = v14;
    goto LABEL_24;
  }
LABEL_11:
  if ( !ho )
    return v16;
  if ( *a5 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v17 = *(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)*a5 + 72LL);
      if ( v17 == CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(*a5);
      else
        v17(*a5);
    }
    else
    {
      v41 = 0;
      v40 = &v41;
      CRegion::SetHRGN((CRegion *)&v40, (HRGN)ho, v15);
      (*(void (__fastcall **)(_QWORD, int **))(*(_QWORD *)*a5 + 64LL))(*a5, &v40);
      FastRegion::CRegion::FreeMemory((void **)&v40);
    }
  }
LABEL_16:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v16;
}
