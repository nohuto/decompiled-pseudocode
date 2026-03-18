/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C01252C8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  __int64 v2; // rdx
  void **v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8

  v3 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v3 )
  {
    memmove(v3[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    *((_DWORD *)v3 + 7) = *(_DWORD *)(a1 + 28);
    xxxEndDeferWindowPosEx((struct tagSMWP *)v3, 0LL, v5);
  }
  return Win32FreePool(a1, v2, v4);
}
