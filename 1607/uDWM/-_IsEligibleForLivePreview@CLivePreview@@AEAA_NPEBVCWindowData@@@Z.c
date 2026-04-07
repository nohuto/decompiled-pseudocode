/*
 * XREFs of ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007431C
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800336E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180073B90 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18007E67C (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 */

char __fastcall CLivePreview::_IsEligibleForLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  char v2; // di
  char v4; // al
  HWND v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // xmm0_8
  RECT rcSrc1; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 578) & 0x20) == 0 )
  {
    if ( *((_QWORD *)a2 + 48) )
    {
      v4 = *((_BYTE *)a2 + 576);
      if ( (v4 & 1) != 0 && (*((_BYTE *)a2 + 580) & 1) == 0 && (v4 & 4) == 0 && (*((_DWORD *)a2 + 25) & 0x20000000) == 0 )
      {
        if ( *((_QWORD *)a2 + 5) )
        {
          v5 = (HWND)*((_QWORD *)a2 + 5);
          if ( v5 != GetDesktopWindow() && v5 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 189) )
          {
            CTopLevelWindow::GetLivePreviewWindowRect(*((CTopLevelWindow **)a2 + 48), &rcSrc1, 1);
            v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 159);
            v7 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1272), 8).m128i_u64[0];
            rcSrc2.left = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1272);
            rcSrc2.top = HIDWORD(v6);
            rcSrc2.bottom = HIDWORD(v6) + HIDWORD(v7);
            rcSrc2.right = v7 + v6;
            if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            {
              if ( rcSrc1.right - rcSrc1.left >= 1 )
                return rcSrc1.bottom - rcSrc1.top >= 1;
            }
          }
        }
      }
    }
  }
  return v2;
}
