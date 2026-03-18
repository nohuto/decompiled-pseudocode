/*
 * XREFs of GrepIsPublicPFTSemaphoreOwnedByCurrentThread @ 0x140327A40
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x14009FE14 (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

_BOOL8 __fastcall GrepIsPublicPFTSemaphoreOwnedByCurrentThread(int a1, __int64 a2)
{
  struct _ERESOURCE *v2; // rcx

  v2 = *(struct _ERESOURCE **)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20320LL);
  return v2 && GrepIsLockOwnedByCurrentThread(v2);
}
