/*
 * XREFs of FreeDesktop @ 0x1C0131160
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C007F140 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C012C34C (_SetMagnificationInputTransform.c)
 *     CleanupIAMAccess @ 0x1C014AD50 (CleanupIAMAccess.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     Win32DestroySection @ 0x1C01D1EF8 (Win32DestroySection.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E85C0 (Win32UnmapViewInSessionSpace.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rcx
  struct _KPROCESS *v4; // rax
  struct _KPROCESS *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v10[3]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  if ( *(_QWORD *)(v1 + 208) )
  {
    memset(v10, 0, 36);
    LODWORD(v10[2]) = 3;
    SetMagnificationInputTransform(v10);
  }
  if ( *(_QWORD *)(v1 + 240) || (v3 = *(_QWORD *)(v1 + 248)) != 0 && v3 != v1 + 248 )
    CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 32) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v4 = (struct _KPROCESS *)ReferenceDwmProcess();
  v5 = v4;
  if ( v4 )
  {
    FreeView(v4, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v5);
  }
  v6 = *(void **)(v1 + 120);
  if ( v6 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 120));
    v2 = Win32UnmapViewInSessionSpace(v6);
    Win32DestroySection(*(PVOID *)(v1 + 112));
  }
  UnlockObjectAssignment(v1 + 24);
  if ( !v11 )
    UserSessionSwitchLeaveCrit(v8, v7);
  return v2;
}
