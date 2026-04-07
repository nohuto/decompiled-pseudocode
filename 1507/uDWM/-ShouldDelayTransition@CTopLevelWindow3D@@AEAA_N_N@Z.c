/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180027C70
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180027994 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180027A30 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C92C (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     Template_pq @ 0x180076624 (Template_pq.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // rdi
  bool v3; // bl
  __int64 v5; // rcx
  int v7; // edx
  int v8; // eax
  struct CTransitionWindowSnapshot *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 39);
  v3 = 0;
  v5 = v2;
  if ( (*(_BYTE *)(v2 + 556) & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v2 + 568) & 0xFFF) == 0xFFF
      || (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                *(HWND *)(v2 + 40),
                &v9) < 0 )
    {
      return 0;
    }
    v3 = 1;
    goto LABEL_13;
  }
  v7 = 0x100000;
  do
  {
    if ( !v5 )
      break;
    v8 = *(_DWORD *)(v5 + 568);
    v5 = *(_QWORD *)(v5 + 504);
    v3 = (v7 & v8) == v7;
    v7 |= 0x10000000u;
  }
  while ( !v3 );
  if ( v3 )
  {
LABEL_13:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pq(v5, &UdwmSystemAnimation_DelayShowHide, *(_QWORD *)(v2 + 40), a2);
  }
  return v3;
}
