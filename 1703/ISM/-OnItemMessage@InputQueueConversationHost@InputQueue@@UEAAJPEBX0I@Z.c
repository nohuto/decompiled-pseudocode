/*
 * XREFs of ?OnItemMessage@InputQueueConversationHost@InputQueue@@UEAAJPEBX0I@Z @ 0x18006CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputQueue::InputQueueConversationHost::OnItemMessage(
        void ***this,
        const void *a2,
        struct InputQueueMessage *a3,
        const char *a4)
{
  return InputQueue::OnMessage(this[2], a3, (unsigned int)a4, a4);
}
