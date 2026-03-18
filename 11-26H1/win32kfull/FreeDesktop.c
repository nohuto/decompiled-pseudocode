/*
 * XREFs of FreeDesktop @ 0x1402A5110
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14005A254 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     CleanupIAMAccess @ 0x140154E80 (CleanupIAMAccess.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x1401FF96C (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     _CancelMagnificationInputTransform @ 0x14023BFA0 (_CancelMagnificationInputTransform.c)
 */

__int64 __fastcall FreeDesktop(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserGdiSessionState; // rax
  struct _KPROCESS *v6; // rax
  __int64 v7; // rdx
  struct _KPROCESS *v8; // rdi
  void *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  if ( *(_QWORD *)(v1 + 224) )
    CancelMagnificationInputTransform();
  CleanupIAMAccess((struct tagDESKTOP *)v1, v3);
  *(_DWORD *)(v1 + 48) |= 4u;
  UserGdiSessionState = W32GetUserGdiSessionState(v4);
  FreeView(*(PRKPROCESS *)(UserGdiSessionState + 40), (struct tagDESKTOP *)v1);
  v6 = (struct _KPROCESS *)ReferenceDwmProcess();
  v8 = v6;
  if ( v6 )
  {
    FreeView(v6, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v8);
  }
  v9 = *(void **)(v1 + 136);
  if ( v9 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 136));
    v2 = MmUnmapViewInSessionSpace(v9);
    ObfDereferenceObject(*(PVOID *)(v1 + 128));
  }
  v10 = *(void **)(v1 + 8);
  if ( v10 )
    Win32FreePool(v10);
  DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD *)(v1 + 40), v7);
  if ( !v15 )
    UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13);
  return v2;
}
