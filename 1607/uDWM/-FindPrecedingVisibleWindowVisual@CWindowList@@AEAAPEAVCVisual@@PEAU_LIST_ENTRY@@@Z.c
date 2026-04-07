/*
 * XREFs of ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x180030C94
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindowVisual(CWindowList *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *WindowListForDesktop; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2->Flink != a2 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, (__int64)a2[7].Blink);
    if ( v3 != WindowListForDesktop )
    {
      while ( 1 )
      {
        Flink = v3[24].Flink;
        if ( Flink )
        {
          if ( Flink[1].Blink )
            break;
        }
        v3 = v3->Blink;
        if ( v3 == WindowListForDesktop )
          return v2;
      }
      v6 = v3[25].Flink;
      if ( !v6 )
        return v3[24].Flink;
      v2 = v3[25].Flink;
      if ( !v6[1].Blink )
        return v3[24].Flink;
    }
  }
  return v2;
}
