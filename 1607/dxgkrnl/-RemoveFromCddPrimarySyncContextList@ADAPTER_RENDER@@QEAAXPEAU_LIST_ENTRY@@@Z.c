/*
 * XREFs of ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00076AC
 * Callers:
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00943C8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList(ADAPTER_RENDER *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // r8

  Flink = a2->Flink;
  if ( a2->Flink )
  {
    Blink = a2->Blink;
    if ( Flink->Blink != a2 || Blink->Flink != a2 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    --*((_DWORD *)this + 140);
  }
}
