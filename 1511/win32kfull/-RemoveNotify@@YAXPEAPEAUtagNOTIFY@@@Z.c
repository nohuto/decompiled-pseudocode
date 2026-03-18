/*
 * XREFs of ?RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z @ 0x1C00DCB0C
 * Callers:
 *     DestroyNotify @ 0x1C00DCAE0 (DestroyNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveNotify(struct tagNOTIFY ***a1)
{
  struct tagNOTIFY **v1; // rbx
  struct tagNOTIFY *v2; // rax

  v1 = *a1;
  v2 = **a1;
  *a1 = (struct tagNOTIFY **)v2;
  if ( !v2 )
    gpLastPendingNotify = (unsigned __int64)a1 & ((unsigned __int128)-(__int128)(unsigned __int64)gpPendingNotifies >> 64);
  HMAssignmentUnlock(v1 + 1);
  if ( v1 == (struct tagNOTIFY **)&unk_1C03277A0 )
    dword_1C03234F0 = 0;
  else
    Win32FreePool(v1);
}
