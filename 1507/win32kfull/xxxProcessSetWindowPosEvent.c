/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C00F7CEC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rdi

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    *((_DWORD *)v2 + 7) = *(_DWORD *)(a1 + 28);
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  return Win32FreePool(a1);
}
