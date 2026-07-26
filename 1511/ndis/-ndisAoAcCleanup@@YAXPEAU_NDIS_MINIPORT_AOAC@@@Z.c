/*
 * XREFs of ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0068558
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcCleanup(struct _NDIS_MINIPORT_AOAC *a1)
{
  _LIST_ENTRY *p_HandleList; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v3; // r8

  p_HandleList = &a1->HandleList;
  while ( p_HandleList->Flink != p_HandleList )
  {
    Flink = p_HandleList->Flink;
    v3 = p_HandleList->Flink->Flink;
    if ( p_HandleList->Flink->Blink != p_HandleList || v3->Blink != Flink )
      __fastfail(3u);
    p_HandleList->Flink = v3;
    v3->Blink = p_HandleList;
    --a1->HandleListCount;
    Flink[1].Blink = 0LL;
    LOBYTE(Flink[2].Flink) = 1;
  }
}
