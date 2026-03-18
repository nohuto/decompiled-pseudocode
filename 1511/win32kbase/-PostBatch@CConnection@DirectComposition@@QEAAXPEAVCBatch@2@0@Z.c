/*
 * XREFs of ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C0012F84
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00139BC (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::PostBatch(
        DirectComposition::CConnection *this,
        struct _SLIST_ENTRY *a2,
        struct DirectComposition::CBatch *a3)
{
  struct _SLIST_ENTRY *Next; // rax

  Next = a2->Next;
  *((_QWORD *)&a2[1].Next + 1) = a2->Next;
  if ( Next )
    *((_QWORD *)&Next[1].Next + 1) = a3;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 6, a2);
  KeSetEvent(**((PRKEVENT **)this + 11), 1, 0);
}
