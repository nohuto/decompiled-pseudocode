/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18006C508 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801301D8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C9FC (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x18006CB30 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18006D854 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800834C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18015C2E4 (-Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18015CC58 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18015D388 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV1@PEAPEAVCBitmapRealization@@@Z @ 0x18015E5C4 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
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
  struct CComposition *(__fastcall *v12)(CSurfaceManager *__hidden); // rdi
  struct CComposition *CompositionNoRef; // rax
  int v14; // eax
  unsigned int v15; // esi
  void (__fastcall *v16)(CBitmapRealization *__hidden); // rdi
  int v18; // r9d
  __int64 v19; // rax
  struct _LUID v20; // rsi
  struct _LUID v21; // rbx
  __int64 v22; // rax
  struct CDxHandleYUVBitmapRealization *v23; // rdi
  struct CDxHandleYUVBitmapRealization *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-71h]
  HGDIOBJ ho; // [rsp+30h] [rbp-61h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-59h] BYREF
  int *v31; // [rsp+50h] [rbp-41h] BYREF
  int v32; // [rsp+58h] [rbp-39h] BYREF

  ho = 0LL;
  memset(hObject, 0, sizeof(hObject));
  *a5 = 0LL;
  v9 = OpenCompositionSurfaceDirtyRegion(*(_QWORD *)&(*this)[4], this[1], a4, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  if ( *(_DWORD *)a4 != 1 )
  {
    if ( *(_DWORD *)a4 == 2 )
    {
      if ( !a2 )
      {
        if ( *((_DWORD *)a4 + 6) )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&(*this)[3] + 8LL))(*(_QWORD *)&(*this)[3]);
          v14 = CDxHandleStereoBitmapRealization::Create((const struct _GUID *)(v19 + 252), a3, a4, a5);
          v15 = v14;
          if ( v14 < 0 )
          {
            v28 = 1486;
LABEL_24:
            v18 = v14;
            goto LABEL_25;
          }
        }
        else if ( *((_DWORD *)a3 + 33)
               && (*((_DWORD *)a3 + 1) == 11 || *((_DWORD *)a3 + 1) == 28 || *((_DWORD *)a3 + 1) == 87)
               && !CCommonRegistryData::m_fDisableAdvancedDirectFlip )
        {
          v20 = (*this)[3];
          v21 = (*this)[5];
          v22 = (*(__int64 (__fastcall **)(struct _LUID))(**(_QWORD **)&v20 + 8LL))(v20);
          v14 = CDxHandleAdvancedDirectFlipBitmapRealization::Create((const struct _GUID *)(v22 + 252), a3, a4, v21, a5);
          v15 = v14;
          if ( v14 < 0 )
          {
            v28 = 1496;
            goto LABEL_24;
          }
        }
        else
        {
          v11 = (CSurfaceManager *)(*this)[3];
          v12 = *(struct CComposition *(__fastcall **)(CSurfaceManager *__hidden))(*(_QWORD *)v11 + 8LL);
          if ( v12 == CSurfaceManager::GetCompositionNoRef )
            CompositionNoRef = CSurfaceManager::GetCompositionNoRef(v11);
          else
            CompositionNoRef = v12(v11);
          v14 = CDxHandleBitmapRealization::Create((const struct _GUID *)((char *)CompositionNoRef + 252), a3, a4, a5);
          v15 = v14;
          if ( v14 < 0 )
          {
            v28 = 1503;
            goto LABEL_24;
          }
        }
        goto LABEL_11;
      }
      if ( *((_DWORD *)this + 14) )
        v23 = (struct CDxHandleYUVBitmapRealization *)*this[4];
      else
        v23 = 0LL;
      if ( !*((_DWORD *)a4 + 7) )
      {
        v24 = 0LL;
        if ( v23 )
          v24 = v23;
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&(*this)[3] + 8LL))(*(_QWORD *)&(*this)[3]);
        v14 = CDxHandleYUVBitmapRealization::Create((const struct _GUID *)(v25 + 252), a3, a4, v24, a5);
        v15 = v14;
        if ( v14 < 0 )
        {
          v28 = 1529;
          goto LABEL_24;
        }
        goto LABEL_11;
      }
      if ( v23 )
      {
        v14 = (*(__int64 (__fastcall **)(struct CDxHandleYUVBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *, const struct CSM_REALIZATION_INFO *, struct CBitmapRealization **))(*(_QWORD *)v23 + 40LL))(
                v23,
                a3,
                a4,
                a5);
        v15 = v14;
        if ( v14 < 0 )
        {
          v28 = 1542;
          goto LABEL_24;
        }
        goto LABEL_11;
      }
      v15 = -2003292412;
      v28 = 1546;
    }
    else
    {
      v15 = -2147024809;
      v28 = 1553;
    }
    v18 = v15;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, &dword_180179140, 2u, v18, v28);
    goto LABEL_16;
  }
  v14 = OpenCompositionSurfaceSectionInfo(*(_QWORD *)&(*this)[4], this[1], (char *)a4 + 8, hObject);
  v15 = v14;
  if ( v14 < 0 )
  {
    v28 = 1462;
    goto LABEL_24;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&(*this)[3] + 8LL))(*(_QWORD *)&(*this)[3]);
  v27 = CSectionBitmapRealization::Create(
          (const struct _GUID *)(v26 + 252),
          a3,
          a4,
          (const struct CSM_SYSMEM_SECTION_INFO *)hObject,
          a5);
  v15 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180179140, 2u, v27, 0x5BDu);
    CloseHandle(hObject[0]);
    goto LABEL_16;
  }
LABEL_11:
  if ( !ho )
    return v15;
  if ( *a5 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v16 = *(void (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)*a5 + 72LL);
      if ( v16 == CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(*a5);
      else
        v16(*a5);
    }
    else
    {
      v32 = 0;
      v31 = &v32;
      CRegion::SetHRGN((CRegion *)&v31, (HRGN)ho);
      (*(void (__fastcall **)(_QWORD, int **))(*(_QWORD *)*a5 + 64LL))(*a5, &v31);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v31);
    }
  }
LABEL_16:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v15;
}
