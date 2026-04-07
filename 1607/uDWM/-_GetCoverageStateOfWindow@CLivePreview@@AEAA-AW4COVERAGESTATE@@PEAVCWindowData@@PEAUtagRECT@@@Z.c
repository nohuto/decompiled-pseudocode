/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007413C
 * Callers:
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800739D8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180074ABC (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180074298 (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800758F8 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x18009982C (-GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(__int64 a1, __int64 a2)
{
  unsigned int CoverageStateOfTwoRects; // esi
  bool v3; // zf
  __int64 v5; // rax
  __int128 v6; // xmm0
  struct tagRECT *v7; // rax
  struct tagRECT v8; // xmm0
  struct tagRECT *v9; // rbx
  unsigned int v10; // edi
  unsigned int v11; // r14d
  CImmersiveState *v12; // rcx
  struct tagRECT v14; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF

  CoverageStateOfTwoRects = 0;
  v3 = *(_DWORD *)(a2 + 112) == 1;
  v17[0] = 0LL;
  v17[1] = 0LL;
  if ( !v3 || (v5 = *(_QWORD *)(a1 + 520)) != 0 && *(_DWORD *)(v5 + 112) != 1 )
  {
    v3 = *(_DWORD *)(a2 + 112) == 1;
    v16 = 0uLL;
    if ( v3 )
      v6 = (__int128)*CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v15, (struct CWindowData *)a2);
    else
      v6 = *(_OWORD *)(a2 + 48);
    v7 = *(struct tagRECT **)(a1 + 520);
    v16 = v6;
    if ( v7 )
    {
      *(_QWORD *)&v15.left = 0LL;
      *(_QWORD *)&v15.right = 0LL;
      if ( v7[7].left == 1 )
      {
        v8 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v14, (struct CWindowData *)v7);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 588) )
          v9 = (struct tagRECT *)(a1 + 572);
        else
          v9 = v7 + 3;
        v8 = *v9;
      }
      v15 = v8;
      return (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(&v15, &v16, v17);
    }
    else
    {
      v10 = 0;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 536) + 40LL);
      if ( v11 )
      {
        do
        {
          if ( CoverageStateOfTwoRects )
            break;
          if ( CImmersiveState::GetDesktopWorkAreaAtIndex(*(CImmersiveState **)(a1 + 536), v10) )
          {
            v15 = *(struct tagRECT *)CImmersiveState::GetDesktopWorkAreaAtIndex(v12, v10);
            CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(&v15, &v16, v17);
          }
          ++v10;
        }
        while ( v10 < v11 );
      }
    }
  }
  return CoverageStateOfTwoRects;
}
