/*
 * XREFs of ?FindPrecedingVisibleWindow@CWindowList@@AEAAPEAVCTopLevelWindow@@PEAU_LIST_ENTRY@@@Z @ 0x18002D89C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindow(CWindowList *this, struct _LIST_ENTRY *a2)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *WindowListForDesktop; // rcx
  struct _LIST_ENTRY *Flink; // rax

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
          return (struct _LIST_ENTRY *)v2;
      }
      return v3[24].Flink;
    }
  }
  return (struct _LIST_ENTRY *)v2;
}
