/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0142F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C009E150 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

bool __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( !a2 && a3 != MEMORY[0xFFFFF780000002D8] )
  {
    Global = DXGGLOBAL::GetGlobal(a1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 88),
                                       a3,
                                       v6);
    if ( !SessionDataForSpecifiedSession )
      return 0;
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18516);
    if ( v9 )
      return v10 == *(_QWORD *)(v9 + 252);
    if ( !v10 )
      return 0;
  }
  return 1;
}
