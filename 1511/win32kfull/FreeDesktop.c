/*
 * XREFs of FreeDesktop @ 0x1C00D3310
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00CF984 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C00D3DDC (_SetMagnificationInputTransform.c)
 *     CleanupIAMAccess @ 0x1C00D4B40 (CleanupIAMAccess.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E8BF0 (Win32UnmapViewInSessionSpace.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  struct _KPROCESS *v3; // rax
  struct _KPROCESS *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD v9[14]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  if ( *(_QWORD *)(v1 + 208) )
  {
    memset(v9, 0, 36);
    v9[8] = 3;
    SetMagnificationInputTransform(v9);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 32) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v3 = (struct _KPROCESS *)ReferenceDwmProcess();
  v4 = v3;
  if ( v3 )
  {
    FreeView(v3, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v4);
  }
  v5 = *(void **)(v1 + 120);
  if ( v5 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 120));
    v2 = Win32UnmapViewInSessionSpace(v5);
    Win32DestroySection(*(PVOID *)(v1 + 112));
  }
  UnlockObjectAssignment(v1 + 24);
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v7, v6);
  return v2;
}
