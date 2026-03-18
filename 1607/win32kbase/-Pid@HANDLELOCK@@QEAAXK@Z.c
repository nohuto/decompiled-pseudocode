/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002A4AC
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  struct HOBJ__ **EntryObject; // rax
  struct _BASEOBJECT *v3; // rdx

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  EntryObject = (struct HOBJ__ **)GdiHandleManager::GetEntryObject(
                                    (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext,
                                    **(_DWORD **)this & 0xFFFFFF);
  RECHMGRCREATE(*EntryObject, v3);
}
