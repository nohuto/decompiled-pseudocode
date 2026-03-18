/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C01022D4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1C0075248 (InternalBeginDeferWindowPos.c)
 *     memmove @ 0x1C0152980 (memmove.c)
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
