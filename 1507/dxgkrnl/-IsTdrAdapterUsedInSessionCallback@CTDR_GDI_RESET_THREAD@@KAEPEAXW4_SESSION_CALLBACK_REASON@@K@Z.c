/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C013CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C008DAD0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

bool __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = a3;
  if ( !(_DWORD)a2 && (_DWORD)a3 != MEMORY[0xFFFFF780000002D8] )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 70),
                                       v4,
                                       v7,
                                       v8);
    if ( !SessionDataForSpecifiedSession )
      return 0;
    v11 = *(_QWORD *)(a1 + 32);
    v12 = *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18492);
    if ( v11 )
      return v12 == *(_QWORD *)(v11 + 252);
    if ( !v12 )
      return 0;
  }
  return 1;
}
