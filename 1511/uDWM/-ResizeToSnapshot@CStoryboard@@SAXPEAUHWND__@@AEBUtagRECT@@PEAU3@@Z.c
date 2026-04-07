/*
 * XREFs of ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x180094AD4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096330 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800983C0 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180039F08 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 */

void __fastcall CStoryboard::ResizeToSnapshot(HWND a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  struct tagRECT v3; // xmm0
  CDesktopManager *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // xmm0_8
  int v9; // ecx
  int v10; // r8d
  struct CTransitionWindowSnapshot *v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v6 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = v3;
  if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(*((CTransitionVisualController **)v6 + 25), a1, &v11) >= 0 )
  {
    v7 = *((_QWORD *)v11 + 38);
    v8 = _mm_srli_si128(*((__m128i *)v11 + 19), 8).m128i_u64[0];
    v9 = v8 - v7;
    if ( (int)v8 - (int)v7 < 0 )
      v9 = 0;
    v10 = HIDWORD(v8) - HIDWORD(v7);
    a3->right = a3->left + v9;
    if ( HIDWORD(v8) - HIDWORD(v7) < 0 )
      v10 = 0;
    a3->bottom = v10 + a3->top;
  }
}
