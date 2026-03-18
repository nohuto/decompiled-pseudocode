/*
 * XREFs of FreeDesktop @ 0x1C0132F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C009A5E4 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     CleanupIAMAccess @ 0x1C00ED600 (CleanupIAMAccess.c)
 *     _SetMagnificationInputTransform @ 0x1C00EFCE8 (_SetMagnificationInputTransform.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KPROCESS *v5; // rax
  struct _KPROCESS *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11[3]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  if ( *(_QWORD *)(v1 + 208) )
  {
    memset(v11, 0, 0x24uLL);
    LODWORD(v11[2]) = 3;
    SetMagnificationInputTransform(v11);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1, v3, v4);
  *(_DWORD *)(v1 + 32) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v5 = (struct _KPROCESS *)ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    FreeView(v5, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v6);
  }
  v7 = *(void **)(v1 + 120);
  if ( v7 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 120));
    v2 = MmUnmapViewInSessionSpace(v7);
    ObfDereferenceObject(*(PVOID *)(v1 + 112));
  }
  UnlockObjectAssignment(v1 + 24);
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v9, v8);
  return v2;
}
