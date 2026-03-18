/*
 * XREFs of DesktopFree @ 0x1C01DF350
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006AF74 (-FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     DefSetText @ 0x1C006AF9C (DefSetText.c)
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     CreateProp @ 0x1C007B05C (CreateProp.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C008FCBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     DeleteProperties @ 0x1C0098D10 (DeleteProperties.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C0121260 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C0233EC4 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopFree(__int64 a1, void *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx

  v4 = RtlSizeHeap(*(PVOID *)(a1 + 120), 0, a2);
  LOBYTE(v5) = RtlFreeHeap(*(PVOID *)(a1 + 120), 0, a2);
  v8 = v5;
  if ( v5 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
    if ( CurrentProcessWin32Process )
    {
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 632);
      *(_QWORD *)(CurrentProcessWin32Process + 1000) -= v4;
      if ( v10 )
        *(_QWORD *)(v10 + 200) -= v4;
    }
  }
  return v8;
}
