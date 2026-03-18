/*
 * XREFs of MiPfCompleteInPageSupport @ 0x140038890
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1400387EC (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x140116FD4 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a2 == 1 )
    *(_BYTE *)(a1 + 189) &= 0xFCu;
  *(_BYTE *)(a1 + 191) |= 0x80u;
  return MiWaitForInPageComplete(a1, (__int64)&v3);
}
