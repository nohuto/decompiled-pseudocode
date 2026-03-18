/*
 * XREFs of ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C00F8790
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C00F8580 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::CancelBuffer(
        struct IMessageCallSendHost *a1,
        void **a2,
        __int64 a3,
        char *a4)
{
  CoreMessagingK::BufferCache::Free(a4 - 80);
  return 0LL;
}
